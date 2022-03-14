using System.Collections;
using System.Collections.Generic;
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
    public float fireDur = 0.5f;
    public float iceDur = 5f;
    public float shieldDur = 5f;
    public float teleportDur = 5f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isFireTrigger) {
            fireBar.fillAmount -= 1.0f / fireDur * Time.unscaledDeltaTime;
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
            Physics2D.IgnoreCollision(enemy.GetComponent<BoxCollider2D>(), ball.GetComponent<CircleCollider2D>());
            if (shieldBar.fillAmount <= 0f) {
                isShieldTrigger = false;
                Physics2D.IgnoreCollision(enemy.GetComponent<BoxCollider2D>(), ball.GetComponent<CircleCollider2D>(), false);
            }
        }

        if (isTeleportTrigger) {
            teleportBar.fillAmount -= 1.0f / teleportDur * Time.unscaledDeltaTime;
            if (teleportBar.fillAmount <= 0f) isTeleportTrigger = false;
        }
    }
}
