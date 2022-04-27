using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using System;

public class WheelManager : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI errorContent;
    [SerializeField]
    private Wheel wheel;
    [SerializeField]
    private GameObject spinBtn;
    [SerializeField]
    private GameObject stopBtn;
    [SerializeField]
    private TextMeshProUGUI spinChance;
    [SerializeField]
    private GameObject errorPanel;
    [SerializeField]
    private GameObject rewardPanel;
    [SerializeField]
    private GameObject ads;
    [SerializeField]
    private Sprite[] sprites;
    private RewardedAds rewardedAds;
    private string selectedReward;
    private bool isStarting = false;

    void Start() {
        rewardedAds = ads.GetComponent<RewardedAds>();
        PlayerPrefs.SetInt(Utils.isInWheel, 1);
        var unlockDate = DateTime.Parse(PlayerPrefs.GetString(Utils.dailySpin));
        if(unlockDate < DateTime.Now) {
            PlayerPrefs.SetInt(Utils.spinAdsLeft, 3);
        }
        else {
            //object still locked, how long you ask?: 
            TimeSpan diff = unlockDate.Subtract(DateTime.Now);
            Debug.Log("object locked for " + diff.TotalHours + " more hours");
        }
    }

    void Update() {
        int chance = PlayerPrefs.GetInt(Utils.spinAdsLeft);
        spinChance.text = chance.ToString();
    }

    public void StopWheel() {
        wheel.isStop = true;
    }

    public void StartWheel() {
        if (int.Parse(spinChance.text) > 0) {
            rewardedAds.ShowAd();
            spinBtn.SetActive(false);
            stopBtn.SetActive(true);
            wheel.StartWheel();
            int chanceValue = PlayerPrefs.GetInt(Utils.spinAdsLeft);
            chanceValue--;
            PlayerPrefs.SetInt(Utils.spinAdsLeft, chanceValue);
            PlayerPrefs.SetString(Utils.dailySpin, DateTime.Now.AddHours(25 - System.DateTime.Now.Hour).ToString());
            isStarting = true;
        } else {
            errorContent.text = "<cspace=0.1em>3 spins has already been used. Please try again tomorrow.";
            ShowErrorPanel();
        }
    }

    public void ShowErrorPanel() {
        errorPanel.SetActive(true);
        errorPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CloseErrorPanel() {
        errorPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowRewardPanel() {
        Image rewardIcon = rewardPanel.transform.GetChild(0).GetChild(1).GetComponent<Image>();
        TextMeshProUGUI rewardText = rewardPanel.transform.GetChild(0).GetChild(2).GetComponent<TextMeshProUGUI>();

        int starValue = PlayerPrefs.GetInt(Utils.star);
        int fireValue = PlayerPrefs.GetInt(Utils.fire);
        int iceValue = PlayerPrefs.GetInt(Utils.ice);
        int shieldValue = PlayerPrefs.GetInt(Utils.shield);
        int teleportValue = PlayerPrefs.GetInt(Utils.teleport);
        int coinValue = PlayerPrefs.GetInt(Utils.coin);

        switch (selectedReward) {
            case "Shield":
                rewardIcon.sprite = sprites[0];
                rewardText.text = "<cspace=0.1em> You got +1 shield powerup.";
                shieldValue++;
                PlayerPrefs.SetInt(Utils.shield, shieldValue);
                break;
            case "Teleport":
                rewardIcon.sprite = sprites[1];
                rewardText.text = "<cspace=0.1em> You got +1 teleport powerup.";
                teleportValue++;
                PlayerPrefs.SetInt(Utils.teleport, teleportValue);
                break;
            case "Coin5":
                rewardIcon.sprite = sprites[2];
                rewardText.text = "<cspace=0.1em> You got +5 coins.";
                coinValue += 5;
                PlayerPrefs.SetInt(Utils.coin, coinValue);
                break;
            case "Fire":
                rewardIcon.sprite = sprites[3];
                rewardText.text = "<cspace=0.1em> You got +1 fire powerup.";
                fireValue++;
                PlayerPrefs.SetInt(Utils.fire, fireValue);
                break;
            case "Ice":
                rewardIcon.sprite = sprites[4];
                rewardText.text = "<cspace=0.1em> You got +1 ice powerup.";
                iceValue++;
                PlayerPrefs.SetInt(Utils.ice, iceValue);
                break;
            case "Coin10":
                rewardIcon.sprite = sprites[5];
                rewardText.text = "<cspace=0.1em> You got +10 coins.";
                coinValue += 10;
                PlayerPrefs.SetInt(Utils.coin, coinValue);
                break;
            case "Coin15":
                rewardIcon.sprite = sprites[6];
                rewardText.text = "<cspace=0.1em> You got +15 coins.";
                coinValue += 15;
                PlayerPrefs.SetInt(Utils.coin, coinValue);
                break;
            case "Star":
                rewardIcon.sprite = sprites[7];
                rewardText.text = "<cspace=0.1em> You got +1 star powerup.";
                starValue++;
                PlayerPrefs.SetInt(Utils.star, starValue);
                break;
            default:
                break;
        }

        rewardPanel.SetActive(true);
        rewardPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        spinBtn.SetActive(true);
        stopBtn.SetActive(false);
        isStarting = false;
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CloseRewardPanel() {
        rewardPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    private void OnTriggerEnter2D(Collider2D other) {
        selectedReward = other.gameObject.name;
        PlayerPrefs.SetString(Utils.selectedReward, selectedReward);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tick);
    }

    private void OnApplicationQuit() {
        PlayerPrefs.SetInt(Utils.isInWheel, 0);
    }

    public void Back() {
        if (!isStarting) {
            SceneManager.LoadScene(Utils.mainMenu);
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
            PlayerPrefs.SetInt(Utils.isInWheel, 0);
        } else {
            errorContent.text = "<cspace=0.1em>Kindly stop the wheel on spinning first before going out.";
            ShowErrorPanel();
        }
    }
}
