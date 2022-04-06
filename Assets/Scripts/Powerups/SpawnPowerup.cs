using UnityEngine;
using Coffee.UIExtensions;

public class SpawnPowerup : MonoBehaviour
{
    [SerializeField]
    private string powerupName;
    private GameObject powerup; 
    private UIParticle addEffect;
    private Vector2 targetPos;

    private float value = 0f;
    private float yPos;
    private float curYPos;
    private bool isCollect = false;
    private bool isAdd = false;

    // Start is called before the first frame update
    void Start()
    {
        switch (powerupName) {
            case "Coin":
                powerup = GameObject.Find("CoinIcon");
                break;
            case "Star":
                powerup = GameObject.Find("StarIcon");
                break;
            case "Fire":
                powerup = GameObject.Find("Fire");
                break;
            case "Ice":
                powerup = GameObject.Find("Ice");
                break;
            case "Shield":
                powerup = GameObject.Find("Shield");
                break;
            case "Teleport":
                powerup = GameObject.Find("Teleport");
                break;
            default:
                break;
        }
        addEffect = powerup.transform.GetChild(0).gameObject.GetComponent<UIParticle>();
    }

    // Update is called once per frame
    void Update()
    {
        value += Time.deltaTime * 1f;
        if (value < 0.4f) {
            yPos = transform.position.y;
            curYPos = transform.position.y;
            transform.localScale = new Vector2(value, value);
        }

        if (isCollect) {
            yPos += Time.deltaTime * 1f;
            if (yPos <= curYPos + 0.5f) {
                transform.position = new Vector3(transform.position.x, yPos, -5f);
            } else {
                transform.position = Vector3.MoveTowards(
                    transform.position,
                    Camera.main.ScreenToWorldPoint(powerup.transform.position),
                    10f * Time.deltaTime
                );
            }
        }

        if (Camera.main.ScreenToWorldPoint(powerup.transform.position) == transform.position) {
            if (!isAdd) {
                isAdd = true;
                addEffect.Play();
                switch (powerupName) {
                    case "Coin":
                        AddValue(Utils.coin);
                        break;
                    case "Star":
                        AddValue(Utils.star);
                        break;
                    case "Fire":
                        AddValue(Utils.fire);
                        break;
                    case "Ice":
                        AddValue(Utils.ice);
                        break;
                    case "Shield":
                        AddValue(Utils.shield);
                        break;
                    case "Teleport":
                        AddValue(Utils.teleport);
                        break;
                    default:
                        break;
                }
                Destroy(gameObject);
            }
        }
    }

    private void AddValue(string powerup) {
        int value = PlayerPrefs.GetInt(powerup);
        value++;
        PlayerPrefs.SetInt(powerup, value);
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if (other.gameObject.name == "Ball") {
            isCollect = true;
        }
    }
}
