using UnityEngine;
using TMPro;

public class TabletScaler : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (GetDeviceType() == "Tablet") {
            // Scale Score
            switch (gameObject.name) {
                case "Score":
                    GetComponent<TextMeshProUGUI>().fontSize = 60;
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 40f);
                    // asdasd
                    break;
                case "CoinPanel":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 12f);
                    GetComponent<RectTransform>().offsetMin = new Vector2(GetComponent<RectTransform>().offsetMin.x, 12f);
                    break;
                case "StarPanel":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 5f);
                    GetComponent<RectTransform>().offsetMin = new Vector2(GetComponent<RectTransform>().offsetMin.x, 5f);
                    break;
                case "CoinValue":
                    GetComponent<TextMeshProUGUI>().fontSize = 25;
                    break;
                case "StarValue":
                    GetComponent<TextMeshProUGUI>().fontSize = 25;
                    break;
                case "Back":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 10f);
                    GetComponent<RectTransform>().offsetMin = new Vector2(GetComponent<RectTransform>().offsetMin.x, 10f);
                    break;
                case "Title":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 30f);
                    GetComponent<RectTransform>().offsetMin = new Vector2(GetComponent<RectTransform>().offsetMin.x, 30f);
                    break;
                case "PowerupValue":
                    GetComponent<TextMeshProUGUI>().fontSize = 40;
                    break;
                case "ShopBack":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 30f);
                    GetComponent<RectTransform>().offsetMin = new Vector2(GetComponent<RectTransform>().offsetMin.x, 30f);
                    break;
                case "ShopPanel":
                    GetComponent<RectTransform>().offsetMax = new Vector2(GetComponent<RectTransform>().offsetMax.x, 40f);
                    break;
                default:
                    break;
            }
        } else {
            // Scale Score
            switch (gameObject.name) {
                case "Score":
                    GetComponent<TextMeshProUGUI>().fontSize = 80;
                    break;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private float DeviceDiagonalSizeInInches() {
        float screenWidth = Screen.width / Screen.dpi;
        float screenHeight = Screen.height / Screen.dpi;
        float diagonalInches =Mathf.Sqrt(Mathf.Pow(screenWidth, 2) + Mathf.Pow(screenHeight, 2));
    
        return diagonalInches;
    }

    public string GetDeviceType() {
        #if UNITY_IOS
            bool deviceIsIpad = UnityEngine.iOS.Device.generation.ToString().Contains("iPad");
            if (deviceIsIpad)
            {
                return "Tablet";
            }

            bool deviceIsIphone = UnityEngine.iOS.Device.generation.ToString().Contains("iPhone");
            if (deviceIsIphone)
            {
                return "Phone";
            }
        #endif
            float aspectRatio = Mathf.Max(Screen.width, Screen.height) / Mathf.Min(Screen.width, Screen.height);
            bool isTablet = (DeviceDiagonalSizeInInches() > 6.5f && aspectRatio < 2f);

            if (isTablet)
            {
                return "Tablet";
            }
            else
            {
                return "Phone";
            }
    }
}
