using UnityEngine.SceneManagement;
using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System.Collections.Generic;
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

    private FirebaseFirestore db;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        db = FirebaseFirestore.DefaultInstance;
        HandlePlayerNamePanel();
        ClearAllCurrentScore();
        // if (Application.internetReachability != NetworkReachability.NotReachable)
        //     CheckName();

        string userName = PlayerPrefs.GetString(Utils.userName);
        if (userName == "") {
            EnableWorldButtons(false);
        } else {
            EnableWorldButtons(true);
        }
        HandleLocksWorld();
    }

    void EnableWorldButtons(bool status) {
        worldPanel.transform.GetChild(0).GetComponent<Button>().interactable = status;
        worldPanel.transform.GetChild(1).GetComponent<Button>().interactable = status;
        worldPanel.transform.GetChild(2).GetComponent<Button>().interactable = status;
        worldPanel.transform.GetChild(3).GetComponent<Button>().interactable = status;
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
                    break;
                case "Bomby":
                    if (PlayerPrefs.GetFloat(Utils.speedyHighScore) >= 800) {
                        SceneManager.LoadScene(Utils.bombyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.bombyWorld);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Bomby is currently locked. You need to have a score of 800 in Speedy World before you can unlock this one.";
                    }
                    break;
                case "ShapeShifty":
                    if (PlayerPrefs.GetFloat(Utils.bombyHighScore) >= 1500) {
                        SceneManager.LoadScene(Utils.shapeShiftyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.shapeShiftyWorld);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Shapeshifty is currently locked. You need to have a score of 1500 in Bomby World before you can unlock this one.";
                    }
                    break;
                case "Ninjy":
                    if (PlayerPrefs.GetFloat(Utils.shapeShiftyHighScore) >= 2000) {
                        SceneManager.LoadScene(Utils.ninjyWorld);
                        PlayerPrefs.SetInt(Utils.currentWorld, Utils.ninjyWorld);
                    } else {
                        lockPanel.SetActive(true);
                        lockPanel.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Ninjy is currently locked. You need to have a score of 2000 in Shapeshifty World before you can unlock this one.";
                    }
                    break;
                default:
                    break;
            }
            PlayerPrefs.SetInt(Utils.life, --life);
        } else {
            notEnoughLifePanel.SetActive(true);
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    void HandlePlayerNamePanel() {
        int isSubmitted = PlayerPrefs.GetInt(Utils.didPlayerSubmitName);
        if (isSubmitted == 0) {
            playerNamePanel.SetActive(true);
        }
    }

    public void OnSubmitName() {
        if (nameField.text == "") {
            errorText.gameObject.SetActive(true);
        } else {
            if (Application.internetReachability != NetworkReachability.NotReachable) {
                Dictionary<string, object> city = new Dictionary<string, object>
                {
                        { "name", nameField.text },
                        { "score", "0" }
                };
                db.Collection(Utils.userCollection).AddAsync(city).ContinueWithOnMainThread(task => {
                    if (task.IsCompleted) {
                        DocumentReference addedDocRef = task.Result;
                        Debug.Log("Added user with ID: {0}."+ addedDocRef.Id);
                        PlayerPrefs.SetString(Utils.userId, addedDocRef.Id);
                    }
                });
            }
            PlayerPrefs.SetString(Utils.userName, nameField.text);
            PlayerPrefs.SetInt(Utils.didPlayerSubmitName, 1);
            EnableWorldButtons(true);
            playerNamePanel.SetActive(false);
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void CheckName() {
        string name = PlayerPrefs.GetString(Utils.userName);
        string userId = PlayerPrefs.GetString(Utils.userId);
        if (name != "" && userId == "") {
            Dictionary<string, object> city = new Dictionary<string, object>
            {
                    { "name", name },
                    { "score", "0" }
            };
            db.Collection(Utils.userCollection).AddAsync(city).ContinueWithOnMainThread(task => {
                if (task.IsCompleted) {
                    DocumentReference addedDocRef = task.Result;
                    Debug.Log("Added user with ID: {0}."+ addedDocRef.Id);
                    PlayerPrefs.SetString(Utils.userId, addedDocRef.Id);
                }
            });
        }
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

    // private void OnApplicationQuit() {
    //     FirebaseFirestore.DefaultInstance.App.Dispose();
    // }

    // private void OnDestroy() {
    //     FirebaseFirestore.DefaultInstance.App.Dispose();
    // }
}
