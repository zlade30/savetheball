using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Firebase.Firestore;
using Firebase.Extensions;
using System.Collections.Generic;

public class Game : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI yourHighScore;
    [SerializeField]
    private TextMeshProUGUI yourScore;
    [SerializeField]
    private TextMeshProUGUI resumeCDText;
    [SerializeField]
    private Score score;

    [SerializeField]
    GameObject pausePanel;
    [SerializeField]
    public GameObject outOfLifePanel;
    [SerializeField]
    public GameObject outOfStarPanel;
    [SerializeField]
    GameObject gameOverPanel;
    [SerializeField]
    GameObject leaderBoard;
    [SerializeField]
    GameObject leaderBoardPanel;
    [SerializeField]
    GameObject leaderBoardNetworkPanel;
    [SerializeField]
    GameObject exitConfirmationPanel;
    [SerializeField]
    private GameObject destroyEffect;
    public bool isPause = false; 
    public bool isOver = false;
    private float resumeCD = 3.0f;
    private bool isResume = false;
    private FirebaseFirestore db;

    // Start is called before the first frame update
    void Start()
    {
        db = FirebaseFirestore.DefaultInstance;
    }

    // Update is called once per frame
    void Update()
    {
        HandleResume();
    }

    void HandleResume()
    {
        if (isResume) {
            resumeCD -= Time.unscaledDeltaTime;
            Debug.Log(resumeCD);
            resumeCDText.text = resumeCD.ToString("0");
            if (resumeCD <= 1f) {
                isResume = false;
                Time.timeScale = 1f;
                isPause = false;
                score.enabled = true;
                resumeCD = 3.0f;
                resumeCDText.gameObject.SetActive(false);
            }
        }
    }

    public void Play()
    {
        if (PlayerPrefs.GetInt(Utils.life) != 0) {
            int value = PlayerPrefs.GetInt(Utils.life);
            --value;
            PlayerPrefs.SetInt(Utils.life, value);
            ClearAllCurrentScore();
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        } else {
            OutOfLife();
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    void ClearAllCurrentScore() {
        PlayerPrefs.SetFloat(Utils.speedyScore, 0);
        PlayerPrefs.SetFloat(Utils.bombyScore, 0);
        PlayerPrefs.SetFloat(Utils.shapeShiftyScore, 0);
        PlayerPrefs.SetFloat(Utils.ninjyScore, 0);
    }

    public void Pause()
    {
        Time.timeScale = 0f;
        pausePanel.SetActive(true);
        isPause = true;
        score.enabled = false;
    }

    public void OutOfStar()
    {
        outOfStarPanel.SetActive(true);
    }

    public void OutOfLife()
    {
        outOfLifePanel.SetActive(true);
    }

    public void Resume()
    {
        isResume = true;
        pausePanel.SetActive(false);
        resumeCDText.gameObject.SetActive(true);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Continue()
    {
        if (isOver) {
            if (PlayerPrefs.GetInt(Utils.star) != 0) {
                int value = PlayerPrefs.GetInt(Utils.star);
                --value;
                PlayerPrefs.SetInt(Utils.star, value);
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
            } else {
                OutOfStar();
            }
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void GameOver()
    {
        gameOverPanel.SetActive(true);
        score.enabled = false;
        isOver = true;

        GameObject[] enemyObjects = GameObject.FindGameObjectsWithTag("EnemyObject");
        foreach(GameObject obj in enemyObjects) {
            GameObject.Destroy(obj);
            GameObject exp = Instantiate(destroyEffect, obj.transform.position, Quaternion.identity);
            exp.SetActive(true);
        }

        float highScore = 0f;
        int world = PlayerPrefs.GetInt(Utils.currentWorld);
        switch (world) {
            case Utils.bombyWorld:
                HandleScores(highScore, Utils.bombyHighScore, Utils.bombyScore, Utils.bombyCollection);
                break;
            case Utils.ninjyWorld:
                HandleScores(highScore, Utils.ninjyHighScore, Utils.ninjyScore, Utils.ninjyCollection);
                break;
            case Utils.speedyWorld:
                HandleScores(highScore, Utils.speedyHighScore, Utils.speedyScore, Utils.speedyCollection);
                break;
            case Utils.shapeShiftyWorld:
                HandleScores(highScore, Utils.shapeShiftyHighScore, Utils.shapeShiftyScore, Utils.shapeShiftyCollection);
                break;
            default:
                break;
        }
    }

    void HandleScores(float highScore, string newHighScore, string currentScore, string collection) {
        highScore = PlayerPrefs.GetFloat(newHighScore);
        if (score.score > highScore) {
            PlayerPrefs.SetFloat(newHighScore, score.score);
            yourHighScore.text = score.score.ToString("00000");
        } else {
            yourHighScore.text = highScore.ToString("00000");
        }

        if (highScore == 0f) {
            PlayerPrefs.SetFloat(newHighScore, score.score);
            yourHighScore.text = score.score.ToString("00000");
        }

        yourScore.text = score.score.ToString("00000");
        
        PlayerPrefs.SetFloat(currentScore, score.score);
        string userId = PlayerPrefs.GetString(Utils.userId);
        string userName = PlayerPrefs.GetString(Utils.userName);

        if (userId != "" && score.score > highScore) {
            Debug.Log(userId);
            DocumentReference docRef = db.Collection(collection).Document(userId);
            Dictionary<string, object> update = new Dictionary<string, object>
            {
                { "name", userName },
                { "score", score.score.ToString("00000") },

            };
            docRef.SetAsync(update, SetOptions.MergeAll);
        }
    }

    public void Back() {
        if(!isOver) Pause();
        else exitConfirmationPanel.SetActive(true);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Restart() {
        if (PlayerPrefs.GetInt(Utils.life) != 0) {
            Play();
        } else {
            OutOfLife();
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void ShowLeaderBoard() {
        leaderBoard.SetActive(true);
        if (Application.internetReachability != NetworkReachability.NotReachable) {
            leaderBoardPanel.SetActive(true);
            leaderBoardNetworkPanel.SetActive(false);
        } else {
            leaderBoardPanel.SetActive(false);
            leaderBoardNetworkPanel.SetActive(true);
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void WatchRewardedAds() {
        outOfLifePanel.SetActive(false);
        outOfStarPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void OpenShop() {
        SceneManager.LoadScene(Utils.shop);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Exit() {
        exitConfirmationPanel.SetActive(true);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void YesExit() {
        SceneManager.LoadScene(Utils.world);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void NoExit() {
        exitConfirmationPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Close() {
        outOfLifePanel.SetActive(false);
        outOfStarPanel.SetActive(false);
        exitConfirmationPanel.SetActive(false);
        leaderBoard.SetActive(false);
        leaderBoardPanel.SetActive(false);
        leaderBoardNetworkPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    // public void OnPointerClick(PointerEventData eventData)
    // {
    //     string uiName = eventData.pointerCurrentRaycast.gameObject.name;
    //     switch (uiName) {
    //         case "Back":
    //             if (!game.isOver)
    //                 game.Pause();
    //             break;
    //         case "Resume":
    //             game.Resume();
    //             break;
    //         case "Play":
    //             if (game.isOver) {
    //                 if (PlayerPrefs.GetInt(Utils.star) != 0) {
    //                     int value = PlayerPrefs.GetInt(Utils.star);
    //                     --value;
    //                     PlayerPrefs.SetInt(Utils.star, value);
    //                     game.Continue();
    //                 } else {
    //                     game.OutOfStar();
    //                 }
    //             }
    //             else {
    //                 if (PlayerPrefs.GetInt(Utils.life) != 0) {
    //                     int value = PlayerPrefs.GetInt(Utils.life);
    //                     --value;
    //                     PlayerPrefs.SetInt(Utils.life, value);
    //                     game.Play();
    //                 } else {
    //                     game.OutOfLife();
    //                 }
    //             }
    //             break;
    //         case "Restart":
    //             if (PlayerPrefs.GetInt(Utils.life) != 0) {
    //                 int value = PlayerPrefs.GetInt(Utils.life);
    //                 --value;
    //                 PlayerPrefs.SetInt(Utils.life, value);
    //                 game.Play();
    //             } else {
    //                 game.OutOfLife();
    //             }
    //             break;
    //         case "Ads":
                
    //             break;
    //         case "Exit":
                
    //             break;
    //         default:
    //             break;
    //     }
    // }
}
