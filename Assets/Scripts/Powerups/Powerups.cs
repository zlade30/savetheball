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
            fireBar.fillAmount -= 1.0f / fireDur * Time.deltaTime;
            if (fireBar.fillAmount <= 0f) isFireTrigger = false;
        }

        if (isIceTrigger) {
            iceBar.fillAmount -= 1.0f / iceDur * Time.deltaTime;
            if (iceBar.fillAmount <= 0f) isIceTrigger = false;
        }

        if (isShieldTrigger) {
            shieldBar.fillAmount -= 1.0f / shieldDur * Time.deltaTime;
            Physics2D.IgnoreCollision(enemy.GetComponent<BoxCollider2D>(), ball.GetComponent<CircleCollider2D>());
            if (shieldBar.fillAmount <= 0f) {
                isShieldTrigger = false;
                Physics2D.IgnoreCollision(enemy.GetComponent<BoxCollider2D>(), ball.GetComponent<CircleCollider2D>(), false);
            }
        }

        if (isTeleportTrigger) {
            teleportBar.fillAmount -= 1.0f / teleportDur * Time.deltaTime;
            if (teleportBar.fillAmount <= 0f) isTeleportTrigger = false;
        }
    }
}
