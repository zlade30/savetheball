using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System.Collections;

public class Game : MonoBehaviour
{
    [SerializeField]
    private SpriteRenderer gameOverSprite;
    [SerializeField]
    private Image playSprite;
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
    public bool isPause = false; 
    public bool isOver = false;
    private float resumeCD = 3.0f;
    private bool isResume = false;

    // Start is called before the first frame update
    void Start()
    {
        if (Application.isMobilePlatform) {
            Application.targetFrameRate = 120;
            QualitySettings.vSyncCount = 0;
        }
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
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void Pause()
    {
        Time.timeScale = 0f;
        pausePanel.SetActive(true);
        isPause = true;
        score.enabled = false;
    }

    public void Resume()
    {
        isResume = true;
        pausePanel.SetActive(false);
        resumeCDText.gameObject.SetActive(true);
    }

    public void Continue()
    {
        gameOverSprite.gameObject.SetActive(false);
        playSprite.gameObject.SetActive(false);
        highScore.gameObject.SetActive(false);
        yourScore.gameObject.SetActive(false);
        isOver = false;
        score.enabled = true;
    }

    public void GameOver()
    {
        gameOverSprite.gameObject.SetActive(true);
        playSprite.gameObject.SetActive(true);
        highScore.gameObject.SetActive(true);
        yourScore.gameObject.SetActive(true);
        yourScore.text = "Your Score: "+score.score.ToString("0000");
        score.enabled = false;
        isOver = true;
        StartCoroutine(FadeIn());
    }

    private IEnumerator FadeOut()
    {
        float alphaVal = gameOverSprite.color.a;
        Color tmp = gameOverSprite.color;

        while (gameOverSprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            gameOverSprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
    }
 
    private IEnumerator FadeIn()
    {
        float alphaVal = gameOverSprite.color.a;
        Color tmp = gameOverSprite.color;

        while (gameOverSprite.color.a < 1)
        {
            alphaVal += 0.01f;
            tmp.a = alphaVal;
            gameOverSprite.color = tmp;
            playSprite.color = tmp;
            highScore.color = tmp;
            yourScore.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
    }
}
