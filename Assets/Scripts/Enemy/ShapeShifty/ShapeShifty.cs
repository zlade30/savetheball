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
                    enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
                    if (enemy.currentSide == "Top" || enemy.currentSide == "Bottom") {
                        Utils.ActivateAnimation(Utils.isIdle1, enemy.GetComponent<Animator>());
                        if (enemy.currentSide == "Top") enemy.GetComponent<SpriteRenderer>().flipY = true;
                        else enemy.GetComponent<SpriteRenderer>().flipY = false;
                    } else {
                        Utils.ActivateAnimation(Utils.isIdleSlide, enemy.GetComponent<Animator>());
                        enemy.GetComponent<SpriteRenderer>().flipY = false;
                        if (enemy.currentSide == "Right") enemy.GetComponent<SpriteRenderer>().flipX = true;
                        else enemy.GetComponent<SpriteRenderer>().flipX = false;
                    }
                }
            }
            isTransform = true;
        }
    }

    private IEnumerator Explode(Enemy enemy, GameObject bomb) {
        yield return new WaitForSeconds(3f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            bomb.transform.GetChild(0).gameObject.SetActive(true);
            GameObject bullets;
            foreach (Transform eachChild in bomb.transform) {
                if (eachChild.name == "Bullets") {
                    bullets = eachChild.gameObject;
                    bullets.SetActive(true);
                    enemy.StartCoroutine(Destroy(enemy, bomb));
                }
            }
        }
    }

    private IEnumerator Destroy(Enemy enemy, GameObject bomb) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            enemy.StartCoroutine(Idle(enemy, bomb));
        }
    }

    private IEnumerator Idle(Enemy enemy, GameObject bomb) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            GameObject.Destroy(bomb);
            enemy.transform.GetChild(0).gameObject.SetActive(true);
            enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
            enemy.GetComponent<BoxCollider2D>().enabled = true;
            enemy.StartCoroutine(Move(enemy));
        }
    }

    private IEnumerator Move(Enemy enemy) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            isTransform = false;
            enemy.abilityDur = Random.Range(3f, 10f);
            enemy.GetComponent<Jump>().enabled = true;
            enemy.GetComponent<Abilities>().enabled = false;
            enemy.transform.GetChild(0).gameObject.SetActive(false);
        }
    }

    public void ShapeShiftyMissile(Enemy enemy, GameObject shapeShityMissile, GameObject toolbar, GameObject btmBorder, Score score) {
        if (!isTransform) {
            GameObject transformEffect;
            GameObject missile = GameObject.Instantiate(shapeShityMissile, enemy.transform.position, Quaternion.identity);
            SpriteRenderer sprite = enemy.GetComponent<SpriteRenderer>();
            Animator animator = enemy.GetComponent<Animator>();
            float worldHeight = Camera.main.orthographicSize * 2;
            float worldWidth = worldHeight * Screen.width / Screen.height;
            float enemyWidth = enemy.GetComponent<BoxCollider2D>().bounds.size.x;
            float enemyHeight = enemy.GetComponent<BoxCollider2D>().bounds.size.y;

            enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 0);
            enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
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

            foreach (Transform eachChild in missile.transform) {
                if (eachChild.name == "TransformEffect") {
                    transformEffect = eachChild.gameObject;
                    transformEffect.SetActive(true);
                    missile.SetActive(true);
                    missile.GetComponent<ShapeShiftyMissile>().enabled = false;
                    enemy.GetComponent<BoxCollider2D>().enabled = false;
                    enemy.StartCoroutine(LaunchMissile(enemy, missile));
                }
            }
            isTransform = true;
        }
    }

    private IEnumerator LaunchMissile(Enemy enemy, GameObject missile) {
        yield return new WaitForSeconds(2f);
        missile.GetComponent<ShapeShiftyMissile>().enabled = true;
        enemy.StartCoroutine(ExplodeMissile(enemy, missile));
        // Game game = Camera.main.GetComponent<Game>();
        // if (!game.isOver) {
        //     isTransform = false;
        //     enemy.transform.GetChild(0).gameObject.SetActive(false);
        //     enemy.abilityDur = Random.Range(3f, 10f);
        //     enemy.GetComponent<Jump>().enabled = true;
        //     enemy.GetComponent<Abilities>().enabled = false;
        // }
    }

    private IEnumerator ExplodeMissile(Enemy enemy, GameObject missile) {
        yield return new WaitForSeconds(5f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            GameObject explosion = GameObject.Instantiate(GameObject.Find("MissileExplode"), missile.transform.position, Quaternion.identity);
            explosion.tag = "EnemyObject";
            var main = explosion.GetComponent<ParticleSystem>().main; 
            main.stopAction = ParticleSystemStopAction.Destroy;
            GameObject.Destroy(missile);
            enemy.StartCoroutine(Idle(enemy, null));
        }
    }

    public void Skip(Enemy enemy) {
        isTransform = false;
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }
}
