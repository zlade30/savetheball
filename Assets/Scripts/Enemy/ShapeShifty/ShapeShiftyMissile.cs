using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeShiftyMissile : MonoBehaviour
{
    [SerializeField]
    private Score score;
    public Transform target;
    public float speed;
    public float acceleration;
    public float rotationControl;

    private Rigidbody2D rBody;

    // Start is called before the first frame update
    void Start()
    {
        rBody = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    private void FixedUpdate() {
        if (score.score >= 0 && score.score <= 99f) {
            speed = 6f;
        } else if (score.score >= 100f && score.score <= 199f) {
            speed = 7f;
        } else if (score.score >= 200f && score.score <= 299f) {
            speed = 8f;
        } else if (score.score >= 300f && score.score <= 399f) {
            speed = 9f;
        } else {
            speed = 10f;
        }

        Vector2 direction = (Vector2) target.position - rBody.position;
        direction.Normalize();
        float RotateAmount = Vector3.Cross(direction, transform.up).z;
        rBody.angularVelocity = -rotationControl * RotateAmount;
        rBody.velocity = transform.up * speed;
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if (other.gameObject.name == "Ball") {
            GameObject explosion = GameObject.Instantiate(GameObject.Find("MissileExplode"), transform.transform.position, Quaternion.identity);
            explosion.name = "Explosion";
            var main = explosion.GetComponent<ParticleSystem>().main; 
            main.stopAction = ParticleSystemStopAction.Destroy;
            Destroy(gameObject);
        }
    }
}
