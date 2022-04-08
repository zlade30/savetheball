using UnityEngine;
using UnityEngine.SceneManagement;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.UI;
using TMPro;
using System;

public class MainMenuManager : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI removeAdsPrice;
    [SerializeField]
    private GameObject removeAdsPanel;
    [SerializeField]
    private GameObject purchaseSuccessfulPanel;
    [SerializeField]
    private GameObject purchaseErrorPanel;
    [SerializeField]
    private GameObject processingPanel;
    [SerializeField]
    private GameObject sample;
    [SerializeField]
    private TextMeshProUGUI sampleText;
    [SerializeField]
    private GameObject menuPanel;
    [SerializeField]
    private Image removeAdIcon;
    [SerializeField]
    private Image soundOnIcon;
    [SerializeField]
    private Image soundOffIcon;
    [SerializeField]
    private TextMeshProUGUI removeAdsContent;

    // void Awake() {
    //     #if UNITY_ANDROID
    //         PlayGamesPlatform.Activate();
    //     #endif
    // }

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt(Utils.removeAdsId) == 1) {
            menuPanel.GetComponent<GridLayoutGroup>().spacing = new Vector2(50, 0);
            removeAdIcon.gameObject.SetActive(false);
        }

        if (PlayerPrefs.GetInt("initialize") != 1) {
            // Give default values when newly installed
            PlayerPrefs.SetInt("initialize", 1);
            PlayerPrefs.SetInt(Utils.life, 10);
            PlayerPrefs.SetInt(Utils.star, 3);
            PlayerPrefs.SetInt(Utils.fire, 3);
            PlayerPrefs.SetInt(Utils.ice, 3);
            PlayerPrefs.SetInt(Utils.shield, 3);
            PlayerPrefs.SetInt(Utils.teleport, 3);
        }
    }

    // Update is called once per frame
    void Update()
    {
        SoundHandler();
    }

    public void RemoveAdsPrice(string price) {
        removeAdsPrice.text = "<cspace=0.1em> "+price;
    }

    public void ErrorText(string error) {
        removeAdsContent.text = "<cspace=0.1em> "+error;
    }

    public void RemoveAds() {
        PlayerPrefs.SetInt(Utils.removeAdsId, 1);
        ShowSuccessPanel();
        HideRemoveAds();
        removeAdIcon.gameObject.SetActive(false);
        processingPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        menuPanel.GetComponent<GridLayoutGroup>().spacing = new Vector2(50, 0);
    }

    public void RemoveAdsHasReceipt() {
        removeAdsPanel.transform.GetChild(0).Find("RemoveAdsContent").GetComponent<TextMeshProUGUI>().text = "You have already purchased this product before. Kindly click the restore button below to continue.";
        removeAdsPanel.transform.GetChild(0).Find("PurchaseBtn").gameObject.SetActive(false);
        removeAdsPanel.transform.GetChild(0).Find("RestoreBtn").gameObject.SetActive(true);
    }

    public void Shop()
    {
        SceneManager.LoadScene(Utils.shop);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Skin()
    {
        SceneManager.LoadScene(Utils.inventory);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowRemoveAds() {
        removeAdsPanel.SetActive(true);
        removeAdsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideRemoveAds() {
        removeAdsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowSuccessPanel() {
        purchaseSuccessfulPanel.SetActive(true);
        purchaseSuccessfulPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideSuccessPanel() {
        purchaseSuccessfulPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowErrorPanel() {
        purchaseErrorPanel.SetActive(true);
        purchaseErrorPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideErrorPanel() {
        purchaseErrorPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowProcessing() {
        processingPanel.SetActive(true);
        processingPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        removeAdsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideProcessing() {
        processingPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Play() {
        SceneManager.LoadScene(Utils.world);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void SoundHandler() {
        int isVolume = PlayerPrefs.GetInt(Utils.volumeStatus);
        SFXManager.sfxInstance.audio.mute = Convert.ToBoolean(isVolume);
        if (Convert.ToBoolean(isVolume)) {
            soundOnIcon.gameObject.SetActive(false);
            soundOffIcon.gameObject.SetActive(true);
        } else {
            soundOnIcon.gameObject.SetActive(true);
            soundOffIcon.gameObject.SetActive(false);
        }
    }

    public void SoundOn() {
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
        PlayerPrefs.SetInt(Utils.volumeStatus, 0);
    }

    public void SoundOff() {
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
        PlayerPrefs.SetInt(Utils.volumeStatus, 1);
    }

    public void Rate() {
        #if UNITY_ANDROID
            Application.OpenURL("market://details?id=com.zalstudio.savedball");
        #elif UNITY_IPHONE
            Application.OpenURL("itms-apps://apps.apple.com/app/savedball/id1615056738");
        #endif
    }
}
