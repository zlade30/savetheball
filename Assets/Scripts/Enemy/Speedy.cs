using System.Collections;
using UnityEngine;

public class SpeedyAbility
{
    private bool isInit = false;
    private bool isFade = false;

    public void FadeInOutCatch(Enemy enemy, GameObject toolbar, GameObject btmBorder, Score score)
    {
        Animator animator = enemy.GetComponent<Animator>();
        SpriteRenderer sprite = enemy.GetComponent<SpriteRenderer>();
        float worldHeight = Camera.main.orthographicSize * 2;
		float worldWidth = worldHeight * Screen.width / Screen.height;
        float enemyWidth = enemy.GetComponent<SpriteRenderer>().bounds.size.x;
		float enemyHeight = enemy.GetComponent<SpriteRenderer>().bounds.size.y;

        if (!isInit) {
            switch (enemy.colliderName) {
                case "Top":
                    sprite.flipY = true;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                case "Bottom":
                    sprite.flipY = false;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                case "Left":
                    sprite.flipY = false;
                    sprite.flipX = false;
                    Utils.ActivateAnimation(Utils.isIdleSlide, animator);
                    break;
                case "Right":
                    sprite.flipY = false;
                    sprite.flipX = true;
                    Utils.ActivateAnimation(Utils.isIdleSlide, animator);
                    break;
                default:
                    break;
            }

            enemy.StartCoroutine(FadeOut(sprite));
            isInit = true;
        }

        enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
        if (isFade) {
            int choose = Random.Range(0, 4);
            switch (choose) {
                // Top
                case 0:
                    enemy.transform.position = new Vector2(Random.Range(-(worldWidth / 2) + (enemyWidth / 2), (worldWidth / 2) - (enemyWidth / 2)), (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2));
                    sprite.flipY = true;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                // Bottom
                case 1:
                    enemy.transform.position = new Vector2(Random.Range(-(worldWidth / 2) + (enemyWidth / 2), (worldWidth / 2) - (enemyWidth / 2)), (-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2));
                    sprite.flipY = false;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                // Left
                case 2:
                    enemy.transform.position = new Vector2(-(worldWidth / 2) + (enemyWidth / 2), Random.Range((-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2), (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2)));
                    sprite.flipY = false;
                    sprite.flipX = false;
                    Utils.ActivateAnimation(Utils.isIdleSlide, animator);
                    break;
                // Right
                case 3:
                    enemy.transform.position = new Vector2((worldWidth / 2) - (enemyWidth / 2), Random.Range((-(worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemyHeight / 2), (worldHeight / 2) - toolbar.transform.lossyScale.y - (enemyHeight / 2)));
                    sprite.flipY = false;
                    sprite.flipX = true;
                    Utils.ActivateAnimation(Utils.isIdleSlide, animator);
                    break;
                default:
                    break;
            }
            enemy.StartCoroutine(FadeIn(sprite, enemy, score));
            isFade = false;
        }
    }

    private IEnumerator FadeOut(SpriteRenderer sprite)
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
        isFade = true;
    }

    private IEnumerator FadeIn(SpriteRenderer sprite, Enemy enemy, Score score)
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;
        Game game = Camera.main.GetComponent<Game>();

        while (sprite.color.a < 1)
        {
            alphaVal += 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
        isFade = false;
        isInit = false;
        if (score.score >= 0f && score.score <= 99) enemy.abilityDur = Random.Range(0f, 20f);
        else if (score.score >= 100 && score.score <= 199) enemy.abilityDur = Random.Range(0f, 18f);
        else if (score.score >= 200 && score.score <= 299) enemy.abilityDur = Random.Range(0f, 16f);
        else if (score.score >= 300 && score.score <= 399) enemy.abilityDur = Random.Range(0f, 14f);
        else if (score.score >= 400 && score.score <= 499) enemy.abilityDur = Random.Range(0f, 12f);
        else if (score.score >= 500 && score.score <= 599) enemy.abilityDur = Random.Range(0f, 10f);
        else if (score.score >= 600 && score.score <= 699) enemy.abilityDur = Random.Range(0f, 8f);
        else enemy.abilityDur = Random.Range(0f, 6f);
        if (!game.isOver)
            enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }
}
