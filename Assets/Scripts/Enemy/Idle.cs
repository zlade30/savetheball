using UnityEngine;

public class Idle : MonoBehaviour
{
    private SpriteRenderer sp;
    private Rigidbody2D rb;
    private Animator animator;
    private string currentEdge = "";

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        sp = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.eulerAngles = new Vector3(0f, 0f, 0f);
        if (currentEdge == "Top" || currentEdge == "Bottom") {
            int choose = Random.Range(0, 2);
            if (choose == 0) Utils.ActivateAnimation(Utils.isIdle1, animator);
            else Utils.ActivateAnimation(Utils.isIdle2, animator);

            if (currentEdge == "Top") sp.flipY = true;
            else sp.flipY = false;
        }
        else {
            sp.flipY = false;
            if (currentEdge == "Left") sp.flipX = false;
            else sp.flipX = true;
            Utils.ActivateAnimation(Utils.isIdleSlide, animator);
        }
        rb.constraints = RigidbodyConstraints2D.FreezeAll;
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        currentEdge = collider.gameObject.name;
    }
}
