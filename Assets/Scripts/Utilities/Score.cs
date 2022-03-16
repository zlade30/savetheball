using UnityEngine;
using TMPro;

public class Score : MonoBehaviour
{
    private TextMeshProUGUI text;
    public float score;

    // Start is called before the first frame update
    void Start()
    {
        text = GetComponent<TextMeshProUGUI>();
        score = PlayerPrefs.GetFloat("score");
    }

    // Update is called once per frame
    void Update()
    {
        score += Time.unscaledDeltaTime * 5f;
        text.text = score.ToString("0000");
    }
}
