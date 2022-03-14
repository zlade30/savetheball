using UnityEngine;

public class EdgeCollider : MonoBehaviour
{
    private float colDepth = 1f;
    private float zPosition = 0f;
    private Vector2 screenSize;
    public Transform leftCollider;
    public Transform rightCollider;
    private Vector3 cameraPos;
    // Use this for initialization
    void Start () {
        //Generate our empty objects
        rightCollider = GetComponent<Transform> ().Find ("Right");
        leftCollider = GetComponent<Transform> ().Find ("Left");

        //Make them the child of whatever object this script is on, preferably on the Camera so the objects move with the camera without extra scripting
        rightCollider.parent = transform;
        leftCollider.parent = transform;

        //Generate world space point information for position and scale calculations
        cameraPos = Camera.main.transform.position;
        screenSize.x = Vector2.Distance (Camera.main.ScreenToWorldPoint (new Vector2 (0, 0)), Camera.main.ScreenToWorldPoint (new Vector2 (Screen.width, 0))) * 0.5f;
        screenSize.y = Vector2.Distance (Camera.main.ScreenToWorldPoint (new Vector2 (0, 0)), Camera.main.ScreenToWorldPoint (new Vector2 (0, Screen.height))) * 0.5f;

        //Change our scale and positions to match the edges of the screen...   
        rightCollider.localScale = new Vector3 (colDepth, screenSize.y * 2, colDepth);
        rightCollider.position = new Vector3 (cameraPos.x + screenSize.x + (rightCollider.localScale.x * 0.5f), cameraPos.y, zPosition);
        leftCollider.localScale = new Vector3 (colDepth, screenSize.y * 2, colDepth);
        leftCollider.position = new Vector3 (cameraPos.x - screenSize.x - (leftCollider.localScale.x * 0.5f), cameraPos.y, zPosition);
    }

}
