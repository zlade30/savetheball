using UnityEngine;
using TMPro;

public class Jump : MonoBehaviour
{
    [SerializeField]
    float jumpSpeed;
    [SerializeField]
    GameObject ball;
    private Rigidbody2D rBody;
    private SpriteRenderer sprite;
    private Vector2 lastPos;
    private Animator animator;
    [SerializeField]
    private TextMeshProUGUI score;
    private string jumping = "jumping";
    private bool isInit;
    private bool isBallCaught = false;

    // Start is called before the first frame update
    void Awake()
    {
        rBody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        HandleSpeed();
        HandleJump();
    }

    void HandleJump()
    {
        if (isBallCaught) Utils.ActivateAnimation(Utils.isCatch1, animator);
        else Utils.ActivateAnimation(Utils.isJumping, animator);
        sprite.flipY = true;

        if (!isInit) {
            lastPos = ball.transform.position - transform.position;
            isInit = true;
        }

        transform.position = Vector2.MoveTowards(
            transform.position,
            new Vector2(lastPos.x * 7f, lastPos.y * 7f),
            jumpSpeed * Time.deltaTime
        );

        var offset = 90f;
        lastPos.Normalize();
        float angle = Mathf.Atan2(lastPos.y, lastPos.x) * Mathf.Rad2Deg;       
        transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
        
        rBody.constraints = RigidbodyConstraints2D.None;
    }

    void HandleSpeed()
    {
        if (int.Parse(score.text) >= 0 && int.Parse(score.text) <= 99) {
            jumpSpeed = 7f;
        } else if (int.Parse(score.text) >= 100 && int.Parse(score.text) <= 149) {
            jumpSpeed = 8f;
        } else if (int.Parse(score.text) >= 150 && int.Parse(score.text) <= 199) {
            jumpSpeed = 9f;
        } else if (int.Parse(score.text) >= 200 && int.Parse(score.text) <= 249) {
            jumpSpeed = 10f;
        } else if (int.Parse(score.text) >= 250 && int.Parse(score.text) <= 299) {
            jumpSpeed = 11f;
        } else if (int.Parse(score.text) >= 300) {
            jumpSpeed = 12f;
        }
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.name == "Ball") {
            isBallCaught = true;
        }
        isInit = false;
    }
}
