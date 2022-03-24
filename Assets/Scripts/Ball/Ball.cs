using UnityEngine;
using UnityEngine.EventSystems;

public class Ball : MonoBehaviour, IInitializePotentialDragHandler
{
    private float worldWidth, worldHeight;
	private float ballWidth, ballHeight;
	private float toolbarWidth, toolbarHeight;
    private float bX, bY;
    private Vector3 mousePosition;
    private bool following = false;
	private bool isCaught = false;
	private bool isDrag = false;
	private bool isInit = false;
	private CircleCollider2D col;
	private Game game;
	[SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
	[SerializeField]
	private Enemy enemy;
	[SerializeField]
	private Powerups powerups;
	[SerializeField]
	private Sprite[] sprites;
	public string ballCollidedBy = "";


    // Start is called before the first frame update
    void Awake()
    {
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		ballWidth = transform.lossyScale.x;
		ballHeight = transform.lossyScale.y;
        toolbarHeight = toolbar.transform.lossyScale.y;
		game = Camera.main.GetComponent<Game>();
		col = GetComponent<CircleCollider2D>();
		powerups = powerups.GetComponent<Powerups>();
		HandleSkin();
    }

	void Start()
    {
        EventTrigger trigger = GetComponent<EventTrigger>();
        
		EventTrigger.Entry drag = new EventTrigger.Entry();
        drag.eventID = EventTriggerType.Drag;
        drag.callback.AddListener((data) => { OnDragDelegate((PointerEventData)data); });
		trigger.triggers.Add(drag);
    }

	void HandleSkin() {
		string equippedSkin = PlayerPrefs.GetString(Utils.currentSkin);
		switch (equippedSkin) {
			case Utils.currentSkin:
				GetComponent<SpriteRenderer>().sprite = sprites[0];
				break;
			case Utils.basketBallSkin:
				GetComponent<SpriteRenderer>().sprite = sprites[1];
				break;
			case Utils.soccerBallSkin:
				GetComponent<SpriteRenderer>().sprite = sprites[2];
				break;
			case Utils.tennisBallSkin:
				GetComponent<SpriteRenderer>().sprite = sprites[3];
				break;
			case Utils.billiardBallSkin:
				GetComponent<SpriteRenderer>().sprite = sprites[4];
				break;
			default:
				GetComponent<SpriteRenderer>().sprite = sprites[0];
				break;
		}
	}

    public void OnDragDelegate(PointerEventData data)
    {
		if (!game.isPause) {
			HandleBallMovement();
		}
    }

	public void OnInitializePotentialDrag(PointerEventData data)
	{
		data.useDragThreshold = false;
	}

	void HandleBallMovement()
	{
		mousePosition = Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0.0f));
		if (mousePosition.x > ((worldWidth / 2) - (ballWidth / 2))) {
			bX = ((worldWidth / 2) - (ballWidth / 2));
			mousePosition.Set (bX, mousePosition.y, mousePosition.z);
			transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		} else if (mousePosition.x < -((worldWidth / 2) - (ballWidth / 2))){
			bX = -((worldWidth / 2) - (ballWidth / 2));
			mousePosition.Set (bX, mousePosition.y, mousePosition.z);
			transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		}
			
		if (mousePosition.y < -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - (ballHeight / 2))) {
			bY = -(((worldHeight / 2) - btmBorder.transform.lossyScale.y) - (ballHeight / 2));
			mousePosition.Set (mousePosition.x, bY, mousePosition.z);
			transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		}

		if (mousePosition.y > (((worldHeight / 2) - toolbar.transform.lossyScale.y) - (ballHeight / 2))) {
			bY = (((worldHeight / 2) - toolbar.transform.lossyScale.y) - (ballHeight / 2));
			mousePosition.Set (mousePosition.x, bY, mousePosition.z);
			transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
		}
		transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);

		if (powerups.isTeleportTrigger && Input.GetMouseButtonDown(0))
			SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.teleport);
	}

	void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Enemy" || collider.gameObject.name == "NinjyClone") {
			col.enabled = false;
			isCaught = true;
			gameObject.SetActive(false);
		} else if (collider.gameObject.name == "Explosion") {
			Utils.ActivateAnimation(Utils.isIdle1, enemy.GetComponent<Animator>());
			BallCaught();
		} else if (collider.gameObject.name == "Bullet") {
			BallCaught();
		} else if (collider.gameObject.name == "ShapeShiftyMissile") {
			BallCaught();
		} else if (collider.gameObject.name == "Shuriken" || collider.gameObject.name == "Kunai") {
			BallCaught();
		}

		ballCollidedBy = collider.gameObject.name;
    }

	void BallCaught() {
		col.enabled = false;
		isCaught = true;
		enemy.movement.enabled = false;
		enemy.abilities.enabled = false;
		enemy.jump.enabled = false;
		enemy.idle.enabled = false;
		gameObject.SetActive(false);
		game.GameOver();
	}

	void Update()
	{
		if (Input.GetMouseButtonDown(0) && powerups.isTeleportTrigger) {
			HandleBallMovement();
		}

		if (game.isOver) {
			col.enabled = false;
			isCaught = true;
			gameObject.SetActive(false);
		}
	}
}
