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
    private Vector2 lastPos;
    private bool isInit;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!isInit) {
            lastPos = ball.transform.position - transform.position;
            isInit = true;
        }

        transform.position = Vector2.MoveTowards(
            transform.position,
            new Vector2(lastPos.x * 5f, lastPos.y * 5f),
            jumpSpeed * Time.deltaTime
        );
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isInit = false;
    }
}
