using UnityEngine;
using UnityEngine.UI;

public class Powerups : MonoBehaviour
{
    public bool isFireTrigger { set; get; }
    public bool isIceTrigger { set; get; }
    public bool isShieldTrigger { set; get; }
    public bool isTeleportTrigger { set; get; }

    [SerializeField]
    private Image fireBar;
    [SerializeField]
    private Image iceBar;
    [SerializeField]
    private Image shieldBar;
    [SerializeField]
    private Image teleportBar;
    [SerializeField]
    private GameObject enemy;
    [SerializeField]
    private GameObject ball;
    [SerializeField]
    private GameObject destroyEffect;
    private Game game;
    public float fireDur = 0.5f;
    public float iceDur = 5f;
    public float shieldDur = 5f;
    public float teleportDur = 5f;

    // Start is called before the first frame update
    void Start()
    {
        game = Camera.main.GetComponent<Game>();
        if (PlayerPrefs.GetInt("initialize") != 1) {
            // Give default values when newly installed
            PlayerPrefs.SetInt("initialize", 1);
            PlayerPrefs.SetInt(Utils.life, 3);
            PlayerPrefs.SetInt(Utils.star, 3);
            PlayerPrefs.SetInt(Utils.fire, 3);
            PlayerPrefs.SetInt(Utils.ice, 3);
            PlayerPrefs.SetInt(Utils.shield, 3);
            PlayerPrefs.SetInt(Utils.teleport, 3);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (!game.isPause && !game.isOver) {
            if (isFireTrigger) {
                fireBar.fillAmount -= 1.0f / fireDur * Time.unscaledDeltaTime;
                GameObject[] enemyObjects = GameObject.FindGameObjectsWithTag("EnemyObject");
                foreach(GameObject obj in enemyObjects) {
                    GameObject.Destroy(obj);
                    GameObject exp = Instantiate(destroyEffect, obj.transform.position, Quaternion.identity);
                    exp.SetActive(true);
                    var main = exp.GetComponent<ParticleSystem>().main; 
                    main.stopAction = ParticleSystemStopAction.Destroy;
                }
                if (fireBar.fillAmount <= 0f) isFireTrigger = false;
            }

            if (isIceTrigger) {
                iceBar.fillAmount -= 1.0f / iceDur * Time.unscaledDeltaTime;
                Time.timeScale = 0f;
                if (iceBar.fillAmount <= 0f) {
                    isIceTrigger = false;
                    Time.timeScale = 1f;
                }
            }

            if (isShieldTrigger) {
                shieldBar.fillAmount -= 1.0f / shieldDur * Time.unscaledDeltaTime;
                Physics2D.IgnoreLayerCollision(7, 3);
                Physics2D.IgnoreLayerCollision(7, 8);
                Physics2D.IgnoreLayerCollision(7, 6);
                Physics2D.IgnoreLayerCollision(7, 9);
                Physics2D.IgnoreLayerCollision(7, 10);
                if (shieldBar.fillAmount <= 0f) {
                    isShieldTrigger = false;
                    Physics2D.IgnoreLayerCollision(7, 3, false);
                    Physics2D.IgnoreLayerCollision(7, 8, false);
                    Physics2D.IgnoreLayerCollision(7, 6, false);
                    Physics2D.IgnoreLayerCollision(7, 9, false);
                    Physics2D.IgnoreLayerCollision(7, 10, false);
                }
            }

            if (isTeleportTrigger) {
                teleportBar.fillAmount -= 1.0f / teleportDur * Time.unscaledDeltaTime;
                if (teleportBar.fillAmount <= 0f) isTeleportTrigger = false;
            }
        }
    }
}
