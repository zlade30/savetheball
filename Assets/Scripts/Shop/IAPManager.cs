using System;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPManager : MonoBehaviour, IStoreListener
{
    public static IAPManager Instance { set; get; }
 
    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.
    private MainMenuManager mainMenuManager;
    private ShopManager shopManager;
 
    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
            print("IAP INSTANCIADO");
            if (m_StoreController != null && m_StoreExtensionProvider != null) {
                HandlePrices();
            }
        }
        else
            print("IAP já INSTANCIADO");
 
    }
 
    private void Start()
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
        // If we have already connected to Purchasing ...
        if (IsInitialized())
        {
            // ... we are done here.
            return;
        }
 
        //Consumable - comprar mais de uma ves
        //Non Consumable - comprar uma vez
        // Create a builder, first passing in a suite of Unity provided stores.
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
 
        builder.AddProduct(Utils.removeAdsId, ProductType.NonConsumable);
        builder.AddProduct(Utils.basketBallSkinId, ProductType.NonConsumable);
        builder.AddProduct(Utils.soccerBallSkinId, ProductType.NonConsumable);
        builder.AddProduct(Utils.tennisBallSkinId, ProductType.NonConsumable);
        builder.AddProduct(Utils.billiardBallSkinId, ProductType.NonConsumable);
        builder.AddProduct(Utils.starId, ProductType.Consumable);
        builder.AddProduct(Utils.iceId, ProductType.Consumable);
        builder.AddProduct(Utils.fireId, ProductType.Consumable);
        builder.AddProduct(Utils.shieldId, ProductType.Consumable);
        builder.AddProduct(Utils.teleportId, ProductType.Consumable);
     
        //builder.AddProduct(kProductIDNonConsumable, ProductType.NonConsumable);
 
        /*builder.AddProduct(kProductIDSubscription, ProductType.Subscription, new IDs(){
                { kProductNameAppleSubscription, AppleAppStore.Name },
                { kProductNameGooglePlaySubscription, GooglePlay.Name },
            });*/
 
        // Kick off the remainder of the set-up with an asynchrounous call, passing the configuration
        // and this class' instance. Expect a response either in OnInitialized or OnInitializeFailed.
        UnityPurchasing.Initialize(this, builder);
    }

    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }
 
    public void RemoveAds() { BuyProductID(Utils.removeAdsId); }
    public void BuyStar() { BuyProductID(Utils.starId); }
    public void BuyFire() { BuyProductID(Utils.fireId); }
    public void BuyIce() { BuyProductID(Utils.iceId); }
    public void BuyShield() { BuyProductID(Utils.shieldId); }
    public void BuyTeleport() { BuyProductID(Utils.teleportId); }
    public void BuyBasketballSkin() { BuyProductID(Utils.basketBallSkinId); }
    public void BuySoccerballSkin() { BuyProductID(Utils.soccerBallSkinId); }
    public void BuyTennisballSkin() { BuyProductID(Utils.tennisBallSkinId); }
    public void BuyBilliardballSkin() { BuyProductID(Utils.billiardBallSkinId); }
 
    private void BuyProductID(string productId)
    {
        // If Purchasing has been initialized ...
        if (IsInitialized())
        {
            // ... look up the Product reference with the general product identifier and the Purchasing
            // system's products collection.
            Product product = m_StoreController.products.WithID(productId);
 
            // If the look up found a product for this device's store and that product is ready to be sold ...
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                // ... buy the product. Expect a response either through ProcessPurchase or OnPurchaseFailed
                // asynchronously.
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                // ... report the product look-up failure situation
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or
            // retrying initiailization.
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }
 
    public string GetPrice(string ID)
    {
        string s;
 
        s = m_StoreController.products.WithID(ID).metadata.isoCurrencyCode.ToString() +" "+ m_StoreController.products.WithID(ID).metadata.localizedPrice.ToString("0.00");
     
        return s;
    }
 
    public string GetTitle(string ID)
    {
        string s;
 
        s = m_StoreController.products.WithID(ID).metadata.localizedTitle;
 
        return s;
    }
 
    public bool GetReceipt(string ID)
    {
        Product p = m_StoreController.products.WithID(ID);
        return p.hasReceipt;
    }
 
    // Restore purchases previously made by this customer. Some platforms automatically restore purchases, like Google.
    // Apple currently requires explicit purchase restoration for IAP, conditionally displaying a password prompt.
    /*FOR APPLE*/
    public void RestorePurchases()
    {
        // If Purchasing has not yet been set up ...
        if (!IsInitialized())
        {
            // ... report the situation and stop restoring. Consider either waiting longer, or retrying initialization.
            Debug.Log("RestorePurchases FAIL. Not initialized.");
            return;
        }
 
        // If we are running on an Apple device ...
        if (Application.platform == RuntimePlatform.IPhonePlayer ||
            Application.platform == RuntimePlatform.OSXPlayer)
        {
            // ... begin restoring purchases
            Debug.Log("RestorePurchases started ...");
 
            // Fetch the Apple store-specific subsystem.
            var apple = m_StoreExtensionProvider.GetExtension<IAppleExtensions>();
            // Begin the asynchronous process of restoring purchases. Expect a confirmation response in
            // the Action<bool> below, and ProcessPurchase if there are previously purchased products to restore.
            apple.RestoreTransactions((result) =>
            {
                // The first phase of restoration. If no more responses are received on ProcessPurchase then
                // no purchases are available to be restored.
                Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
            });
        }
        // Otherwise ...
        else
        {
            // We are not running on an Apple device. No work is necessary to restore purchases.
            Debug.Log("RestorePurchases FAIL. Not supported on this platform. Current = " + Application.platform);
        }
    }
 
 
    //
    // --- IStoreListener
    //
 
    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");
 
        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;
        HandlePrices();
    }
 
 
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }
 
 
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        mainMenuManager = Camera.main.GetComponent<MainMenuManager>();
        shopManager = Camera.main.GetComponent<ShopManager>();

        // A consumable product has been purchased by this user.
        if (String.Equals(args.purchasedProduct.definition.id, Utils.removeAdsId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            Debug.Log("Remove ads purchase success");
            mainMenuManager.RemoveAds();
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.starId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.starId);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.fireId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.fireId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.iceId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.iceId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.shieldId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.shieldId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.teleportId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.teleportId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.basketBallSkinId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.basketBallSkinId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.soccerBallSkinId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.soccerBallSkinId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.tennisBallSkinId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.tennisBallSkinId);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Utils.billiardBallSkinId, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            shopManager.BuyShopProduct(Utils.billiardBallSkinId);
        }
        // Or ... an unknown product has been purchased by this user. Fill in additional products here....
        else
        {
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }
 
        //Analytics.Transaction("teste", 0.99m, "USD", null, null);
        // Return a flag indicating whether this product has completely been received, or if the application needs
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still
        // saving purchased products to the cloud, and when that save is delayed.
        return PurchaseProcessingResult.Complete;
    }

    void HandlePrices() {
        mainMenuManager = Camera.main.GetComponent<MainMenuManager>();
        shopManager = Camera.main.GetComponent<ShopManager>();
        
        if (mainMenuManager != null) {
            mainMenuManager.RemoveAdsPrice(GetPrice(Utils.removeAdsId));
            if (GetReceipt(Utils.removeAdsId))
                mainMenuManager.RemoveAdsHasReceipt();
        }

        if (shopManager != null) {
            shopManager.GetPrice(Utils.basketBallSkinId, GetPrice(Utils.basketBallSkinId));
            shopManager.GetPrice(Utils.soccerBallSkinId, GetPrice(Utils.soccerBallSkinId));
            shopManager.GetPrice(Utils.tennisBallSkinId, GetPrice(Utils.tennisBallSkinId));
            shopManager.GetPrice(Utils.billiardBallSkinId, GetPrice(Utils.billiardBallSkinId));
            shopManager.GetPrice(Utils.lifeId, GetPrice(Utils.lifeId));
            shopManager.GetPrice(Utils.starId, GetPrice(Utils.starId));
            shopManager.GetPrice(Utils.iceId, GetPrice(Utils.iceId));
            shopManager.GetPrice(Utils.fireId, GetPrice(Utils.fireId));
            shopManager.GetPrice(Utils.shieldId, GetPrice(Utils.shieldId));
            shopManager.GetPrice(Utils.teleportId, GetPrice(Utils.teleportId));
        }
    }
 
 
    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }
}
