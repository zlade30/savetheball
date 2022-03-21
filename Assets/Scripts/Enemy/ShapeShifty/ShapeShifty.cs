using UnityEngine;
using System.Collections;

public class ShapeShifty
{
    private bool isTransform = false;

    public void ShapeShiftyBomb(Enemy enemy, GameObject shapeShiftyBomb, Score score) {
        if (!isTransform) {
            GameObject transformEffect;
            GameObject bomb = GameObject.Instantiate(shapeShiftyBomb, enemy.transform.position, Quaternion.identity);
            foreach (Transform eachChild in bomb.transform) {
                if (eachChild.name == "TransformEffect") {
                    transformEffect = eachChild.gameObject;
                    transformEffect.SetActive(true);
                    bomb.SetActive(true);
                    enemy.StartCoroutine(Explode(enemy, bomb));
                    enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 0);
                }
            }
            isTransform = true;
        }
    }

    private IEnumerator Explode(Enemy enemy, GameObject bomb) {
        yield return new WaitForSeconds(3f);
        bomb.transform.GetChild(0).gameObject.SetActive(true);
        GameObject bullets = bomb.transform.GetChild(2).gameObject;
        bullets.SetActive(true);
        enemy.StartCoroutine(Destroy(enemy, bomb));
    }

    private IEnumerator Destroy(Enemy enemy, GameObject bomb) {
        yield return new WaitForSeconds(1.5f);
        GameObject.Destroy(bomb);
        enemy.transform.GetChild(0).gameObject.SetActive(true);
        if (enemy.currentSide == "Top" || enemy.currentSide == "Bottom") {
            Utils.ActivateAnimation(Utils.isIdle1, enemy.GetComponent<Animator>());
        } else {
            Utils.ActivateAnimation(Utils.isIdleSlide, enemy.GetComponent<Animator>());
        }
        enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
        enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
        enemy.StartCoroutine(Move(enemy));
    }

    private IEnumerator Move(Enemy enemy) {
        yield return new WaitForSeconds(2f);
        isTransform = false;
        enemy.transform.GetChild(0).gameObject.SetActive(false);
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }
}
