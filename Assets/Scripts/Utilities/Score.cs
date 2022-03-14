using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Score : MonoBehaviour
{
    private TextMeshProUGUI text;
    private float score;

    // Start is called before the first frame update
    void Start()
    {
        text = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        score += Time.unscaledDeltaTime * 5f;
        if (gameObject.name == "YourScore")
            text.text = "Score: "+int.Parse(score.ToString("0000"));
        else
            text.text = score.ToString("0000");
    }
}
