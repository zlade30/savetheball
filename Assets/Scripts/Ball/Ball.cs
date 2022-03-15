using UnityEngine;
using UnityEngine.EventSystems;

public class Ball : MonoBehaviour, IInitializePotentialDragHandler
{
    private float worldWidth, worldHeight;
	private float ballWidth, ballHeight;
	private float toolbarWidth, toolbarHeight;
    private float bX, bY;

    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
	[SerializeField]
	private Enemy enemy;
	[SerializeField]
	private Powerups powerups;
    private Vector3 mousePosition;
    private bool following = false;
	private bool isCaught = false;
	private bool isDrag = false;
	private bool isInit = false;
	private CircleCollider2D col;
	private Game game;
    
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
    }

	void Start()
    {
        EventTrigger trigger = GetComponent<EventTrigger>();
        
		EventTrigger.Entry drag = new EventTrigger.Entry();
        drag.eventID = EventTriggerType.Drag;
        drag.callback.AddListener((data) => { OnDragDelegate((PointerEventData)data); });
		trigger.triggers.Add(drag);
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
	}

	void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Enemy") {
			col.enabled = false;
			isCaught = true;
			gameObject.SetActive(false);
		}
    }

	void Update()
	{
		if (Input.GetMouseButtonDown(0) && powerups.isTeleportTrigger) {
			HandleBallMovement();
		}
	}
}
