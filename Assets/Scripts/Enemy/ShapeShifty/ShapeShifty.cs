using UnityEngine;
using System.Collections;

public class ShapeShifty
{
    private bool isTransform = false;
    private Enemy enemy;
    private GameObject shapeShiftyBomb;
    private Score score;
    private Powerups powerups;
    private GameObject toolbar;
    private GameObject btmBorder;
    private GameObject shapeShityMissile;

    public ShapeShifty(
        Enemy enemy,
        GameObject shapeShiftyBomb,
        GameObject shapeShityMissile,
        Score score,
        Powerups powerups,
        GameObject toolbar,
        GameObject btmBorder
    ) {
        this.enemy = enemy;
        this.shapeShityMissile = shapeShityMissile;
        this.shapeShiftyBomb = shapeShiftyBomb;
        this.score = score;
        this.powerups = powerups;
        this.toolbar = toolbar;
        this.btmBorder = btmBorder;
    }

    public void ShapeShiftyBomb() {
        if (!isTransform) {
            GameObject transformEffect;
            GameObject bomb = GameObject.Instantiate(shapeShiftyBomb, enemy.transform.position, Quaternion.identity);
            foreach (Transform eachChild in bomb.transform) {
                if (eachChild.name == "TransformEffect") {
                    transformEffect = eachChild.gameObject;
                    transformEffect.SetActive(true);
                    bomb.SetActive(true);
                    enemy.StartCoroutine(Explode(bomb));
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

    private IEnumerator Explode(GameObject bomb) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver && bomb != null) {
            bomb.transform.GetChild(0).gameObject.SetActive(true);
            GameObject bullets;
            foreach (Transform eachChild in bomb.transform) {
                if (eachChild.name == "Bullets") {
                    bullets = eachChild.gameObject;
                    bullets.SetActive(true);
                    enemy.StartCoroutine(Destroy(bomb));
                }
            }
        }
    }

    private IEnumerator Destroy(GameObject bomb) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver && bomb != null) {
            enemy.StartCoroutine(Idle(bomb));
        }
    }

    private IEnumerator Idle(GameObject bomb) {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver && bomb != null) {
            GameObject.Destroy(bomb);
            enemy.transform.GetChild(0).gameObject.SetActive(true);
            enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
            enemy.GetComponent<BoxCollider2D>().enabled = true;
            enemy.StartCoroutine(Move());
        }
    }

    private IEnumerator Move() {
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

    public void ShapeShiftyMissile() {
        if (!isTransform) {
            GameObject transformEffect;
            GameObject missile = GameObject.Instantiate(shapeShityMissile, enemy.transform.position, Quaternion.identity);
            SpriteRenderer sprite = enemy.GetComponent<SpriteRenderer>();
            Animator animator = enemy.GetComponent<Animator>();

            Debug.Log("World Height"+ enemy.worldHeight);
            Debug.Log("World Width"+ enemy.worldWidth);
            Debug.Log("Enemy Height"+ enemy.enemyHeight);
            Debug.Log("Enemy Width"+ enemy.enemyWidth);

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
                    enemy.transform.position = new Vector2(Random.Range(-(enemy.worldWidth / 2) + (enemy.enemyWidth / 2), (enemy.worldWidth / 2) - (enemy.enemyWidth / 2)), (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2));
                    sprite.flipY = true;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                // Bottom
                case 1:
                    enemy.transform.position = new Vector2(Random.Range(-(enemy.worldWidth / 2) + (enemy.enemyWidth / 2), (enemy.worldWidth / 2) - (enemy.enemyWidth / 2)), (-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2));
                    sprite.flipY = false;
                    Utils.ActivateAnimation(Utils.isIdle2, animator);
                    break;
                // Left
                case 2:
                    enemy.transform.position = new Vector2(-(enemy.worldWidth / 2) + (enemy.enemyWidth / 2), Random.Range((-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2), (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2)));
                    sprite.flipY = false;
                    sprite.flipX = false;
                    Utils.ActivateAnimation(Utils.isIdleSlide, animator);
                    break;
                // Right
                case 3:
                    enemy.transform.position = new Vector2((enemy.worldWidth / 2) - (enemy.enemyWidth / 2), Random.Range((-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2), (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2)));
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
                    enemy.StartCoroutine(LaunchMissile(missile));
                }
            }
            isTransform = true;
        }
    }

    private IEnumerator LaunchMissile(GameObject missile) {
        yield return new WaitForSeconds(2f);
        missile.GetComponent<ShapeShiftyMissile>().enabled = true;
        enemy.StartCoroutine(ExplodeMissile(missile));
        
    }

    private IEnumerator ExplodeMissile(GameObject missile) {
        yield return new WaitForSeconds(5f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver && missile != null) {
            GameObject explosion = GameObject.Instantiate(GameObject.Find("MissileExplode"), missile.transform.position, Quaternion.identity);
            explosion.tag = "EnemyObject";
            var main = explosion.GetComponent<ParticleSystem>().main; 
            main.stopAction = ParticleSystemStopAction.Destroy;
            GameObject.Destroy(missile);
            enemy.StartCoroutine(Appear());
        }
    }

    private IEnumerator Appear() {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            enemy.transform.GetChild(0).gameObject.SetActive(true);
            enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
            enemy.GetComponent<BoxCollider2D>().enabled = true;
            enemy.StartCoroutine(Move());
        }
    }

    public void Skip() {
        // isTransform = false;
        enemy.GetComponent<BoxCollider2D>().enabled = true;
        enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
        enemy.StartCoroutine(Move());
        // enemy.abilityDur = Random.Range(3f, 10f);
        // enemy.GetComponent<Jump>().enabled = true;
        // enemy.GetComponent<Abilities>().enabled = false;
    }
}
