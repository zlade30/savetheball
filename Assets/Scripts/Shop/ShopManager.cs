using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Purchasing;

public class ShopManager : MonoBehaviour {
    [SerializeField]
    private TextMeshProUGUI starPrice;
    [SerializeField]
    private TextMeshProUGUI firePrice;
    [SerializeField]
    private TextMeshProUGUI icePrice;
    [SerializeField]
    private TextMeshProUGUI shieldPrice;
    [SerializeField]
    private TextMeshProUGUI teleportPrice;
    [SerializeField]
    private TextMeshProUGUI basketBallPrice;
    [SerializeField]
    private TextMeshProUGUI soccerBallPrice;
    [SerializeField]
    private TextMeshProUGUI tennisBallPrice;
    [SerializeField]
    private TextMeshProUGUI billiardBallPrice;
    [SerializeField]
    private TextMeshProUGUI powPackPrice1;
    [SerializeField]
    private TextMeshProUGUI powPackPrice2;
    [SerializeField]
    private TextMeshProUGUI powPackPrice3;
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
    private GameObject confirmPanel;
    [SerializeField]
    private GameObject notEnoughCoinPanel;
    [SerializeField]
    private TextMeshProUGUI samplePanelText;
    [SerializeField]
    private GameObject restorePurchase;
    [SerializeField]
    private Button basketBallCoinBtn;
    [SerializeField]
    private Button basketBallCashBtn;
    [SerializeField]
    private Button soccerBallCoinBtn;
    [SerializeField]
    private Button soccerBallCashBtn;
    [SerializeField]
    private Button tennisBallCoinBtn;
    [SerializeField]
    private Button tennisBallCashBtn;
    [SerializeField]
    private Button billiardBallCoinBtn;
    [SerializeField]
    private Button billiardBallCashBtn;
    [SerializeField]
    private GameObject processingPanel;
    [SerializeField]
    private TextMeshProUGUI errorContent;

    private string selectedProduct;
    private int coinToDeduct;

    void Start()
    {
        if (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.OSXPlayer) {
            restorePurchase.SetActive(true);
        }
    }

    void Update()
    {
        if (PlayerPrefs.GetInt(Utils.basketBallSkinId) == 1) {
            basketBallCoinBtn.gameObject.SetActive(false);
            basketBallCashBtn.interactable = false;
            basketBallCashBtn.gameObject.transform.GetChild(0).GetComponent<Text>().text = "Owned";
        }

        if (PlayerPrefs.GetInt(Utils.soccerBallSkinId) == 1) {
            soccerBallCoinBtn.gameObject.SetActive(false);
            soccerBallCashBtn.interactable = false;
            soccerBallCashBtn.gameObject.transform.GetChild(0).GetComponent<Text>().text = "Owned";
        }

        if (PlayerPrefs.GetInt(Utils.tennisBallSkinId) == 1) {
            tennisBallCoinBtn.gameObject.SetActive(false);
            tennisBallCashBtn.interactable = false;
            tennisBallCashBtn.gameObject.transform.GetChild(0).GetComponent<Text>().text = "Owned";
        }

        if (PlayerPrefs.GetInt(Utils.billiardBallSkinId) == 1) {
            billiardBallCoinBtn.gameObject.SetActive(false);
            billiardBallCashBtn.interactable = false;
            billiardBallCashBtn.gameObject.transform.GetChild(0).GetComponent<Text>().text = "Owned";
        }
    }

    public void BuyShopProduct(string productId) 
    {
        switch (productId) {
            // Consumables
            case Utils.starId:
                Debug.Log("Success Star Purchase");
                AddValue(Utils.star);
                break;
            case Utils.fireId:
                Debug.Log("Success Fire Purchase");
                AddValue(Utils.fire);
                break;
            case Utils.iceId:
                Debug.Log("Success Ice Purchase");
                AddValue(Utils.ice);
                break;
            case Utils.shieldId:
                Debug.Log("Success Shield Purchase");
                AddValue(Utils.shield);
                break;
            case Utils.teleportId:
                Debug.Log("Success Teleport Purchase");
                AddValue(Utils.teleport);
                break;
            case Utils.powPack1Id:
                Debug.Log("Success PowPack1");
                AddValue(Utils.ice);
                AddValue(Utils.fire);
                AddValue(Utils.star);
                break;
            case Utils.powPack2Id:
                Debug.Log("Success PowPack2");
                AddValue(Utils.teleport);
                AddValue(Utils.star);
                AddValue(Utils.shield);
                break;
            case Utils.powPack3Id:
                Debug.Log("Success PowPack3");
                AddValue(Utils.teleport);
                AddValue(Utils.star);
                AddValue(Utils.shield);
                AddValue(Utils.ice);
                AddValue(Utils.fire);
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
    }

    public void GetPrice(string productId, string price)
    {
        switch (productId) {
            // Consumables
            case Utils.starId:
                starPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.fireId:
                firePrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.iceId:
                icePrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.shieldId:
                shieldPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.teleportId:
                teleportPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.powPack1Id:
                powPackPrice1.text = "<cspace=0.1em> "+price;
                break;
            case Utils.powPack2Id:
                powPackPrice2.text = "<cspace=0.1em> "+price;
                break;
            case Utils.powPack3Id:
                powPackPrice3.text = "<cspace=0.1em> "+price;
                break;
            
            // Non Consumables
            case Utils.basketBallSkinId:
                basketBallPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.soccerBallSkinId:
                soccerBallPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.tennisBallSkinId:
                tennisBallPrice.text = "<cspace=0.1em> "+price;
                break;
            case Utils.billiardBallSkinId:
                billiardBallPrice.text = "<cspace=0.1em> "+price;
                break;
            default:
                break;
        }
    }

    public void PurchasedSuccessful()
    {
        successfulPurchasePanel.SetActive(true);
        successfulPurchasePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void PurchasedError()
    {
        errorPurchasePanel.SetActive(true);
        errorPurchasePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ClosePurchasesPanel()
    {
        successfulPurchasePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        confirmPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        errorPurchasePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ErrorText(string content) {
        errorContent.text = content;
    }

    public void Back() {
        SceneManager.LoadScene(Utils.mainMenu);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void PurchaseByCoin(GameObject btn) {
        GameObject parent = btn.transform.parent.gameObject;
        TextMeshProUGUI title = parent.transform.GetChild(0).GetComponent<TextMeshProUGUI>();
        Sprite sprite = parent.transform.GetChild(1).GetComponent<Image>().sprite;
        TextMeshProUGUI price = btn.transform.GetChild(1).GetComponent<TextMeshProUGUI>();
        TextMeshProUGUI content = confirmPanel.transform.GetChild(0).GetChild(2).GetComponent<TextMeshProUGUI>();
        
        // =Debug.Log(title.GetParsedText());
        Debug.Log(int.Parse(price.GetParsedText()));

        int coin = PlayerPrefs.GetInt(Utils.coin);
        if (coin < int.Parse(price.GetParsedText())) {
            notEnoughCoinPanel.SetActive(true);
            notEnoughCoinPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        } else {
            Image confirmIcon = confirmPanel.transform.GetChild(0).GetChild(1).GetComponent<Image>();
            confirmIcon.sprite = sprite;
            confirmPanel.SetActive(true);
            confirmPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
            content.text = "Are you sure you want to buy this item? You'll be spending <color=yellow><b>"+price.GetParsedText()+" coins</b></color> for this purchase.";
            selectedProduct = title.GetParsedText();
            coinToDeduct = int.Parse(price.GetParsedText());
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CloseNotEnoughCoinPanel() {
        notEnoughCoinPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CloseConfirmPanel() {
        confirmPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void BuyProductWithCoin() {
        switch (selectedProduct) {
            // Consumables
            case " Star":
                Debug.Log("Success Star Purchase");
                AddValue(Utils.star);
                break;
            case " Fire":
                Debug.Log("Success Fire Purchase");
                AddValue(Utils.fire);
                break;
            case " Ice":
                Debug.Log("Success Ice Purchase");
                AddValue(Utils.ice);
                break;
            case " Shield":
                Debug.Log("Success Shield Purchase");
                AddValue(Utils.shield);
                break;
            case " Teleport":
                Debug.Log("Success Teleport Purchase");
                AddValue(Utils.teleport);
                break;
            case " PowPack1":
                AddValue(Utils.fire);
                AddValue(Utils.star);
                AddValue(Utils.ice);
                break;
            case " PowPack2":
                AddValue(Utils.shield);
                AddValue(Utils.star);
                AddValue(Utils.teleport);
                break;
            case " PowPack3":
                AddValue(Utils.shield);
                AddValue(Utils.star);
                AddValue(Utils.ice);
                AddValue(Utils.fire);
                AddValue(Utils.teleport);
                break;
            case " Basket Ball":
                PlayerPrefs.SetInt(Utils.basketBallSkinId, 1);
                break;
            case " Soccer Ball":
                PlayerPrefs.SetInt(Utils.soccerBallSkinId, 1);
                break;
            case " Tennis Ball":
                PlayerPrefs.SetInt(Utils.tennisBallSkinId, 1);
                break;
            case " Billiard Ball":
                PlayerPrefs.SetInt(Utils.billiardBallSkinId, 1);
                break;
            default:
                break;
        }
        DeductCoin();
        CloseConfirmPanel();
        PurchasedSuccessful();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    private void AddValue(string powerup) {
        int value = PlayerPrefs.GetInt(powerup);
        value += 3;
        PlayerPrefs.SetInt(powerup, value);
    }

    private void DeductCoin() {
        int coinValue = PlayerPrefs.GetInt(Utils.coin);
        coinValue -= coinToDeduct;
        PlayerPrefs.SetInt(Utils.coin, coinValue);
    }

    public void ShowProcessing() {
        processingPanel.SetActive(true);
        processingPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void HideProcessing() {
        processingPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void OnPurchaseSuccess(Product product) {
        switch (product.definition.id) {
            // Consumables
            case Utils.starId:
                Debug.Log("Success Star Purchase");
                AddValue(Utils.star);
                break;
            case Utils.fireId:
                Debug.Log("Success Fire Purchase");
                AddValue(Utils.fire);
                break;
            case Utils.iceId:
                Debug.Log("Success Ice Purchase");
                AddValue(Utils.ice);
                break;
            case Utils.shieldId:
                Debug.Log("Success Shield Purchase");
                AddValue(Utils.shield);
                break;
            case Utils.teleportId:
                Debug.Log("Success Teleport Purchase");
                AddValue(Utils.teleport);
                break;
            case Utils.powPack1Id:
                Debug.Log("Success PowPack1");
                AddValue(Utils.ice);
                AddValue(Utils.fire);
                AddValue(Utils.star);
                break;
            case Utils.powPack2Id:
                Debug.Log("Success PowPack2");
                AddValue(Utils.teleport);
                AddValue(Utils.star);
                AddValue(Utils.shield);
                break;
            case Utils.powPack3Id:
                Debug.Log("Success PowPack3");
                AddValue(Utils.teleport);
                AddValue(Utils.star);
                AddValue(Utils.shield);
                AddValue(Utils.ice);
                AddValue(Utils.fire);
                break;
            case Utils.removeAdsId:
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
        HideProcessing();
        PurchasedSuccessful();
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log("Failed");
        HideProcessing();
        PurchasedError();
        switch (failureReason) {
            case PurchaseFailureReason.PurchasingUnavailable:
                ErrorText("<cspace=0.1em>Purchase is unavailable at the moment. Please try again later!");
                break;
            case PurchaseFailureReason.ExistingPurchasePending:
                ErrorText("<cspace=0.1em>Another purchase is already in progress.");
                break;
            case PurchaseFailureReason.ProductUnavailable:
                ErrorText("<cspace=0.1em>The product you're trying to purchase in unavailable.");
                break;
            case PurchaseFailureReason.DuplicateTransaction:
                ErrorText("<cspace=0.1em>The transaction has already been completed.");
                break;
            case PurchaseFailureReason.SignatureInvalid:
                ErrorText("<cspace=0.1em>Purchase signature is invalid.");
                break;
            case PurchaseFailureReason.PaymentDeclined:
                ErrorText("<cspace=0.1em>Payment is being declined or cancelled. Please try again later!");
                break;
            case PurchaseFailureReason.UserCancelled:
                ErrorText("<cspace=0.1em>Purchase cancelled.");
                break;
            case PurchaseFailureReason.Unknown:
                ErrorText("<cspace=0.1em>Something went wrong. Please try again later!");
                break;
            default:
                break;
        }
    }
}
