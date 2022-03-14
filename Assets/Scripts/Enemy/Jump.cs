using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed;
    [SerializeField]
    GameObject ball;
    private Rigidbody2D rBody;
    private SpriteRenderer sprite;
    private Vector2 lastPos;
    private Animator animator;
    private TextMeshProUGUI score;
    private string jumping = "jumping";
    private bool isInit;
    private bool isBallCaught = false;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        score = GameObject.Find("Score").GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        HandleSpeed();
        HandleJump();
    }

    void HandleJump()
    {
        if (isBallCaught) Utils.ActivateAnimation(Utils.isCatch1, animator);
        else Utils.ActivateAnimation(Utils.isJumping, animator);
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

    void HandleSpeed()
    {
        if (int.Parse(score.text) >= 100 && int.Parse(score.text) <= 199) {
            jumpSpeed = 5f;
        } else if (int.Parse(score.text) >= 200 && int.Parse(score.text) <= 299) {
            jumpSpeed = 5.5f;
        } else if (int.Parse(score.text) >= 300 && int.Parse(score.text) <= 399) {
            jumpSpeed = 6f;
        } else if (int.Parse(score.text) >= 400 && int.Parse(score.text) <= 499) {
            jumpSpeed = 7f;
        } else if (int.Parse(score.text) >= 500 && int.Parse(score.text) <= 599) {
            jumpSpeed = 8f;
        } else if (int.Parse(score.text) >= 600) {
            jumpSpeed = 9f;
        }
    }

<<<<<<< HEAD
    void OnTriggerEnter2D(Collider2D collider)
=======
    void OnCollisionEnter2D(Collision2D collider)
>>>>>>> bc65015e256f2f8be1ac57ee881862b5c941e9c1
    {
        if (collider.gameObject.name == "Ball") {
            isBallCaught = true;
        }
        isInit = false;
    }
}
