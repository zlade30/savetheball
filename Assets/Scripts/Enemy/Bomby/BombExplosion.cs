using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombExplosion : MonoBehaviour
{
    [SerializeField]
    private GameObject explosion;
    [SerializeField]
    private Game game;
    [SerializeField]
    private Enemy enemy;
    private float explodeDur = 5f;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        explodeDur -= Time.deltaTime;
        if (explodeDur <= 0f) {
            explodeDur = Random.Range(1f, 4f);
            GameObject exp = Instantiate(explosion, transform.position, Quaternion.identity);
            exp.SetActive(true);
            exp.name = "Explosion";
            Destroy(gameObject);
        }

        if (game.isOver) {
            Instantiate(explosion, transform.position, Quaternion.identity).SetActive(true);
            Destroy(gameObject);
        }
    }
}
