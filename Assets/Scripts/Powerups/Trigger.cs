using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Trigger : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    private Image bar;
    [SerializeField]
    private GameObject powerupsObject;
    private Powerups powerups;
    private Game game;

    // Start is called before the first frame update
    void Start()
    {
        powerups = powerupsObject.GetComponent<Powerups>();
        game = Camera.main.GetComponent<Game>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string name = eventData.pointerCurrentRaycast.gameObject.name;

        if (!game.isPause && !game.isOver) {
            if (name == Utils.fire || name == "FireValue") {
                powerups.isFireTrigger = true;
            }

            if (name == Utils.ice || name == "IceValue") {
                powerups.isIceTrigger = true;
            }

            if (name == Utils.shield || name == "ShieldValue") {
                powerups.isShieldTrigger = true;
            }

            if (name == Utils.teleport || name == "TeleportValue") {
                powerups.isTeleportTrigger = true;
            }
            bar.fillAmount = 1f;
        }
    }
}
