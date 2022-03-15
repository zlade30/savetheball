using UnityEngine;
using UnityEngine.EventSystems;

public class UIEvent : MonoBehaviour, IPointerClickHandler
{
    private Game game;

    // Start is called before the first frame update
    void Start()
    {
        game = Camera.main.GetComponent<Game>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string uiName = eventData.pointerCurrentRaycast.gameObject.name;
        switch (uiName) {
            case "Back":
                if (!game.isOver)
                    game.Pause();
                break;
            case "Resume":
                game.Resume();
                break;
            case "Play":
                game.Play();
                break;
            default:
                break;
        }
    }
}
