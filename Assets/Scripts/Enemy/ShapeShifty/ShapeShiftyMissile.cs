using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeShiftyMissile : MonoBehaviour
{
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
