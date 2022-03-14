using System.Collections;
using System.Collections.Generic;
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
<<<<<<< HEAD
	private bool isInit = false;
=======
>>>>>>> bc65015e256f2f8be1ac57ee881862b5c941e9c1
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

<<<<<<< HEAD
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
=======
    // Update is called once per frame
    void Update()
    {
		if (powerups.isTeleportTrigger) {
			isDrag = true;
			following = true;
		}
		
        mousePosition = Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0.0f));
        
        if (following && isDrag) {
            if (mousePosition.x > ((worldWidth / 2) - (ballWidth / 2))) {
				bX = ((worldWidth / 2) - (ballWidth / 2));
				mousePosition.Set (bX, mousePosition.y, mousePosition.z);
				transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
			} else if(mousePosition.x < -((worldWidth / 2) - (ballWidth / 2))){
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
    }

	void OnCollisionEnter2D(Collision2D collider)
>>>>>>> bc65015e256f2f8be1ac57ee881862b5c941e9c1
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
