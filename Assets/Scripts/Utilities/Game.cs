using UnityEngine;
using UnityEngine.EventSystems;

public class Game : MonoBehaviour, IPointerClickHandler
{
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
        string name = eventData.pointerCurrentRaycast.gameObject.name;

        Debug.Log(name);

        if (name == "Back") {
            Time.timeScale = 0f;
        }
    }
}
