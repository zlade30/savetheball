using UnityEngine;
using TMPro;

public class Values : MonoBehaviour
{
    [SerializeField]
    public string powerUpName;
    private TextMeshProUGUI displayValue;
    // Start is called before the first frame update
    void Start()
    {
        displayValue = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        RenderValue();
    }

    void RenderValue()
    {
        int value = PlayerPrefs.GetInt(powerUpName);
        displayValue.text = value.ToString();
    }
}
