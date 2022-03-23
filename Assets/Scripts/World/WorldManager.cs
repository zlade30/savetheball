using UnityEngine.SceneManagement;
using UnityEngine;

public class WorldManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.SetFloat(Utils.score, 0);
        Time.timeScale = 1f;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SelectWorld(GameObject world) {
        switch (world.name) {
            case "Speedy":
                SceneManager.LoadScene(Utils.speedyWorld);
                break;
            case "Bomby":
                SceneManager.LoadScene(Utils.bombyWorld);
                break;
            case "ShapeShifty":
                SceneManager.LoadScene(Utils.shapeShiftyWorld);
                break;
            case "Ninjy":
                SceneManager.LoadScene(Utils.ninjyWorld);
                break;
            default:
                break;
        }
    }

    public void GoBack() {
        SceneManager.LoadScene(Utils.mainMenu);
    }
}
