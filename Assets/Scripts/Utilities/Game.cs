using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System.Collections;

public class Game : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI highScore;
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
    GameObject exitConfirmationPanel;
    public bool isPause = false; 
    public bool isOver = false;
    private float resumeCD = 3.0f;
    private bool isResume = false;

    // Start is called before the first frame update
    void Start()
    {
        
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
            PlayerPrefs.SetFloat(Utils.score, 0);
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        } else {
            OutOfLife();
        }
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
    }

    public void GameOver()
    {
        gameOverPanel.SetActive(true);
        yourScore.text = score.score.ToString("0000");
        score.enabled = false;
        isOver = true;
        PlayerPrefs.SetFloat(Utils.score, score.score);
    }

    public void Back() {
        if(!isOver) Pause();
        else exitConfirmationPanel.SetActive(true);
    }

    public void Restart() {
        if (PlayerPrefs.GetInt(Utils.life) != 0) {
            Play();
        } else {
            OutOfLife();
        }
    }

    public void WatchRewardedAds() {
        outOfLifePanel.SetActive(false);
        outOfStarPanel.SetActive(false);
    }

    public void OpenShop() {
        SceneManager.LoadScene(Utils.shop);
    }

    public void Exit() {
        exitConfirmationPanel.SetActive(true);
    }

    public void YesExit() {
        SceneManager.LoadScene(Utils.world);
    }

    public void NoExit() {
        exitConfirmationPanel.SetActive(false);
    }

    public void Close() {
        outOfLifePanel.SetActive(false);
        outOfStarPanel.SetActive(false);
        exitConfirmationPanel.SetActive(false);
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
