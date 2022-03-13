using System.Collections;
using System.Collections.Generic;
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

    // Start is called before the first frame update
    void Start()
    {
        powerups = powerupsObject.GetComponent<Powerups>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string name = eventData.pointerCurrentRaycast.gameObject.name;

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
        Debug.Log(name);
        bar.fillAmount = 1f;
    }
}
