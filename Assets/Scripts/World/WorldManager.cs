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
        if (PlayerPrefs.GetFloat(Utils.speedyHighScore) >= 800) {
            GameObject.Find("BombyLock").SetActive(false);
        }

        if (PlayerPrefs.GetFloat(Utils.bombyHighScore) >= 1500) {
            GameObject.Find("ShapeShiftyLock").SetActive(false);
        }

        if (PlayerPrefs.GetFloat(Utils.shapeShiftyHighScore) >= 2000) {
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
        int life = PlayerPrefs.GetInt(Utils.life);
        if (life > 0) {
            switch (world.name) {
                case "Speedy":
                    SceneManager.LoadScene(Utils.speedyWorld);
                    PlayerPrefs.SetInt(Utils.currentWorld, Utils.speedyWorld);
                    PlayerPrefs.SetInt(Utils.life, --life);
                    break;
                case "Bomby":
                    if (PlayerPrefs.GetFloat(Utils.speedyHighScore) >= 800) {
                        SceneManager.LoadScene(Utils.bombyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.bombyWorld);
                        PlayerPrefs.SetInt(Utils.life, --life);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Bomby is currently locked. You need to have a score of 800 in Speedy World before you can unlock this one.";
                    }
                    break;
                case "ShapeShifty":
                    if (PlayerPrefs.GetFloat(Utils.bombyHighScore) >= 1500) {
                        SceneManager.LoadScene(Utils.shapeShiftyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.shapeShiftyWorld);
                        PlayerPrefs.SetInt(Utils.life, --life);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Shapeshifty is currently locked. You need to have a score of 1500 in Bomby World before you can unlock this one.";
                    }
                    break;
                case "Ninjy":
                    if (PlayerPrefs.GetFloat(Utils.shapeShiftyHighScore) >= 2000) {
                        SceneManager.LoadScene(Utils.ninjyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.ninjyWorld);
                        PlayerPrefs.SetInt(Utils.life, --life);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Ninjy is currently locked. You need to have a score of 2000 in Shapeshifty World before you can unlock this one.";
                    }
                    break;
                default:
                    break;
            }
        } else {
            notEnoughLifePanel.SetActive(true);
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
        lockPanel.SetActive(false);
    }
}
