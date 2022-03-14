using UnityEngine;

public class Ball : MonoBehaviour
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
    
    // Start is called before the first frame update
    void Awake()
    {
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		ballWidth = transform.lossyScale.x;
		ballHeight = transform.lossyScale.y;
        toolbarHeight = toolbar.transform.lossyScale.y;
		col = GetComponent<CircleCollider2D>();
		powerups = powerups.GetComponent<Powerups>();
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

    // Update is called once per frame
    void Update()
    {
		if (Input.GetMouseButtonDown(0) && powerups.isTeleportTrigger) {
			HandleBallMovement();
		} 
        
        if (following && isDrag) {
			HandleBallMovement();
        }
    }

	void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Enemy") {
			col.enabled = false;
			isCaught = true;
			gameObject.SetActive(false);
		}
    }

	private void OnMouseDown()
	{
		isDrag = true;
		if (following)
			following = false;
		else
			following = true;
	}

	private void OnMouseUp() {
		following = false;
		isDrag = false;
	}
}
