using UnityEngine;
using System.Collections;

public class ShapeShifty
{
    private bool isTransform = false;

    public void ShapeShiftyBomb(Enemy enemy, GameObject shapeShiftyBomb, Score score) {
        if (!isTransform) {
            enemy.StartCoroutine(Transform(enemy, shapeShiftyBomb));
            isTransform = true;
        }
    }

    private IEnumerator Transform(Enemy enemy, GameObject shapeShiftyBomb) {
        GameObject transformEffect;
        GameObject bomb = GameObject.Instantiate(shapeShiftyBomb, enemy.transform.position, Quaternion.identity);
        enemy.gameObject.SetActive(false);
        bomb.SetActive(true);
        foreach (Transform eachChild in bomb.transform) {
            if (eachChild.name == "TransformEffect") {
                transformEffect = eachChild.gameObject;
                transformEffect.SetActive(true);
                bomb.SetActive(true);
            }
        }
        yield return new WaitForSeconds(1f);
        GameObject.Destroy(bomb);
        enemy.gameObject.SetActive(true);
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
        isTransform = false;
    }
}
