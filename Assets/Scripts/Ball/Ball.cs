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
    private Vector3 mousePosition;
    private bool following = false;
    
    // Start is called before the first frame update
    void Awake()
    {
        worldHeight = Camera.main.orthographicSize * 2;
		worldWidth = worldHeight * Screen.width / Screen.height;
		ballWidth = transform.lossyScale.x;
		ballHeight = transform.lossyScale.y;
        toolbarHeight = toolbar.transform.lossyScale.y;
    }

    // Update is called once per frame
    void Update()
    {
        mousePosition = Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 0.0f));

        if (Input.GetMouseButtonDown (0)) {
			if (following)
				following = false;
			else
				following = true;
		}	

		if(Input.GetMouseButtonUp(0))
			following = false;
        
        if (following) {
            if (mousePosition.x > ((worldWidth / 2) - (ballWidth / 2))) {
				bX = ((worldWidth / 2) - (ballWidth / 2));
				mousePosition.Set (bX, mousePosition.y, mousePosition.z);
				transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
			} else if(mousePosition.x < -((worldWidth / 2) - (ballWidth / 2))){
				bX = -((worldWidth / 2) - (ballWidth / 2));
				mousePosition.Set (bX, mousePosition.y, mousePosition.z);
				transform.position = Vector2.Lerp (transform.position, mousePosition, 1.0f);
			}
				
			if (mousePosition.y < -(((worldHeight / 2) - (ballHeight / 2)))) {
				bY = -(((worldHeight / 2) - (ballHeight / 2)));
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
}
