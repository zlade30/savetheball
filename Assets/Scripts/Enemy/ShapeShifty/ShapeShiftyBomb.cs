using System.Collections;
using UnityEngine;

public class ShapeShiftyBomb : MonoBehaviour
{
    public float force;
    public float fieldOfImpact;
    public LayerMask layerToHit;

    void Start()
    {
        Collider2D[] objects = Physics2D.OverlapCircleAll(transform.position, fieldOfImpact, layerToHit);
        foreach(Collider2D obj in objects) {
            Vector2 direction = obj.transform.position - transform.position;
            obj.GetComponent<Rigidbody2D>().AddForce(direction * force);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
