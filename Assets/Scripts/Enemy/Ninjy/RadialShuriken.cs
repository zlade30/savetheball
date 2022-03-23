using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadialShuriken : MonoBehaviour
{
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
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate (0, 0, rotationSpeed * Time.deltaTime);
        moveDur -= Time.deltaTime;
        if (moveDur <= 0f) {
            transform.position = Vector2.MoveTowards(
                transform.position,
                new Vector2(targetPos.x * 7f, targetPos.y * 7f),
                moveSpeed * Time.deltaTime
            );
            targetPos.Normalize();
        } else {
            targetPos = target.transform.position - transform.position;
        }
    }
}
