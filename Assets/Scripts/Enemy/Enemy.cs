using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField]
    bool isJump = false;
    [SerializeField]
    static float maxJumpDur = 5f;
    float jumpDur = maxJumpDur;
    
    // Start is called before the first frame update
    Movement movement;
    Jump jump;
    void Start()
    {
        movement = GetComponent<Movement>();
        jump = GetComponent<Jump>();
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
            jumpDur = Random.Range(0f, maxJumpDur);
        }

        if (isJump) {
            jump.enabled = true;
            movement.enabled = false;
        } else {
            jump.enabled = false;
            movement.enabled = true;
        }
    }
}
