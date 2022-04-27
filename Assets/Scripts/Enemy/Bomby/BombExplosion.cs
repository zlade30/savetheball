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
    private float explodeDur;
    // Start is called before the first frame update
    void Start()
    {
        explodeDur = Random.Range(1f, 3f);
    }

    // Update is called once per frame
    void Update()
    {
        explodeDur -= Time.deltaTime;
        if (explodeDur <= 0f) {
            explodeDur = Random.Range(1f, 3f);
            GameObject exp = Instantiate(explosion, transform.position, Quaternion.identity);
            exp.SetActive(true);
            exp.name = "Explosion";
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.boom);
            Destroy(gameObject);
        }
    }
}
