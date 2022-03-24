using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using TMPro;
using System;

public class MainMenuManager : MonoBehaviour, IStoreListener
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
    private static IStoreController ISController;
    private static IExtensionProvider storeProvider;

    // Start is called before the first frame update
    void Start()
    {
        // If we haven't set up the Unity Purchasing reference
        InitializePurchasing();

        if (PlayerPrefs.GetInt(Utils.removeAdsId) == 1) {
            menuPanel.GetComponent<GridLayoutGroup>().spacing = new Vector2(50, 0);
            removeAdIcon.gameObject.SetActive(false);
        }

        if (PlayerPrefs.GetInt("initialize") != 1) {
            // Give default values when newly installed
            PlayerPrefs.SetInt("initialize", 1);
            PlayerPrefs.SetInt(Utils.life, 3);
            PlayerPrefs.SetInt(Utils.star, 3);
            PlayerPrefs.SetInt(Utils.fire, 3);
            PlayerPrefs.SetInt(Utils.ice, 3);
            PlayerPrefs.SetInt(Utils.shield, 3);
            PlayerPrefs.SetInt(Utils.teleport, 3);
        }
    }

    public void InitializePurchasing() 
    {
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        builder.AddProduct(Utils.removeAdsId, ProductType.NonConsumable);
        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");
        ISController = controller;
        storeProvider = extensions;

        Product removeAdProduct = ISController.products.WithID(Utils.removeAdsId);
        removeAdsPrice.text = ""+removeAdProduct.metadata.isoCurrencyCode+" "+removeAdProduct.metadata.localizedPriceString;
    
        // sample.SetActive(true);
        // sampleText.text = ""+removeAdProduct.metadata.isoCurrencyCode+" "+removeAdProduct.metadata.localizedPriceString;
    }

    // Update is called once per frame
    void Update()
    {
        SoundHandler();
    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
        // sample.SetActive(true);
        // sampleText.text = error.ToString();
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) 
    {
        string productId = args.purchasedProduct.definition.id;
        switch (productId) {
            case Utils.removeAdsId:
                Debug.Log("Remove ads purchase success");
                PlayerPrefs.SetInt(Utils.removeAdsId, 1);
                ShowSuccessPanel();
                HideRemoveAds();
                removeAdIcon.gameObject.SetActive(false);
                menuPanel.GetComponent<GridLayoutGroup>().spacing = new Vector2(50, 0);
                break;
            default:
                break;
        }

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        ShowErrorPanel();
        HideRemoveAds();
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
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
}
