using System.Collections;
using UnityEngine;

public class ShapeShiftyBomb : MonoBehaviour
{
    [SerializeField]
    private Game game;
    [SerializeField]
    private Score score;
    public float force;
    public float fieldOfImpact;
    public LayerMask layerToHit;

    void Start()
    {
        if (score.score >= 0 && score.score <= 99f) {
            force = 500f;
        } else if (score.score >= 100f && score.score <= 199f) {
            force = 600f;
        } else if (score.score >= 200f && score.score <= 299f) {
            force = 700f;
        } else if (score.score >= 300f && score.score <= 399f) {
            force = 800f;
        } else if (score.score >= 400f && score.score <= 499f) {
            force = 900f;
        } else {
            force = 1000f;
        }
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
