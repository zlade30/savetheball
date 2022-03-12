using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Trigger : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    private bool isFireTrigger = false;
    [SerializeField]
    private bool isIceTrigger = false;
    [SerializeField]
    private bool isShieldTrigger = false;
    [SerializeField]
    private bool isTimeTrigger = false;
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
        Debug.Log("Clicked: " + eventData.pointerCurrentRaycast.gameObject.name);
    }
}
