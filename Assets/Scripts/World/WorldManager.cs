using UnityEngine.SceneManagement;
using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System.Collections.Generic;
using TMPro;

public class WorldManager : MonoBehaviour
{
    [SerializeField]
    GameObject playerNamePanel;
    [SerializeField]
    TMP_InputField nameField;
    [SerializeField]
    TextMeshProUGUI errorText;

    private FirebaseFirestore db;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        db = FirebaseFirestore.DefaultInstance;
        HandlePlayerNamePanel();
        ClearAllCurrentScore();
        CheckName();
    }

    // Update is called once per frame
    void Update()
    {
        
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
                SceneManager.LoadScene(Utils.speedyWorld);
                PlayerPrefs.SetInt(Utils.currentWorld, Utils.speedyWorld);
                break;
            case "Bomby":
                SceneManager.LoadScene(Utils.bombyWorld);
                PlayerPrefs.SetInt(Utils.currentWorld, Utils.bombyWorld);
                break;
            case "ShapeShifty":
                SceneManager.LoadScene(Utils.shapeShiftyWorld);
                PlayerPrefs.SetInt(Utils.currentWorld, Utils.shapeShiftyWorld);
                break;
            case "Ninjy":
                SceneManager.LoadScene(Utils.ninjyWorld);
                PlayerPrefs.SetInt(Utils.currentWorld, Utils.ninjyWorld);
                break;
            default:
                break;
        }
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
            PlayerPrefs.SetString(Utils.userName, nameField.text);
            PlayerPrefs.SetInt(Utils.didPlayerSubmitName, 1);
            playerNamePanel.SetActive(false);
        }
        
    }

    public void CheckName() {
        string name = PlayerPrefs.GetString(Utils.userName);
        if (name != "") {
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
    }
}
