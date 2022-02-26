using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    private string[] edges = {"Top", "Right", "Bottom", "Left"};
    private string [] vertPos = {"Top", "Bottom"};
    private string [] horPos = {"Left", "Right"};
    [SerializeField]
    string currentEdge = "";
    [SerializeField]
    string currentPosition = "";
    [SerializeField]
    float walkSpeed = 2f;
    [SerializeField]
    float maxWalkFlipDur = 3f;
    [SerializeField]
    float walkFlipDur;
    private int position = 0;
    private Rigidbody2D rBody;

    void Awake()
    {
        rBody = gameObject.GetComponent<Rigidbody2D>();
        walkFlipDur = maxWalkFlipDur;
    }

    // Start is called before the first frame update
    void Start()
    {
        // rbody.velocity = moveDirection * 10f;
    }

    // Update is called once per frame
    void Update()
    {
        FlipDuration();
    }

    void FixedUpdate()
    {
        HandleMovement();
        DisableGravity();
    }

    void OnCollisionEnter2D(Collision2D collider)
    {
        currentEdge = collider.gameObject.name;
    }

    void DisableGravity()
    {
        if (currentEdge != "")
            rBody.gravityScale = 0;
    }

    void HandleMovement()
    {
        if (currentEdge == "Top" || currentEdge == "Bottom") {
            currentPosition = horPos[position];
            if (currentPosition == "Right")
                rBody.MovePosition(transform.position + transform.right * walkSpeed * Time.fixedDeltaTime);
            else
                rBody.MovePosition(transform.position - transform.right * walkSpeed * Time.fixedDeltaTime);
        } else if (currentEdge == "Right" || currentEdge == "Left") {
            currentPosition = vertPos[position];
            if (currentPosition == "Top")
                rBody.MovePosition(transform.position + transform.up * walkSpeed * Time.fixedDeltaTime);
            else
                rBody.MovePosition(transform.position - transform.up * walkSpeed * Time.fixedDeltaTime);
        }
        rBody.velocity = rBody.velocity.normalized;
    }

    void FlipDuration()
    {
        walkFlipDur -= Time.deltaTime;
        if (walkFlipDur <= 0) {
            walkFlipDur = Random.Range(1f, maxWalkFlipDur);
            position = Random.Range(0, 2);
        }
    }
}
