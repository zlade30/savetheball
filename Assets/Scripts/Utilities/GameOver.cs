using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameOver : MonoBehaviour
{
    [SerializeField]
    private SpriteRenderer gameOverSprite;
    [SerializeField]
    private Image playSprite;
    [SerializeField]
    private TextMeshProUGUI highScore;
    [SerializeField]
    private TextMeshProUGUI score;

    // Start is called before the first frame update
    void Start()
    {
       StartCoroutine(FadeOut());
    }

    // Update is called once per frame
    void Update()
    {

    }

    private IEnumerator FadeIn()
    {
        float alphaVal = gameOverSprite.color.a;
        Color tmp = gameOverSprite.color;

        while (gameOverSprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            gameOverSprite.color = tmp;

            yield return new WaitForSeconds(0.05f); // update interval
        }
    }
 
    private IEnumerator FadeOut()
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
            score.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
    }
}
