using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WorldManager : MonoBehaviour
{
    [SerializeField]
    GameObject playerNamePanel;
    [SerializeField]
    GameObject notEnoughLifePanel;
    [SerializeField]
    TMP_InputField nameField;
    [SerializeField]
    TextMeshProUGUI errorText;
    [SerializeField]
    GameObject worldPanel;
    [SerializeField]
    GameObject lockPanel;
    [SerializeField]
    Sprite[] lockSprites;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        ClearAllCurrentScore();
        HandleLocksWorld();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void HandleLocksWorld() {
        if (PlayerPrefs.GetFloat(Utils.speedyHighScore) >= Utils.shapeShiftyUnlockScore) {
            GameObject.Find("ShapeShiftyLock").SetActive(false);
        }

        if (PlayerPrefs.GetFloat(Utils.shapeShiftyHighScore) >= Utils.bombyUnlockScore) {
            GameObject.Find("BombyLock").SetActive(false);
        }

        if (PlayerPrefs.GetFloat(Utils.bombyHighScore) >= Utils.ninjyUnlockScore) {
            GameObject.Find("NinjyLock").SetActive(false);
        }
    }

    void ClearAllCurrentScore() {
        PlayerPrefs.SetFloat(Utils.speedyScore, 0);
        PlayerPrefs.SetFloat(Utils.bombyScore, 0);
        PlayerPrefs.SetFloat(Utils.shapeShiftyScore, 0);
        PlayerPrefs.SetFloat(Utils.ninjyScore, 0);
    }

    public void SelectWorld(GameObject world) {
        switch (world.name) {
            case "Speedy":
                if (PlayerPrefs.GetInt(Utils.showInstruction) == 0) {
                    SceneManager.LoadScene(Utils.instruction);
                    SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
                } else {
                    SceneManager.LoadScene(Utils.speedyWorld);
                    PlayerPrefs.SetInt(Utils.currentWorld, Utils.speedyWorld);
                }
                break;
            case "ShapeShifty":
                if (PlayerPrefs.GetFloat(Utils.speedyHighScore) >= Utils.shapeShiftyUnlockScore) {
                    SceneManager.LoadScene(Utils.shapeShiftyWorld);
                    PlayerPrefs.SetInt(Utils.currentWorld, Utils.shapeShiftyWorld);
                } else {
                    lockPanel.SetActive(true);
                    lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    lockPanel.transform.GetChild(0).transform.Find("LockSprite").GetComponent<Image>().sprite = lockSprites[0];
                    lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "<cspace=0.2em>Shapeshifty is currently locked. You need to have a score of <color=green>"+Utils.shapeShiftyUnlockScore+"</color> in Speedy World before you can unlock this one.";
                }
                break;
            case "Bomby":
                if (PlayerPrefs.GetFloat(Utils.shapeShiftyHighScore) >= Utils.bombyUnlockScore) {
                    SceneManager.LoadScene(Utils.bombyWorld);
                    PlayerPrefs.SetInt(Utils.currentWorld, Utils.bombyWorld);
                } else {
                    lockPanel.SetActive(true);
                    lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    lockPanel.transform.GetChild(0).transform.Find("LockSprite").GetComponent<Image>().sprite = lockSprites[1];
                    lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "<cspace=0.2em>Bomby is currently locked. You need to have a score of <color=green>"+Utils.bombyUnlockScore+"</color> in Shapeshifty World before you can unlock this one.";
                }
                break;
            case "Ninjy":
                if (PlayerPrefs.GetFloat(Utils.bombyHighScore) >= Utils.ninjyUnlockScore) {
                    SceneManager.LoadScene(Utils.ninjyWorld);
                    PlayerPrefs.SetInt(Utils.currentWorld, Utils.ninjyWorld);
                } else {
                    lockPanel.SetActive(true);
                    lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    lockPanel.transform.GetChild(0).transform.Find("LockSprite").GetComponent<Image>().sprite = lockSprites[2];
                    lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "<cspace=0.2em>Ninjy is currently locked. You need to have a score of <color=green>"+Utils.ninjyUnlockScore+"</color> in Bomby World before you can unlock this one.";
                }
                break;
            default:
                break;
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void GoBack() {
        SceneManager.LoadScene(Utils.mainMenu);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Close() {
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
        notEnoughLifePanel.SetActive(false);
        lockPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
    }
}
