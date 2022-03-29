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
                enemy.abilityDur = Random.Range(1f, 7f);
            } else if (score.score >= 100f && score.score <= 199f) {
                enemy.abilityDur = Random.Range(1f, 6f);
            } else if (score.score >= 200f && score.score <= 299f) {
                enemy.abilityDur = Random.Range(1f, 5f);
            } else if (score.score >= 300f && score.score <= 399f) {
                enemy.abilityDur = Random.Range(1f, 4f);
            } else if (score.score >= 400f && score.score <= 499f) {
                enemy.abilityDur = Random.Range(1f, 3f);
            } else {
                enemy.abilityDur = Random.Range(0f, 2f);
            }

            enemy.GetComponent<Abilities>().enabled = false;
            enemy.GetComponent<Jump>().enabled = true;
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.destroy);
        }
    }

    public void SpawnWalkingBomb(Enemy enemy, GameObject walkingBomb, Score score) {
        if (!isInit) {
            Object.Instantiate(walkingBomb, enemy.transform.position, Quaternion.identity).SetActive(true);
            isInit = false;
            if (score.score >= 0 && score.score <= 99f) {
                enemy.abilityDur = Random.Range(1f, 7f);
            } else if (score.score >= 100f && score.score <= 199f) {
                enemy.abilityDur = Random.Range(1f, 6f);
            } else if (score.score >= 200f && score.score <= 299f) {
                enemy.abilityDur = Random.Range(1f, 5f);
            } else if (score.score >= 300f && score.score <= 399f) {
                enemy.abilityDur = Random.Range(1f, 4f);
            } else if (score.score >= 400f && score.score <= 499f) {
                enemy.abilityDur = Random.Range(1f, 3f);
            } else {
                enemy.abilityDur = Random.Range(0f, 2f);
            }

            enemy.GetComponent<Abilities>().enabled = false;
            enemy.GetComponent<Jump>().enabled = true;
            
            SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.destroy);
        }
    }
}
