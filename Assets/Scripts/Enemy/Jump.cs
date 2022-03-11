using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed = 1500f;
    [SerializeField]
    GameObject ball;
    private Rigidbody2D rBody;
    private SpriteRenderer sprite;
    private Vector2 lastPos;
    private Animator animator;
    private string jumping = "jumping";
    private bool isInit;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        Utils.ActivateAnimation(Utils.isJumping, animator);
        sprite.flipY = true;

        if (!isInit) {
            lastPos = ball.transform.position - transform.position;
            isInit = true;
        }

        transform.position = Vector2.MoveTowards(
            transform.position,
            new Vector2(lastPos.x * 7f, lastPos.y * 7f),
            jumpSpeed * Time.deltaTime
        );

        var offset = 90f;
        lastPos.Normalize();
        float angle = Mathf.Atan2(lastPos.y, lastPos.x) * Mathf.Rad2Deg;       
        transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
        
        rBody.constraints = RigidbodyConstraints2D.None;
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isInit = false;
    }
}
