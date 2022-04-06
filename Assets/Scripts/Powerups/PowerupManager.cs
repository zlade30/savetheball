using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupManager : MonoBehaviour
{
    [SerializeField]
    GameObject[] powerups;
    [SerializeField]
    Enemy enemy;
    [SerializeField]
    GameObject toolbar;
    [SerializeField]
    GameObject btmBorder;

    private Game game;

    private float coinDurMax = 20f;
    private float powerDurMax = 100f;
    private float coinDur;
    private float powerupDur;
    private float worldHeight;
    private float worldWidth;
    private float enemyWidth;
    private float enemyHeight;
    // Start is called before the first frame update
    void Start()
    {
        coinDur = Random.Range(0f, coinDurMax);
        powerupDur = Random.Range(0f, powerDurMax);
        worldHeight = Camera.main.orthographicSize * 2;
        worldWidth = worldHeight * Screen.width / Screen.height;
        enemyWidth = enemy.GetComponent<SpriteRenderer>().bounds.size.x;
        enemyHeight = enemy.GetComponent<SpriteRenderer>().bounds.size.y;
        game = GetComponent<Game>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!game.isOver && !game.isPause) {
            HandleCoin();
            HandlePowerups();
        }
    }

    private void HandleCoin() {
        coinDur -= Time.deltaTime;
        if (coinDur <= 0f) {
            coinDur = Random.Range(0f, coinDurMax);
            Vector3 position = new Vector3(Random.Range(-(worldWidth / 2) + (enemyWidth / 2), (worldWidth / 2) - (enemyWidth / 2)), Random.Range((-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2), (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2)), -5f);
            GameObject.Instantiate(powerups[0], position, Quaternion.identity);
        }
    }

    private void HandlePowerups() {
        powerupDur -= Time.deltaTime;
        if (powerupDur <= 0f) {
            powerupDur = Random.Range(0f, powerDurMax);
            Vector3 position = new Vector3(Random.Range(-(worldWidth / 2) + (enemyWidth / 2), (worldWidth / 2) - (enemyWidth / 2)), Random.Range((-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2), (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2)), -5f);
            int choose = Random.Range(1, 6);
            GameObject.Instantiate(powerups[choose], position, Quaternion.identity);
        }
    }
}
