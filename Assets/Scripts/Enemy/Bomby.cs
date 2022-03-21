using UnityEngine;

public class BombyAbility
{
    private bool isInit = false;
    private bool isFade = false;

    public void SpawnStickyBomb(Enemy enemy, GameObject stickyBomb, Score score) {
        if (!isInit) {
            Object.Instantiate(stickyBomb, enemy.transform.position, Quaternion.identity).SetActive(true);
            isInit = false;
            enemy.abilityDur = Random.Range(3f, 10f);
            enemy.GetComponent<Jump>().enabled = true;
            enemy.GetComponent<Abilities>().enabled = false;
        }
    }

    public void SpawnWalkingBomb(Enemy enemy, GameObject walkingBomb, Score score) {
        if (!isInit) {
            Object.Instantiate(walkingBomb, enemy.transform.position, Quaternion.identity).SetActive(true);
            isInit = false;
            enemy.abilityDur = Random.Range(3f, 10f);
            enemy.GetComponent<Jump>().enabled = true;
            enemy.GetComponent<Abilities>().enabled = false;
        }
    }
}
