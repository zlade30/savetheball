using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField]
    bool isJump = false;
    [SerializeField]
    bool isIdle;
    [SerializeField]
    static float maxJumpDur = 5f;
    [SerializeField]
    float jumpDur = maxJumpDur;
    float idleDur = 0f;
    
    // Start is called before the first frame update
    private Movement movement;
    private Jump jump;
    private Idle idle;
    void Start()
    {
        movement = GetComponent<Movement>();
        jump = GetComponent<Jump>();
        idle = GetComponent<Idle>();
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isJump = false;
    }

    // Update is called once per frame
    void Update()
    {
        jumpDur -= Time.deltaTime;
        if (jumpDur <= 0f) {
            isJump = true;
            if (Random.Range(0, 10) == 0) isIdle = true;
            else isIdle = false;
            jumpDur = Random.Range(0f, maxJumpDur);
            idleDur = Random.Range(0f, maxJumpDur);
        }

        if (isJump) {
            jump.enabled = true;
            movement.enabled = false;
            idle.enabled = false;
        } else {
            jump.enabled = false;
            idleDur -= Time.deltaTime;
            if (idleDur <= 0f) {
                movement.enabled = true;
                idle.enabled = false;
            }
            if (isIdle) {
                idle.enabled = true;
                movement.enabled = false;
            }
            else {
                movement.enabled = true;
                idle.enabled = false;
            }
        }
    }
}
