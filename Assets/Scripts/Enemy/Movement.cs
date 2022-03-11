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
    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;

    private float worldWidth, worldHeight;
	private float enemyWidth, enemyHeight;
    private int position = 0;
    private Rigidbody2D rBody;
    private SpriteRenderer sprite;
    private Animator animator;

    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        walkFlipDur = maxWalkFlipDur;
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		enemyWidth = transform.lossyScale.x;
		enemyHeight = transform.lossyScale.y;
    }

    // Start is called before the first frame update
    void Start()
    {
        
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
        // rBody.position = new Vector2(0f, 0f);
        switch (currentEdge) {
            case "Top":
                transform.position = new Vector2(transform.position.x, (((worldHeight / 2) - toolbar.transform.lossyScale.y) - enemyHeight));
                break;
            case "Bottom":
                transform.position = new Vector2(transform.position.x, -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - enemyHeight));
                break;
            case "Left":
                transform.position = new Vector2(-((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
                break;
            case "Right":
                transform.position = new Vector2(((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
                break;
            default:
                break;
        }
    }

    void DisableGravity()
    {
        if (currentEdge != "")
            rBody.gravityScale = 0;
    }

    void HandleMovement()
    {   
        transform.eulerAngles = new Vector3(0f, 0f, 0f);

        if (currentEdge == "Top" || currentEdge == "Bottom") {
            currentPosition = horPos[position];
            Utils.ActivateAnimation(Utils.isRunning, animator);
            if (currentEdge == "Top") sprite.flipY = true;
            else sprite.flipY = false;
            if (currentPosition == "Right") {
                rBody.MovePosition(transform.position + transform.right * walkSpeed * Time.fixedDeltaTime);
                sprite.flipX = true;
            }
            else {
                sprite.flipX = false;
                rBody.MovePosition(transform.position - transform.right * walkSpeed * Time.fixedDeltaTime);
            }
        } else if (currentEdge == "Right" || currentEdge == "Left") {
            currentPosition = vertPos[position];
            sprite.flipY = false;
            if (currentEdge == "Right") sprite.flipX = true;
            else sprite.flipX = false;
            if (currentPosition == "Top") {
                Utils.ActivateAnimation(Utils.isSideRunning, animator);
                rBody.MovePosition(transform.position + transform.up * walkSpeed * Time.fixedDeltaTime);
            }   else {
                Utils.ActivateAnimation(Utils.isSliding, animator);
                rBody.MovePosition(transform.position - transform.up * walkSpeed * Time.fixedDeltaTime);
            }
        }
        rBody.velocity = rBody.velocity.normalized;
        rBody.constraints = RigidbodyConstraints2D.None;
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
