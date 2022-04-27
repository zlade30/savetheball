using UnityEngine;

public class BombyAbility
{
    private bool isInit = false;
    private bool isFade = false;

    public void SpawnStickyBomb(Enemy enemy, GameObject stickyBomb, Score score) {
        if (!isInit) {
            Object.Instantiate(stickyBomb, enemy.transform.position, Quaternion.identity).SetActive(true);
            isInit = false;
            if (score.score >= 0 && score.score <= 99f) {
                enemy.abilityDur = Random.Range(3f, 8f);
            } else if (score.score >= 100f && score.score <= 199f) {
                enemy.abilityDur = Random.Range(3f, 7f);
            } else if (score.score >= 200f && score.score <= 299f) {
                enemy.abilityDur = Random.Range(3f, 6f);
            } else if (score.score >= 300f && score.score <= 399f) {
                enemy.abilityDur = Random.Range(3f, 5f);
            } else if (score.score >= 400f && score.score <= 499f) {
                enemy.abilityDur = Random.Range(3f, 4f);
            } else {
                enemy.abilityDur = Random.Range(2f, 3f);
            }

            enemy.GetComponent<Abilities>().enabled = false;
            enemy.GetComponent<Movement>().enabled = true;
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.destroy);
        }
    }

    public void SpawnWalkingBomb(Enemy enemy, GameObject walkingBomb, Score score) {
        if (!isInit) {
            Object.Instantiate(walkingBomb, enemy.transform.position, Quaternion.identity).SetActive(true);
            isInit = false;
            if (score.score >= 0 && score.score <= 99f) {
                enemy.abilityDur = Random.Range(3f, 8f);
            } else if (score.score >= 100f && score.score <= 199f) {
                enemy.abilityDur = Random.Range(3f, 7f);
            } else if (score.score >= 200f && score.score <= 299f) {
                enemy.abilityDur = Random.Range(3f, 6f);
            } else if (score.score >= 300f && score.score <= 399f) {
                enemy.abilityDur = Random.Range(3f, 5f);
            } else if (score.score >= 400f && score.score <= 499f) {
                enemy.abilityDur = Random.Range(3f, 4f);
            } else {
                enemy.abilityDur = Random.Range(2f, 3f);
            }

            enemy.GetComponent<Abilities>().enabled = false;
            enemy.GetComponent<Movement>().enabled = true;
            
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.destroy);
        }
    }
}
