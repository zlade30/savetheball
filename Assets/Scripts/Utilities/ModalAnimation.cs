using UnityEngine;

public class ModalAnimation : MonoBehaviour
{
    private bool isOpen = false;
    private float animationSpeed = 3000f;
    float maxValue;
    float minValue;
    // Start is called before the first frame update
    void Start()
    {
        // GetComponent<RectTransform>().offsetMax = new Vector2(-300f, -300f);
        // GetComponent<RectTransform>().offsetMin = new Vector2(300f, 300f);
        // maxValue = GetComponent<RectTransform>().offsetMax.x;
        // minValue = GetComponent<RectTransform>().offsetMin.x;
    }

    // Update is called once per frame
    void Update()
    {
        if (isOpen) {
            if (maxValue >= 0f) {
                GetComponent<RectTransform>().offsetMax = new Vector2(0f, 0f);
            }
            else {
                maxValue += Time.unscaledDeltaTime * animationSpeed;
                GetComponent<RectTransform>().offsetMax = new Vector2(maxValue, maxValue);
            }
                
            if (minValue <= 0f) 
                GetComponent<RectTransform>().offsetMin = new Vector2(0f, 0f);
            else {
                minValue -= Time.unscaledDeltaTime * animationSpeed;
                GetComponent<RectTransform>().offsetMin = new Vector2(minValue, minValue);
            }
        } else {
            if (maxValue >= -300f) {
                maxValue -= Time.unscaledDeltaTime * animationSpeed;
                GetComponent<RectTransform>().offsetMax = new Vector2(maxValue, maxValue);
            } else {
                GetComponent<RectTransform>().offsetMax = new Vector2(-300f, -300f);
            }

            if (minValue <= 300f) {
                minValue += Time.unscaledDeltaTime * animationSpeed;
                GetComponent<RectTransform>().offsetMin = new Vector2(minValue, minValue);
            } else {
                GetComponent<RectTransform>().offsetMin = new Vector2(300f, 300f);
                gameObject.transform.parent.gameObject.SetActive(false);
            }
        }
    }

    public void Open() {
        isOpen = true;
    }
    public void Close() { isOpen = false; }
}
