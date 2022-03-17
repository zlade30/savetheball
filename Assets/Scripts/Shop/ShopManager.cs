using UnityEngine;
using UnityEngine.Purchasing;

public class ShopManager : MonoBehaviour, IStoreListener {

    private IStoreController controller;
    private IExtensionProvider extensions;

    [SerializeField]
    private IAPButton lifePrice;
    [SerializeField]
    private IAPButton starPrice;
    [SerializeField]
    private IAPButton firePrice;
    [SerializeField]
    private IAPButton icePrice;
    [SerializeField]
    private IAPButton shieldPrice;
    [SerializeField]
    private IAPButton teleportPrice;

    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    void Start()
    {
        // If we haven't set up the Unity Purchasing reference
        if (m_StoreController == null)
        {
            // Begin to configure our connection to Purchasing
            InitializePurchasing();
        }
    }

    public void InitializePurchasing() 
    {
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
        builder.AddProduct("com.zalstudio.savedball.remove.ads", ProductType.NonConsumable);
        // // Continue adding the non-consumable product.
        // builder.AddProduct(kProductIDNonConsumable, ProductType.NonConsumable);
        // // And finish adding the subscription product. Notice this uses store-specific IDs, illustrating
        // // if the Product ID was configured differently between Apple and Google stores. Also note that
        // // one uses the general kProductIDSubscription handle inside the game - the store-specific IDs 
        // // must only be referenced here. 
        // builder.AddProduct(kProductIDSubscription, ProductType.Subscription, new IDs(){
        //     { kProductNameAppleSubscription, AppleAppStore.Name },
        //     { kProductNameGooglePlaySubscription, GooglePlay.Name },
        // });

        // Kick off the remainder of the set-up with an asynchrounous call, passing the configuration 
        // and this class' instance. Expect a response either in OnInitialized or OnInitializeFailed.
        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;

        foreach (var product in controller.products.all) {
            Debug.Log (product.metadata.localizedTitle);
            Debug.Log (product.metadata.localizedDescription);
            Debug.Log (product.metadata.localizedPriceString);
            Debug.Log (product.metadata.isoCurrencyCode);
        }
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) 
    {
        // // A consumable product has been purchased by this user.
        // if (String.Equals(args.purchasedProduct.definition.id, kProductIDConsumable, StringComparison.Ordinal))
        // {
        //     Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
        //     // The consumable item has been successfully purchased, add 100 coins to the player's in-game score.
        //     ScoreManager.score += 100;
        // }
        // // Or ... a non-consumable product has been purchased by this user.
        // else if (String.Equals(args.purchasedProduct.definition.id, kProductIDNonConsumable, StringComparison.Ordinal))
        // {
        //     Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
        //     // TODO: The non-consumable item has been successfully purchased, grant this item to the player.
        // }
        // // Or ... a subscription product has been purchased by this user.
        // else if (String.Equals(args.purchasedProduct.definition.id, kProductIDSubscription, StringComparison.Ordinal))
        // {
        //     Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
        //     // TODO: The subscription item has been successfully purchased, grant this to the player.
        // }
        // // Or ... an unknown product has been purchased by this user. Fill in additional products here....
        // else 
        // {
        //     Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        // }

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }

    public void OnLifePurchaseComplete()
    {
        Debug.Log("Success Life Purchase");
        int value = PlayerPrefs.GetInt(Utils.life);
        value += 3;
        PlayerPrefs.SetInt(Utils.life, value);
    }

    public void OnStarPurchaseComplete()
    {
        Debug.Log("Success Star Purchase");
        int value = PlayerPrefs.GetInt(Utils.star);
        value += 3;
        PlayerPrefs.SetInt(Utils.star, value);
    }

    public void OnFirePurchaseComplete()
    {
        Debug.Log("Success Fire Purchase");
        int value = PlayerPrefs.GetInt(Utils.fire);
        value += 3;
        PlayerPrefs.SetInt(Utils.fire, value);
    }

    public void OnIcePurchaseComplete()
    {
        Debug.Log("Success Ice Purchase");
        int value = PlayerPrefs.GetInt(Utils.ice);
        value += 3;
        PlayerPrefs.SetInt(Utils.ice, value);
    }

    public void OnShieldPurchaseComplete()
    {
        Debug.Log("Success Shield Purchase");
        int value = PlayerPrefs.GetInt(Utils.shield);
        value += 3;
        PlayerPrefs.SetInt(Utils.shield, value);
    }

    public void OnTeleportPurchaseComplete()
    {
        Debug.Log("Success Teleport Purchase");
        int value = PlayerPrefs.GetInt(Utils.teleport);
        value += 3;
        PlayerPrefs.SetInt(Utils.teleport, value);
    }

    public void OnRemoveAdsPurchaseComplete()
    {
        Debug.Log("Success RemoveAds Purchase");
        PlayerPrefs.SetInt("remove_ads", 1);
    }
}
