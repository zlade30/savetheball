using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed = 50f;
    [SerializeField]
    GameObject ball;
    private Rigidbody2D rBody;
    private Vector3 lastPos;
    private bool isInit;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        isInit = false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!isInit) {
            lastPos = ball.transform.position;
            isInit = true;
            Debug.Log(lastPos);
        }

        // transform.position = Vector2.MoveTowards(
        //     transform.position,
        //     new Vector3(transform.position.x * -1, transform.position.y * -1, transform.position.z) * 10f,
        //     jumpSpeed * Time.deltaTime
        // );
        // rBody.AddForce( desiredVelocity - rigidbody.velocity, ForceMode.VelocityChange );
        Vector3 targetdir = lastPos - transform.position;
        rBody.AddForce(targetdir * jumpSpeed * Time.fixedDeltaTime, ForceMode2D.Impulse);
        // Vector2 newVelocity = rBody.velocity;
        // newVelocity.y = jumpSpeed;
        // newVelocity.x = jumpSpeed;
        // rBody.velocity = newVelocity;

        // transform.eulerAngles = new Vector3(0, 0, 0);
		// rBody.constraints = RigidbodyConstraints2D.FreezeRotation;
        rBody.velocity = rBody.velocity.normalized * jumpSpeed;

    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isInit = false;
    }
}
