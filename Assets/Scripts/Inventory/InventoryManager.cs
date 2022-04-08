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
    private GameObject lockPanel;

    // Start is called before the first frame update
    void Start()
    {
        HandleSkins();
        if (PlayerPrefs.GetString(Utils.currentSkin) == "")
            PlayerPrefs.SetString(Utils.currentSkin, Utils.defaultSkin);
    }

    // Update is called once per frame
    void Update()
    {
        HandleEquippedSkin();
    }

    void HandleSkins()
    {
        // if (PlayerPrefs.GetInt(Utils.basketBallSkinId) == 1) {
        //     HandleBallPanel(basketBallPanel, true);
        // } else {
        //     HandleBallPanel(basketBallPanel, false);
        // }

        // if (PlayerPrefs.GetInt(Utils.soccerBallSkinId) == 1) {
        //     HandleBallPanel(soccerBallPanel, true);
        // } else {
        //     HandleBallPanel(soccerBallPanel, false);
        // }

        // if (PlayerPrefs.GetInt(Utils.tennisBallSkinId) == 1) {
        //     HandleBallPanel(tennisBallPanel, true);
        // } else {
        //     HandleBallPanel(tennisBallPanel, false);
        // }

        // if (PlayerPrefs.GetInt(Utils.billiardBallSkinId) == 1) {
        //     HandleBallPanel(billiardBallPanel, true);
        // } else {
        //     HandleBallPanel(billiardBallPanel, false);
        // }
    }

    void HandleEquippedSkin()
    {
        ManageSkin(basketBallPanel, Utils.basketBallSkin);
        ManageSkin(soccerBallPanel, Utils.soccerBallSkin);
        ManageSkin(tennisBallPanel, Utils.tennisBallSkin);
        ManageSkin(billiardBallPanel, Utils.billiardBallSkin);
        ManageSkin(ballPanel, Utils.defaultSkin);
    }

    public void EquipSkin(GameObject obj) {
        switch (obj.name) {
            case "Basketball":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.basketBallSkin);
                break;
            case "Soccerball":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.soccerBallSkin);
                break;
            case "Tennisball":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.tennisBallSkin);
                break;
            case "Billiardball":
                PlayerPrefs.SetString(Utils.currentSkin, Utils.billiardBallSkin);
                break;
            default:
                PlayerPrefs.SetString(Utils.currentSkin, Utils.defaultSkin);
                break;
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Back() {
        SceneManager.LoadScene(Utils.mainMenu);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    private void HandleBallPanel(GameObject ballPanel, bool status) {
        var panel = ballPanel.GetComponent<Image>();
        var tempColor = panel.color;
        if (status) tempColor.a = 1f;
        else tempColor.a = 0f;
        panel.color = tempColor;
        for (int i = 0; i < ballPanel.transform.childCount; i++) {
            ballPanel.transform.GetChild(i).gameObject.SetActive(status);
        }
    }

    private void ManageSkin(GameObject ballPanel, string skin) {
        string currentSkin = PlayerPrefs.GetString(Utils.currentSkin);
        if (currentSkin == skin) {
            ballPanel.GetComponentInChildren<Button>().GetComponentInChildren<TextMeshProUGUI>().text = "<cspace=0.2em> Equipped</cspace>";
            ballPanel.GetComponentInChildren<Button>().interactable = false;
            ballPanel.GetComponent<Image>().color = new Color32(73, 116, 159, 255);
        } else {
            ballPanel.GetComponentInChildren<Button>().GetComponentInChildren<TextMeshProUGUI>().text = "<cspace=0.2em> Equip</cspace>";
            ballPanel.GetComponentInChildren<Button>().interactable = true;
            ballPanel.GetComponent<Image>().color = new Color32(8, 30, 52, 255);
        }

        if (skin != Utils.defaultSkin) {
            if (PlayerPrefs.GetInt(Utils.basketBallSkinId) == 1 && skin == Utils.basketBallSkin) ballPanel.transform.GetChild(3).gameObject.SetActive(false);
            if (PlayerPrefs.GetInt(Utils.soccerBallSkinId) == 1 && skin == Utils.soccerBallSkin) ballPanel.transform.GetChild(3).gameObject.SetActive(false);
            if (PlayerPrefs.GetInt(Utils.tennisBallSkinId) == 1 && skin == Utils.tennisBallSkin) ballPanel.transform.GetChild(3).gameObject.SetActive(false);
            if (PlayerPrefs.GetInt(Utils.billiardBallSkinId) == 1 && skin == Utils.billiardBallSkin) ballPanel.transform.GetChild(3).gameObject.SetActive(false);
        }
    }

    public void ShowLockPanel() {
        lockPanel.SetActive(true);
        lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CloseLockPanel() {
        lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }
}
