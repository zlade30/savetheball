using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed = 5f;
    [SerializeField]
    Ball ball;
    [SerializeField]
    SpriteRenderer top;
    private Rigidbody2D rBody;
    private Vector3 target;
    private Vector3 lastPos;
    private bool isInit;
    private float toolbarWidth;
    private float toolbarHeight;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        top = GameObject.Find("Top").GetComponent<SpriteRenderer>();
        isInit = false;
        toolbarWidth = top.sprite.bounds.size.x;
        toolbarHeight = top.sprite.bounds.size.y;
    }

    // Update is called once per frame
    void Update()
    {
        float step = 10f * Time.deltaTime;
        // Vector3 targetdir = ball.transform.position - transform.position;
		// transform.rotation= Quaternion.LookRotation(Vector3.forward,targetdir);
        if (!isInit) {
            target = ball.transform.position;
            lastPos = transform.position;
            isInit = true;
        }

        // Vector2 endPos = transform.position + Vector3.right * ball.transform

        // RaycastHit2D hit = Physics2D.Raycast(transform.position, ball.transform.position);
        // Debug.DrawRay(transform.position, ball.transform.position,  Color.red);
        // // goes through wall1 (layer 8,) hits wall2:
        // if(Physics2D.Raycast(transform.position, transform.forward, out hit)))
        // Debug.Log(H.transform.name);

        transform.position = Vector2.MoveTowards(transform.position, new Vector3(lastPos.x * -1, (lastPos.y + top.bounds.size.y) * -1, lastPos.z), step);
        rBody.constraints = RigidbodyConstraints2D.FreezeRotation;
		// transform.eulerAngles = new Vector3(0, 0, 0);
		// rBody.constraints = RigidbodyConstraints2D.FreezeRotation;
        // rBody.velocity = rBody.velocity.normalized;
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        isInit = false;
    }
}
