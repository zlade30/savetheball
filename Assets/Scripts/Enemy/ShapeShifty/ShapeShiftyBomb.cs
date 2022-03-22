using System.Collections;
using UnityEngine;

public class ShapeShiftyBomb : MonoBehaviour
{
    [SerializeField]
    private Game game;
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
        Physics2D.IgnoreLayerCollision(3, 6);
        Physics2D.IgnoreLayerCollision(3, 9);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
