using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombExplosion : MonoBehaviour
{
    [SerializeField]
    private GameObject explosion;
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
            explodeDur = 5f;
            Instantiate(explosion, transform.position, Quaternion.identity).SetActive(true);
            Destroy(gameObject);
        }
    }
}
