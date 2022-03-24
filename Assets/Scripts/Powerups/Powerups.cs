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
    public GameObject enemy;
    [SerializeField]
    private GameObject ball;
    [SerializeField]
    private GameObject destroyEffect;
    public GameObject ice;
    private Game game;
    public float fireDur = 0.5f;
    public float iceDur = 5f;
    public float shieldDur = 5f;
    public float teleportDur = 5f;

    public bool isIceActivated { set; get; } = false;
    private GameObject iceObject;
    private GameObject[] icesToDestory;

    // Start is called before the first frame update
    void Start()
    {
        game = Camera.main.GetComponent<Game>();
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
                
                GameObject[] enemyObjects = GameObject.FindGameObjectsWithTag("EnemyObject");
                GameObject[] ices = enemyObjects;
                
                if (isIceActivated) {
                    iceObject = Instantiate(ice, enemy.transform.position, Quaternion.identity);
                    iceObject.SetActive(true);
                    iceObject.gameObject.transform.position = new Vector3(iceObject.gameObject.transform.position.x, iceObject.gameObject.transform.position.y, -8f);
                    
                    for (int i = 0; i < enemyObjects.Length; i++) {
                        GameObject enemyObject = enemyObjects[i];
                        ices[i] = Instantiate(ice, enemyObject.transform.position, Quaternion.identity);
                        ices[i].SetActive(true);
                        ices[i].gameObject.transform.position = new Vector3(ices[i].gameObject.transform.position.x, ices[i].gameObject.transform.position.y, -8f);
                    }
                    isIceActivated = false;
                    icesToDestory = ices;
                }

                if (iceBar.fillAmount <= 0f) {
                    isIceTrigger = false;
                    Time.timeScale = 1f;
                    Destroy(iceObject);
                    for (int i = 0; i < icesToDestory.Length; i++) {
                        Destroy(icesToDestory[i]);
                    }
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
