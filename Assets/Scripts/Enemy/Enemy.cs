using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour
{
    [SerializeField]
    bool isJump = false;
    [SerializeField]
    bool isIdle;
    [SerializeField]
    static float maxAbilityDur = 5f;
    [SerializeField]
    public float abilityDur = maxAbilityDur;
    [SerializeField]
    static float maxJumpDur = 5f;
    [SerializeField]
    float jumpDur = maxJumpDur;
    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
    [SerializeField]
    static float maxIdleDur = 5f;
    [SerializeField]
    float idleDur = maxIdleDur;
    [SerializeField]
    static float maxIdleStateDur = 3f;
    [SerializeField]
    private float idleStateDur = maxIdleStateDur;
    [SerializeField]
    private Sprite[] catch1Sprites;
    [SerializeField]
    private Sprite[] catch2Sprites;
    private float worldWidth, worldHeight;
	private float enemyWidth, enemyHeight;
    public string colliderName;
    private string currentSide;
    public Movement movement;
    public Jump jump;
    public Idle idle;
    private bool isBallCaught = false;
    private bool isBallJumpCaught = false;
    public bool isInit { set; get; } = false;
    public bool isGrounded = false;
    public bool isAbilityCast = false;
    private Animator animator;
    private SpriteRenderer sprite;
    private Rigidbody2D rBody;
    private Game game;
    public Abilities abilities;
    void Start()
    {
        movement = GetComponent<Movement>();
        jump = GetComponent<Jump>();
        idle = GetComponent<Idle>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        rBody = GetComponent<Rigidbody2D>();
        game = Camera.main.GetComponent<Game>();
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		enemyWidth = GetComponent<SpriteRenderer>().bounds.size.x;
		enemyHeight = GetComponent<SpriteRenderer>().bounds.size.y;
        abilities = GetComponent<Abilities>();
        StartCoroutine(FadeIn());
    }

    void HandleJumpCaught(string colliderName)
    {
        if (isBallCaught) {
            transform.eulerAngles = new Vector3(0f, 0f, 0f);
            switch (colliderName) {
                case "Top":
                    transform.position = new Vector2(transform.position.x, (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2));
                    sprite.flipY = true;
                    break;
                case "Bottom":
                    transform.position = new Vector2(transform.position.x, (-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2));
                    sprite.flipY = false;
                    break;
                case "Left":
                    transform.position = new Vector2(-(worldWidth / 2) + (enemyWidth / 2), transform.position.y);
                    sprite.flipY = false;
                    sprite.flipX = false;
                    break;
                case "Right":
                    transform.position = new Vector2((worldWidth / 2) - (enemyWidth / 2), transform.position.y);
                    sprite.flipY = true;
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
            abilities.enabled = false;
            rBody.simulated = false;
            game.GameOver();
        }

        if (colliderName == "Ball") {
            isBallCaught = true;
            jump.enabled = true;
        }   else {
            if (isInit) {
                jump.enabled = false;
                movement.enabled = true;
                isGrounded = true;
            }
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
        game.GameOver();
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        colliderName = collider.gameObject.name;
        if (colliderName == "Ball") {
            if (isGrounded) {
                if (currentSide == "Top" || currentSide == "Bottom") {
                    HandleCatch1Animation();
                }
                else
                    HandleCatch2Animation();
                idle.enabled = false;
                movement.enabled = false;
                jump.enabled = false;
                abilities.enabled = false;
                game.GameOver();
            } else {
                HandleCatch1Animation();
                isBallJumpCaught = true;
            }
        } else {
            currentSide = colliderName;
            isGrounded = true;
            
            if (isInit) {
                movement.enabled = true;
                jump.enabled = false;
            }

            if (isBallJumpCaught) {
                if (currentSide == "Top" || currentSide == "Bottom")
                    HandleCatch1Animation();
                else
                    HandleCatch2Animation();

                transform.eulerAngles = new Vector3(0f, 0f, 0f);
                switch (colliderName) {
                    case "Top":
                        transform.position = new Vector2(transform.position.x, (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2));
                        sprite.flipY = true;
                        break;
                    case "Bottom":
                        transform.position = new Vector2(transform.position.x, (-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2));
                        sprite.flipY = false;
                        break;
                    case "Left":
                        transform.position = new Vector2(-(worldWidth / 2) + (enemyWidth / 2), transform.position.y);
                        sprite.flipY = false;
                        sprite.flipX = false;
                        break;
                    case "Right":
                        transform.position = new Vector2((worldWidth / 2) - (enemyWidth / 2), transform.position.y); 
                        sprite.flipY = false;  
                        sprite.flipX = true;
                        break;
                    default:
                        break;
                }
                idle.enabled = false;
                movement.enabled = false;
                jump.enabled = false;
                abilities.enabled = false;
                game.GameOver();
            }
        }
        rBody.constraints = RigidbodyConstraints2D.None;
    }

    void HandleCatch1Animation() {
        string equippedSkin = PlayerPrefs.GetString(Utils.currentSkin);
        animator.enabled = false;
		switch (equippedSkin) {
			case Utils.currentSkin:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[0];
				break;
			case Utils.basketBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[1];
				break;
			case Utils.soccerBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[2];
				break;
			case Utils.tennisBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[3];
				break;
			case Utils.billiardBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[4];
				break;
			default:
				GetComponent<SpriteRenderer>().sprite = catch1Sprites[0];
				break;
		}
    }

    void HandleCatch2Animation() {
        string equippedSkin = PlayerPrefs.GetString(Utils.currentSkin);
        animator.enabled = false;
		switch (equippedSkin) {
			case Utils.currentSkin:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[0];
				break;
			case Utils.basketBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[1];
				break;
			case Utils.soccerBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[2];
				break;
			case Utils.tennisBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[3];
				break;
			case Utils.billiardBallSkin:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[4];
				break;
			default:
				GetComponent<SpriteRenderer>().sprite = catch2Sprites[0];
				break;
		}
    }

    // Update is called once per frame
    void Update()
    {
        if (!isInit) 
            transform.position = new Vector2(transform.position.x, (-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2));
        else {
            if (!game.isOver) {
                AbilitiesDur();
                if (abilities.enabled) {
                    Abilities();
                } else {
                    IdleDur();
                    HandleJumpDur();
                    if (jump.enabled) Jump();
                    if (movement.enabled) Movement();
                    if (idle.enabled) Idle();
                }
            }
        }
    }

    void HandleJumpDur()
    {
        jumpDur -= Time.deltaTime;
        if (jumpDur <= 0f) {
            jump.enabled = true;
            jumpDur = Random.Range(1f, maxJumpDur);
        }
    }

    void IdleDur()
    {
        idleDur -= Time.deltaTime;
        if (idleDur <= 0f && isGrounded) {
            if (Random.Range(0, 5) == 0) {
                Debug.Log("Idle");
                idle.enabled = true;
                jump.enabled = false;
                movement.enabled = false;
                abilities.enabled = false;
            } 
            idleDur = Random.Range(1f, maxIdleDur);
        }
    }
    
    void AbilitiesDur()
    {
        abilityDur -= Time.deltaTime;
        if (abilityDur <= 0f && isGrounded) {
            abilities.enabled = true;
        }
    }

    void Abilities()
    {
        movement.enabled = false;
        idle.enabled = false;
        jump.enabled = false;
    }

    void Idle()
    {
        if (idle.enabled) {
            idleStateDur -= Time.deltaTime;
            if (idleStateDur <= 0f) {
                idle.enabled = false;
                if (Random.Range(0, 5) == 0) movement.enabled = true;
                else jump.enabled = true;
                idleStateDur = Random.Range(1, maxIdleStateDur);
            }
        }
    }

    void Jump()
    {
        if (jump.enabled) {
            movement.enabled = false;
            idle.enabled = false;
            abilities.enabled = false;
            isGrounded = false;
        }
    }

    void Movement()
    {
        if (movement.enabled) {
            jump.enabled = false;
            idle.enabled = false;
            abilities.enabled = false;
            isGrounded = true;
        }
    }

    private IEnumerator FadeOut()
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
    }

    private IEnumerator FadeIn()
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a < 1)
        {
            alphaVal += 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }

        isInit = true;
        movement.enabled = true;
    }
}
