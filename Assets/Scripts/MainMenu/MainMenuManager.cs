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
        removeAdsPrice.text = price;
    }

    public void RemoveAds() {
        PlayerPrefs.SetInt(Utils.removeAdsId, 1);
        ShowSuccessPanel();
        HideRemoveAds();
        removeAdIcon.gameObject.SetActive(false);
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
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideRemoveAds() {
        removeAdsPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowSuccessPanel() {
        purchaseSuccessfulPanel.SetActive(true);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideSuccessPanel() {
        purchaseSuccessfulPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowErrorPanel() {
        purchaseErrorPanel.SetActive(true);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideErrorPanel() {
        purchaseErrorPanel.SetActive(false);
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
