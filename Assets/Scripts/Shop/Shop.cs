using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;

public class Shop : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    GameObject powerupPanel;
    [SerializeField]
    GameObject skinPanel;
    [SerializeField]
    Image powerups;
    [SerializeField]
    Image skins;
    [SerializeField]
    TextMeshProUGUI powerupText;
    [SerializeField]
    TextMeshProUGUI skinText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string uiName = eventData.pointerCurrentRaycast.gameObject.name;
        switch (uiName) {
            case "Powerups":
                powerups.GetComponent<Image>().color = new Color32(84, 96, 108, 255);
                skins.GetComponent<Image>().color = new Color32(177, 188, 200, 255);
                powerupPanel.SetActive(true);
                skinPanel.SetActive(false);
                powerupText.color = new Color32(255, 255, 255, 255);
                skinText.color = new Color32(101, 101, 101, 255);
                break;
            case "Skins":
                skins.GetComponent<Image>().color = new Color32(84, 96, 108, 255);
                powerups.GetComponent<Image>().color = new Color32(177, 188, 200, 255);
                powerupPanel.SetActive(false);
                skinPanel.SetActive(true);
                skinText.color = new Color32(255, 255, 255, 255);
                powerupText.color = new Color32(101, 101, 101, 255);
                break;
            default:
                break;
        }
    }
}
