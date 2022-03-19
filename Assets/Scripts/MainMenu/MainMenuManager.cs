using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using TMPro;

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
    }

    public void Skin()
    {
        SceneManager.LoadScene(Utils.inventory);
    }

    public void ShowRemoveAds() {
        removeAdsPanel.SetActive(true);
    }

    public void HideRemoveAds() {
        removeAdsPanel.SetActive(false);
    }

    public void ShowSuccessPanel() {
        purchaseSuccessfulPanel.SetActive(true);
    }

    public void HideSuccessPanel() {
        purchaseSuccessfulPanel.SetActive(false);
    }

    public void ShowErrorPanel() {
        purchaseErrorPanel.SetActive(true);
    }

    public void HideErrorPanel() {
        purchaseErrorPanel.SetActive(false);
    }

    public void Play() {
        SceneManager.LoadScene(Utils.world);
    }
}
