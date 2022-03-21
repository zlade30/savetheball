using UnityEngine;
using System.Collections;

public class ShapeShifty
{
    private bool isTransform = false;

    public void Stretchy(Enemy enemy, GameObject stretchy, GameObject toolbar, GameObject btmBorder, Score score) {
        isTransform = false;
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }

    // private IEnumerator Transform(Enemy enemy) {
    //     GameObject transformEffect;
    //     Animator animator = enemy.GetComponent<Animator>();
    //     Utils.ActivateAnimation(Utils.isIdle1, animator);
    //     foreach (Transform eachChild in enemy.transform) {
    //         if (eachChild.name == "TransformEffect") {
    //             transformEffect = eachChild.gameObject;
    //             transformEffect.SetActive(true);
    //         }
    //     }
    //     yield return new WaitForSeconds(1f);
    //     isTransform = true;
    // }
}
