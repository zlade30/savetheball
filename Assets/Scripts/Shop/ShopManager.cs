using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class ShopManager : MonoBehaviour {
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

    void Start()
    {
        
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

    public void BuyShopProduct(string productId) 
    {
        int value = 0;
        switch (productId) {
            // Consumables
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
    }

    public void GetPrice(string productId, string price)
    {
        switch (productId) {
            // Consumables
            case Utils.starId:
                starPrice.text = price;
                break;
            case Utils.fireId:
                firePrice.text = price;
                break;
            case Utils.iceId:
                icePrice.text = price;
                break;
            case Utils.shieldId:
                shieldPrice.text = price;
                break;
            case Utils.teleportId:
                teleportPrice.text = price;
                break;
            
            // Non Consumables
            case Utils.basketBallSkinId:
                basketBallPrice.text = price;
                break;
            case Utils.soccerBallSkinId:
                soccerBallPrice.text = price;
                break;
            case Utils.tennisBallSkinId:
                tennisBallPrice.text = price;
                break;
            case Utils.billiardBallSkinId:
                billiardBallPrice.text = price;
                break;
            default:
                break;
        }
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
