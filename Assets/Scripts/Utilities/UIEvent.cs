using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

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
                if (game.isOver) {
                    if (PlayerPrefs.GetInt(Utils.star) != 0) {
                        int value = PlayerPrefs.GetInt(Utils.star);
                        --value;
                        PlayerPrefs.SetInt(Utils.star, value);
                        game.Continue();
                    } else {
                        game.OutOfStar();
                    }
                }
                else {
                    if (PlayerPrefs.GetInt(Utils.life) != 0) {
                        int value = PlayerPrefs.GetInt(Utils.life);
                        --value;
                        PlayerPrefs.SetInt(Utils.life, value);
                        game.Play();
                    } else {
                        game.OutOfLife();
                    }
                }
                break;
            case "Restart":
                if (PlayerPrefs.GetInt(Utils.life) != 0) {
                    int value = PlayerPrefs.GetInt(Utils.life);
                    --value;
                    PlayerPrefs.SetInt(Utils.life, value);
                    game.Play();
                } else {
                    game.OutOfLife();
                }
                break;
            case "Ads":
                game.outOfLifePanel.SetActive(false);
                game.outOfStarPanel.SetActive(false);
                break;
            case "Exit":
                SceneManager.LoadScene(Utils.world);
                break;
            default:
                break;
        }
    }
}
