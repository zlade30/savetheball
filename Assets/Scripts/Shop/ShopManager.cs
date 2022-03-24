using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class ShopManager : MonoBehaviour, IStoreListener {
    [SerializeField]
    private Text lifePrice;
    [SerializeField]
    private Text starPrice;
    [SerializeField]
    private Text firePrice;
    [SerializeField]
    private Text icePrice;
    [SerializeField]
    private Text shieldPrice;
    [SerializeField]
    private Text teleportPrice;
    [SerializeField]
    private Text basketBallPrice;
    [SerializeField]
    private Text soccerBallPrice;
    [SerializeField]
    private Text tennisBallPrice;
    [SerializeField]
    private Text billiardBallPrice;
    [SerializeField]
    private GameObject successfulPurchasePanel;
    [SerializeField]
    private GameObject errorPurchasePanel;
    [SerializeField]
    private GameObject powerupPanel;
    [SerializeField]
    private GameObject skinPanel;
    [SerializeField]
    private GameObject samplePanel;
    [SerializeField]
    private TextMeshProUGUI samplePanelText;

    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    void Start()
    {
        // If we haven't set up the Unity Purchasing reference
        InitializePurchasing();
    }

    public void InitializePurchasing() 
    {
        Debug.Log("Initialize");
        // // If we have already connected to Purchasing ...
        // if (IsInitialized())
        // {
        //     // ... we are done here.
        //     return;
        // }

        // // Create a builder, first passing in a suite of Unity provided stores.
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        // // Add a product to sell / restore by way of its identifier, associating the general identifier
        // // with its store-specific identifiers.
        foreach (string productId in Utils.products) {
            if (productId == Utils.removeAdsId)
                builder.AddProduct(productId, ProductType.NonConsumable);
            else if (productId == Utils.basketBallSkinId)
                builder.AddProduct(productId, ProductType.NonConsumable);
            else if (productId == Utils.soccerBallSkinId)
                builder.AddProduct(productId, ProductType.NonConsumable);
            else if (productId == Utils.tennisBallSkinId)
                builder.AddProduct(productId, ProductType.NonConsumable);
            else if (productId == Utils.billiardBallSkinId)
                builder.AddProduct(productId, ProductType.NonConsumable);
            else
                builder.AddProduct(productId, ProductType.Consumable);
            Debug.Log(productId);
        }
        
        UnityPurchasing.Initialize(this, builder);
    }

    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;

        // foreach (var product in controller.products.all) {
        //     Debug.Log (product.metadata.localizedTitle);
        //     Debug.Log (product.metadata.localizedDescription);
        //     Debug.Log (product.metadata.localizedPriceString);
        // }
        
        Product lifeProduct = m_StoreController.products.WithID(Utils.lifeId);
        Product starProduct = m_StoreController.products.WithID(Utils.starId);
        Product fireProduct = m_StoreController.products.WithID(Utils.fireId);
        Product iceProduct = m_StoreController.products.WithID(Utils.iceId);
        Product shieldProduct = m_StoreController.products.WithID(Utils.shieldId);
        Product teleportProduct = m_StoreController.products.WithID(Utils.teleportId);
        Product basketBallSkinProduct = m_StoreController.products.WithID(Utils.basketBallSkinId);
        Product soccerBallSkinProduct = m_StoreController.products.WithID(Utils.soccerBallSkinId);
        Product tennisBallSkinProduct = m_StoreController.products.WithID(Utils.tennisBallSkinId);
        Product billiardBallSkinProduct = m_StoreController.products.WithID(Utils.billiardBallSkinId);
        
        lifePrice.text = ""+lifeProduct.metadata.isoCurrencyCode+" "+lifeProduct.metadata.localizedPriceString;
        starPrice.text = ""+starProduct.metadata.isoCurrencyCode+" "+starProduct.metadata.localizedPriceString;
        firePrice.text = ""+fireProduct.metadata.isoCurrencyCode+" "+fireProduct.metadata.localizedPriceString;
        icePrice.text = ""+iceProduct.metadata.isoCurrencyCode+" "+iceProduct.metadata.localizedPriceString;
        shieldPrice.text = ""+shieldProduct.metadata.isoCurrencyCode+" "+shieldProduct.metadata.localizedPriceString;
        teleportPrice.text = ""+teleportProduct.metadata.isoCurrencyCode+" "+teleportProduct.metadata.localizedPriceString;
        
        basketBallPrice.text = ""+basketBallSkinProduct.metadata.isoCurrencyCode+" "+basketBallSkinProduct.metadata.localizedPriceString;
        soccerBallPrice.text = ""+soccerBallSkinProduct.metadata.isoCurrencyCode+" "+soccerBallSkinProduct.metadata.localizedPriceString;
        tennisBallPrice.text = ""+tennisBallSkinProduct.metadata.isoCurrencyCode+" "+tennisBallSkinProduct.metadata.localizedPriceString;
        billiardBallPrice.text = ""+billiardBallSkinProduct.metadata.isoCurrencyCode+" "+billiardBallSkinProduct.metadata.localizedPriceString;
    }

    void Update()
    {
        if (skinPanel.activeSelf) {
            if (PlayerPrefs.GetInt(Utils.basketBallSkinId) == 1) {
                basketBallPrice.GetComponentInParent<Button>().interactable = false;
                basketBallPrice.text = "Owned";
            }

            if (PlayerPrefs.GetInt(Utils.soccerBallSkinId) == 1) {
                soccerBallPrice.GetComponentInParent<Button>().interactable = false;
                soccerBallPrice.text = "Owned";
            }

            if (PlayerPrefs.GetInt(Utils.tennisBallSkinId) == 1) {
                tennisBallPrice.GetComponentInParent<Button>().interactable = false;
                tennisBallPrice.text = "Owned";
            }

            if (PlayerPrefs.GetInt(Utils.billiardBallSkinId) == 1) {
                billiardBallPrice.GetComponentInParent<Button>().interactable = false;
                billiardBallPrice.text = "Owned";
            }
        }
    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) 
    {
        string productId = args.purchasedProduct.definition.id;
        int value = 0;
        switch (productId) {

            // Consumables

            case Utils.lifeId:
                Debug.Log("Success Life Purchase");
                value = PlayerPrefs.GetInt(Utils.life);
                value += 3;
                PlayerPrefs.SetInt(Utils.life, value);
                break;
            case Utils.starId:
                Debug.Log("Success Star Purchase");
                value = PlayerPrefs.GetInt(Utils.star);
                value += 3;
                PlayerPrefs.SetInt(Utils.star, value);
                break;
            case Utils.fireId:
                Debug.Log("Success Fire Purchase");
                value = PlayerPrefs.GetInt(Utils.fire);
                value += 3;
                PlayerPrefs.SetInt(Utils.fire, value);
                break;
            case Utils.iceId:
                Debug.Log("Success Ice Purchase");
                value = PlayerPrefs.GetInt(Utils.ice);
                value += 3;
                PlayerPrefs.SetInt(Utils.ice, value);
                break;
            case Utils.shieldId:
                Debug.Log("Success Shield Purchase");
                value = PlayerPrefs.GetInt(Utils.shield);
                value += 3;
                PlayerPrefs.SetInt(Utils.shield, value);
                break;
            case Utils.teleportId:
                Debug.Log("Success Teleport Purchase");
                value = PlayerPrefs.GetInt(Utils.teleport);
                value += 3;
                PlayerPrefs.SetInt(Utils.teleport, value);
                break;
            
            // Non Consumables

            case Utils.removeAdsId:
                Debug.Log("Remove ads purchase success");
                PlayerPrefs.SetInt(Utils.removeAdsId, 1);
                break;
            case Utils.basketBallSkinId:
                Debug.Log("Basket ball skin purchase success");
                PlayerPrefs.SetInt(Utils.basketBallSkinId, 1);
                break;
            case Utils.soccerBallSkinId:
                Debug.Log("Soccer ball skin purchase success");
                PlayerPrefs.SetInt(Utils.soccerBallSkinId, 1);
                break;
            case Utils.tennisBallSkinId:
                Debug.Log("Tennis ball skin purchase success");
                PlayerPrefs.SetInt(Utils.tennisBallSkinId, 1);
                break;
            case Utils.billiardBallSkinId:
                Debug.Log("Billiard ball skin purchase success");
                PlayerPrefs.SetInt(Utils.billiardBallSkinId, 1);
                break;
            default:
                break;
        }

        PurchasedSuccessful();

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        PurchasedError();
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }

    public void PurchasedSuccessful()
    {
        successfulPurchasePanel.SetActive(true);
        errorPurchasePanel.SetActive(false);
    }

    public void PurchasedError()
    {
        successfulPurchasePanel.SetActive(false);
        errorPurchasePanel.SetActive(true);
    }

    public void ClosePurchasesPanel()
    {
        successfulPurchasePanel.SetActive(false);
        errorPurchasePanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Back() {
        SceneManager.LoadScene(Utils.mainMenu);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }
}
