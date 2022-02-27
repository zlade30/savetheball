using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed = 5f;
    [SerializeField]
    SpriteRenderer top;
    private Rigidbody2D rBody;
    private Vector3 lastPos;
    private bool isInit;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        top = GameObject.Find("Top").GetComponent<SpriteRenderer>();
        isInit = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isInit) {
            lastPos = transform.position;
            isInit = true;
        }

        transform.position = Vector2.MoveTowards(
            transform.position,
            new Vector3(lastPos.x * -1, (lastPos.y + top.bounds.size.y) * -1, lastPos.z),
            jumpSpeed * Time.deltaTime
        );
        // rBody.velocity = rBody.velocity.normalized;
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isInit = false;
    }
}
