using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using CloudOnce;
using System;

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
    [SerializeField]
    private GameObject congratsPanel;
    private PowerupManager powerupManager;
    public bool isPause = false; 
    public bool isOver = false;
    private float resumeCD = 3.0f;
    private bool isResume = false;
    private string platformID = "";

    // Start is called before the first frame update
    void Start()
    {
        int world = PlayerPrefs.GetInt(Utils.currentWorld);
        switch (world) {
            case Utils.bombyWorld:
                #if UNITY_ANDROID
                    platformID = GPGSIds.leaderboard_bomby_leaderboard;
                #elif UNITY_IPHONE
                    platformID = "com.bomby.leaderboard";
                #endif
                break;
            case Utils.ninjyWorld:
                #if UNITY_ANDROID
                    platformID = GPGSIds.leaderboard_ninjy_leaderboard;
                #elif UNITY_IPHONE
                    platformID = "com.ninjy.leaderboard";
                #endif
                break;
            case Utils.speedyWorld:
                #if UNITY_ANDROID
                    platformID = GPGSIds.leaderboard_speedy_leaderboard;
                #elif UNITY_IPHONE
                    platformID = "com.speedy.leaderboard";
                #endif
                break;
            case Utils.shapeShiftyWorld:
                #if UNITY_ANDROID
                    platformID = GPGSIds.leaderboard_shapeshifty_leaderboard;
                #elif UNITY_IPHONE
                    platformID = "com.shapeshifty.leaderboard";
                #endif
                break;
            default:
                break;
        }
        powerupManager = GetComponent<PowerupManager>();
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
        ClearAllCurrentScore();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
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
        pausePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
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
        pausePanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
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

        // congratsPanel.SetActive(true);
        // congratsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();

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

        HandleRewards();
    }

    void HandleRewards() {
        int world = PlayerPrefs.GetInt(Utils.currentWorld);
        switch (world) {
            case Utils.speedyWorld:
                if (score.score >= Utils.shapeShiftyUnlockScore && PlayerPrefs.GetInt(Utils.isShapeShiftyUnlock) == 0) {
                    congratsPanel.SetActive(true);
                    congratsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    PlayerPrefs.SetInt(Utils.isShapeShiftyUnlock, 1);
                }
                break;
            case Utils.shapeShiftyWorld:
                if (score.score >= Utils.bombyUnlockScore && PlayerPrefs.GetInt(Utils.isBombyUnlock) == 0) {
                    congratsPanel.SetActive(true);
                    congratsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    PlayerPrefs.SetInt(Utils.isBombyUnlock, 1);
                }
                break;
            case Utils.bombyWorld:
                if (score.score >= Utils.ninjyUnlockScore && PlayerPrefs.GetInt(Utils.isNinjyUnlock) == 0) {
                    congratsPanel.SetActive(true);
                    congratsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
                    PlayerPrefs.SetInt(Utils.isNinjyUnlock, 1);
                }
                break;
            default:
                break;
        }
    }

    public void ClaimRewards() {
        congratsPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();

        GameObject star = GameObject.Instantiate(powerupManager.powerups[4], new Vector2(0f, 0f), Quaternion.identity);
        GameObject fire = GameObject.Instantiate(powerupManager.powerups[1], new Vector2(0f, 0f), Quaternion.identity);
        GameObject ice = GameObject.Instantiate(powerupManager.powerups[2], new Vector2(0f, 0f), Quaternion.identity);
        GameObject shield = GameObject.Instantiate(powerupManager.powerups[3], new Vector2(0f, 0f), Quaternion.identity);
        GameObject teleport = GameObject.Instantiate(powerupManager.powerups[5], new Vector2(0f, 0f), Quaternion.identity);

        star.GetComponent<SpawnPowerup>().isCollect = true;
        fire.GetComponent<SpawnPowerup>().isCollect = true;
        ice.GetComponent<SpawnPowerup>().isCollect = true;
        shield.GetComponent<SpawnPowerup>().isCollect = true;
        teleport.GetComponent<SpawnPowerup>().isCollect = true;
    }

    void HandleScores(float highScore, string newHighScore, string currentScore, string collection) {
        highScore = PlayerPrefs.GetFloat(newHighScore);
        if (score.score > highScore) {
            PlayerPrefs.SetFloat(newHighScore, score.score);
            yourHighScore.text = "<cspace=0.1em>"+score.score.ToString("00000");
            Cloud.Leaderboards.SubmitScore(platformID, Convert.ToInt64(score.score));
        } else {
            yourHighScore.text = "<cspace=0.1em>"+highScore.ToString("00000");
        }

        if (highScore == 0f) {
            PlayerPrefs.SetFloat(newHighScore, score.score);
            yourHighScore.text = "<cspace=0.1em>"+score.score.ToString("00000");
        }

        yourScore.text = score.score.ToString("00000");
        PlayerPrefs.SetFloat(currentScore, score.score);
    }

    public void Back() {
        if(!isOver) Pause();
        else {
            exitConfirmationPanel.SetActive(true);
            exitConfirmationPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        }
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Restart() {
        Play();
    }

    public void ShowLeaderBoard() {
        Cloud.Leaderboards.ShowOverlay(platformID);
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
        exitConfirmationPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Open();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void YesExit() {
        SceneManager.LoadScene(Utils.world);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void NoExit() {
        exitConfirmationPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Close() {
        outOfStarPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        exitConfirmationPanel.transform.GetChild(0).GetComponent<ModalAnimation>().Close();
        // leaderBoardPanel.SetActive(false);
        // leaderBoardNetworkPanel.SetActive(false);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }
}
