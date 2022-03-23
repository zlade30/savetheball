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

        int world = PlayerPrefs.GetInt(Utils.currentWorld);
        switch (world) {
            case Utils.bombyWorld:
                score = PlayerPrefs.GetFloat(Utils.bombyScore);
                break;
            case Utils.ninjyWorld:
                score = PlayerPrefs.GetFloat(Utils.ninjyScore);
                break;
            case Utils.speedyWorld:
                score = PlayerPrefs.GetFloat(Utils.speedyScore);
                break;
            case Utils.shapeShiftyWorld:
                score = PlayerPrefs.GetFloat(Utils.shapeShiftyScore);
                break;
            default:
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        score += Time.unscaledDeltaTime * 5f;
        text.text = score.ToString("00000");
    }
}
