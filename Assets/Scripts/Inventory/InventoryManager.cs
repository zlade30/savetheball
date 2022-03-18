using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class InventoryManager : MonoBehaviour
{
    [SerializeField]
    private GameObject ballPanel;
    [SerializeField]
    private GameObject basketBallPanel;
    [SerializeField]
    private GameObject soccerBallPanel;
    [SerializeField]
    private GameObject tennisBallPanel;
    [SerializeField]
    private GameObject billiardBallPanel;
    [SerializeField]
    private TextMeshProUGUI life;
    [SerializeField]
    private TextMeshProUGUI star;
    [SerializeField]
    private TextMeshProUGUI fire;
    [SerializeField]
    private TextMeshProUGUI ice;
    [SerializeField]
    private TextMeshProUGUI shield;
    [SerializeField]
    private TextMeshProUGUI teleport;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        HandleSkins();
        HandlePowerups();
    }

    void HandlePowerups()
    {
        int lifeValue = PlayerPrefs.GetInt(Utils.life);
        int starValue = PlayerPrefs.GetInt(Utils.star);
        int fireValue = PlayerPrefs.GetInt(Utils.fire);
        int iceValue = PlayerPrefs.GetInt(Utils.ice);
        int shieldValue = PlayerPrefs.GetInt(Utils.shield);
        int teleportValue = PlayerPrefs.GetInt(Utils.teleport);

        life.text = ""+lifeValue+" Left";
        star.text = ""+starValue+" Left";
        fire.text = ""+fireValue+" Left";
        ice.text = ""+iceValue+" Left";
        shield.text = ""+shieldValue+" Left";
        teleport.text = ""+teleportValue+" Left";
    }

    void HandleSkins()
    {
        if (PlayerPrefs.GetInt(Utils.basketBallSkinId) == 1) {
            basketBallPanel.SetActive(true);
        } else {
            basketBallPanel.SetActive(false);
        }

        if (PlayerPrefs.GetInt(Utils.soccerBallSkinId) == 1) {
            soccerBallPanel.SetActive(true);
        } else {
            soccerBallPanel.SetActive(false);
        }

        if (PlayerPrefs.GetInt(Utils.tennisBallSkinId) == 1) {
            tennisBallPanel.SetActive(true);
        } else {
            tennisBallPanel.SetActive(false);
        }

        if (PlayerPrefs.GetInt(Utils.billiardBallSkinId) == 1) {
            billiardBallPanel.SetActive(true);
        } else {
            billiardBallPanel.SetActive(false);
        }

        HandleEquippedSkin();
    }

    void HandleEquippedSkin()
    {
        string currentSkin = PlayerPrefs.GetString(Utils.currentSkin);
        
        if (currentSkin == Utils.basketBallSkin) {
            basketBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equipped";
            basketBallPanel.GetComponentInChildren<Button>().interactable = false;
        } else {
            basketBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equip";
            basketBallPanel.GetComponentInChildren<Button>().interactable = true;
        }

        if (currentSkin == Utils.soccerBallSkin) {
            soccerBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equipped";
            soccerBallPanel.GetComponentInChildren<Button>().interactable = false;
        } else {
            soccerBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equip";
            soccerBallPanel.GetComponentInChildren<Button>().interactable = true;
        }

        if (currentSkin == Utils.tennisBallSkin) {
            tennisBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equipped";
            tennisBallPanel.GetComponentInChildren<Button>().interactable = false;
        } else {
            tennisBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equip";
            tennisBallPanel.GetComponentInChildren<Button>().interactable = true;
        }

        if (currentSkin == Utils.billiardBallSkin) {
            billiardBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equipped";
            billiardBallPanel.GetComponentInChildren<Button>().interactable = false;
        } else {
            billiardBallPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equip";
            billiardBallPanel.GetComponentInChildren<Button>().interactable = true;
        }

        if (currentSkin == "" || currentSkin == Utils.defaultSkin) {
            ballPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equipped";
            ballPanel.GetComponentInChildren<Button>().interactable = false;
        } else {
            ballPanel.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Equip";
            ballPanel.GetComponentInChildren<Button>().interactable = true;
        }
    }

    public void EquipSkin(GameObject obj) {
        switch (obj.name) {
            case "Basketball":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.basketBallSkin);
                break;
            case "Soccer":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.soccerBallSkin);
                break;
            case "Tennis":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.tennisBallSkin);
                break;
            case "Billiard":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.billiardBallSkin);
                break;
            default:
                PlayerPrefs.SetString(Utils.currentSkin, Utils.defaultSkin);
                break;
        }
    }

    public void Back() {
        SceneManager.LoadScene(Utils.mainMenu);
    }
}
