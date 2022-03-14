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
    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
    float idleDur = 0f;
    private float worldWidth, worldHeight;
	private float enemyWidth, enemyHeight;
    private string colliderName;
    private string currentSide;
    private Movement movement;
    private Jump jump;
    private Idle idle;
    private bool isBallCaught = false;
    private Animator animator;
    private SpriteRenderer sprite;
    private Rigidbody2D rBody;
    private GameOver gameOver;
    private Score score;
    private Score yourScore;
    void Start()
    {
        movement = GetComponent<Movement>();
        jump = GetComponent<Jump>();
        idle = GetComponent<Idle>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        rBody = GetComponent<Rigidbody2D>();
        gameOver = GameObject.Find("Main Camera").GetComponent<GameOver>();
        score = GameObject.Find("Score").GetComponent<Score>();
        yourScore = GameObject.Find("YourScore").GetComponent<Score>();
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		enemyWidth = transform.lossyScale.x;
		enemyHeight = transform.lossyScale.y;
    }

    void HandleJumpCaught(string colliderName)
    {
        if (isBallCaught) {
            transform.eulerAngles = new Vector3(0f, 0f, 0f);
            switch (colliderName) {
                case "Top":
                    transform.position = new Vector2(transform.position.x, (((worldHeight / 2) - toolbar.transform.lossyScale.y) - enemyHeight));
                    sprite.flipY = true;
                    break;
                case "Bottom":
                    transform.position = new Vector2(transform.position.x, -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - enemyHeight));
                    sprite.flipY = false;
                    break;
                case "Left":
                    transform.position = new Vector2(-((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
                    sprite.flipY = false;
                    sprite.flipX = false;
                    break;
                case "Right":
                    transform.position = new Vector2(((worldWidth / 2) - (enemyWidth / 2)), transform.position.y);
                    sprite.flipY = false;
                    sprite.flipX = true;
                    break;
                default:
                    break;
            }

            if (colliderName == "Top" || colliderName == "Bottom")
                Utils.ActivateAnimation(Utils.isCatch1, animator);
            else
                Utils.ActivateAnimation(Utils.isCatch2, animator);
            jump.enabled = false;
            idle.enabled = false;
            movement.enabled = false;
            rBody.simulated = false;
            gameOver.enabled = true;
            score.enabled = false;
            yourScore.enabled = false;
        }

        if (colliderName == "Ball") {
            isBallCaught = true;
            isJump = true;
        }   else {
            isJump = false;
        }
    }

    void HandleMovementCaught()
    {
        if (currentSide == "Top" || currentSide == "Bottom")
            Utils.ActivateAnimation(Utils.isCatch1, animator);
        else
            Utils.ActivateAnimation(Utils.isCatch2, animator);
        idle.enabled = false;
        movement.enabled = false;
        gameOver.enabled = true;
        score.enabled = false;
        yourScore.enabled = false;
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        colliderName = collider.gameObject.name;
        if (colliderName != "Ball")
            currentSide = colliderName;
        HandleJumpCaught(colliderName);
        rBody.constraints = RigidbodyConstraints2D.None;
    }

    // Update is called once per frame
    void Update()
    {
        if (isBallCaught) {
            HandleMovementCaught();
        } else {
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
}
