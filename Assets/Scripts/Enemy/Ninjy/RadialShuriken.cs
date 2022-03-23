using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadialShuriken : MonoBehaviour
{
    [SerializeField]
    private Score score;
    [SerializeField]
    private float rotationSpeed = 700f;
    [SerializeField]
    private GameObject target;
    [SerializeField]
    private float moveSpeed = 5f;

    private float moveDur = 2f;
    private Vector2 targetPos;

    // Start is called before the first frame update
    void Start()
    {
        Physics2D.IgnoreLayerCollision(10, 10);
        Physics2D.IgnoreLayerCollision(10, 8);
        Physics2D.IgnoreLayerCollision(10, 3);
    }

    // Update is called once per frame
    void Update()
    {
        if (score.score >= 0 && score.score <= 99f) {
            moveSpeed = 5f;
            rotationSpeed = 700f;
        } else if (score.score >= 100f && score.score <= 199f) {
            moveSpeed = 6f;
            rotationSpeed = 750f;
        } else if (score.score >= 200f && score.score <= 299f) {
            moveSpeed = 7f;
            rotationSpeed = 800f;
        } else if (score.score >= 300f && score.score <= 399f) {
            moveSpeed = 8f;
            rotationSpeed = 850f;
        } else if (score.score >= 400f && score.score <= 499f) {
            moveSpeed = 9f;
            rotationSpeed = 900f;
        } else {
            moveSpeed = 10f;
            rotationSpeed = 950f;
        }

        transform.Rotate (0, 0, rotationSpeed * Time.deltaTime);
        moveDur -= Time.deltaTime;
        if (moveDur <= 0f) {
            transform.position = Vector2.MoveTowards(
                transform.position,
                new Vector2(targetPos.x * 7f, targetPos.y * 7f),
                moveSpeed * Time.deltaTime
            );
            targetPos.Normalize();
             GetComponent<BoxCollider2D>().enabled = true;
        } else {
            targetPos = target.transform.position - transform.position;
            GetComponent<BoxCollider2D>().enabled = false;
        }
    }
}
