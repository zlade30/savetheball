using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kunai : MonoBehaviour
{
    [SerializeField]
    private Enemy enemy;
    [SerializeField]
    private Score score;
    [SerializeField]
    private GameObject ball;
    [SerializeField]
    private float moveSpeed = 15f;
    
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
        moveDur -= Time.deltaTime;

        if (score.score >= 0 && score.score <= 99f) {
            moveSpeed = 12f;
        } else if (score.score >= 100f && score.score <= 199f) {
            moveSpeed = 13f;
        } else if (score.score >= 200f && score.score <= 299f) {
            moveSpeed = 14f;
        } else if (score.score >= 300f && score.score <= 399f) {
            moveSpeed = 15f;
        } else if (score.score >= 400f && score.score <= 499f) {
            moveSpeed = 16f;
        } else {
            moveSpeed = 17f;
        }

        if (moveDur <= 0f) {
            transform.position = Vector2.MoveTowards(
                transform.position,
                new Vector2(targetPos.x * 7f, targetPos.y * 7f),
                moveSpeed * Time.deltaTime
            );
            targetPos.Normalize();
            GetComponent<BoxCollider2D>().enabled = true;
        } else {
            targetPos = ball.transform.position - transform.position;
            GetComponent<BoxCollider2D>().enabled = false;
            Vector2 dir = ball.transform.position - transform.position;

            var offset = 90f;
            dir.Normalize();
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;       
            transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
        }
    }

    void OnTriggerEnter2D(Collider2D collider)
    {
        Debug.Log(collider.gameObject.name);
        GameObject explosion = GameObject.Find("KunaiExplosion");
        GameObject explode = GameObject.Instantiate(explosion, transform.position, Quaternion.identity);

        explode.name = "Explosion";
        explode.transform.localScale = new Vector2(3f, 3f);
        var main = explode.GetComponent<ParticleSystem>().main; 
        main.stopAction = ParticleSystemStopAction.Destroy;
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.boom);
        Destroy(gameObject);
    }
}
