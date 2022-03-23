using UnityEngine;
using System.Collections;

public class Ninjy
{
    private bool isInit = false;

    private Enemy enemy;
    private GameObject ninjyClone;
    private GameObject shuriken;
    private Score score;
    private Powerups powerups;
    private GameObject toolbar;
    private GameObject btmBorder;
    private SpriteRenderer sprite;
    private Animator animator;

    public Ninjy(
        Enemy enemy,
        GameObject ninjyClone,
        GameObject shuriken,
        Score score,
        Powerups powerups,
        GameObject toolbar,
        GameObject btmBorder
    ) {
        this.enemy = enemy;
        this.ninjyClone = ninjyClone;
        this.shuriken = shuriken;
        this.score = score;
        this.powerups = powerups;
        this.toolbar = toolbar;
        this.btmBorder = btmBorder;
        this.sprite = enemy.GetComponent<SpriteRenderer>();
        this.animator = enemy.GetComponent<Animator>();
    }

    public void SpawnClone() {
        if (!isInit) {
            enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
            switch (enemy.colliderName) {
                case "Top":
                    sprite.flipY = true;
                    Utils.ActivateAnimation(Utils.isIdle1, animator);
                    break;
                case "Bottom":
                    sprite.flipY = false;
                    Utils.ActivateAnimation(Utils.isIdle1, animator);
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

            enemy.StartCoroutine(CastCloneTechnique());
            isInit = true;
        }
    }

    private IEnumerator CastCloneTechnique() {
        yield return new WaitForSeconds(1f);
        GameObject explosion = GameObject.Find("Explosion");
        GameObject explode = GameObject.Instantiate(explosion, enemy.transform.position, Quaternion.identity);
        var main = explode.GetComponent<ParticleSystem>().main; 
        main.stopAction = ParticleSystemStopAction.Destroy;
        enemy.StartCoroutine(ActivateClone());
    }

    private IEnumerator ActivateClone() {
        yield return new WaitForSeconds(0.5f);
        for (int i = 0; i < 3; i++) {
            GameObject clone = GameObject.Instantiate(ninjyClone, enemy.transform.position, Quaternion.identity);
            clone.name = "NinjyClone";
            clone.tag = "EnemyObject";
            clone.SetActive(true);
            enemy.StartCoroutine(DestroyClone(clone));
        }
        isInit = false;
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }

    private IEnumerator DestroyClone(GameObject clone) {
        yield return new WaitForSeconds(3f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver && clone != null) {
            GameObject explosion = GameObject.Find("Explosion");
            GameObject explode = GameObject.Instantiate(explosion, clone.transform.position, Quaternion.identity);
            var main = explode.GetComponent<ParticleSystem>().main; 
            main.stopAction = ParticleSystemStopAction.Destroy;
            GameObject.Destroy(clone);
        }
    }

    public void SpawnShurikens() {
        if (!isInit) {
            enemy.transform.eulerAngles = new Vector3(0f, 0f, 0f);
            switch (enemy.colliderName) {
                case "Top":
                    sprite.flipY = true;
                    Utils.ActivateAnimation(Utils.isIdle1, animator);
                    break;
                case "Bottom":
                    sprite.flipY = false;
                    Utils.ActivateAnimation(Utils.isIdle1, animator);
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

            enemy.StartCoroutine(CastShurikenTechnique());
            isInit = true;
        }
    }

    private IEnumerator CastShurikenTechnique() {
        yield return new WaitForSeconds(1f);
        for (int i = 0; i < 9; i++) {
            int choose = Random.Range(0, 4);
            Vector2 position = new Vector2(0f, 0f);
            float y;
            float x;
            switch (choose) {
                case 0:
                    y = (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2);
                    x = Random.Range(-(enemy.worldWidth / 2) + (enemy.enemyWidth / 2), (enemy.worldWidth / 2) - (enemy.enemyWidth / 2));
                    position = new Vector2(x, y);
                    break;
                case 1:
                    y = (-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2);
                    x = Random.Range(-(enemy.worldWidth / 2) + (enemy.enemyWidth / 2), (enemy.worldWidth / 2) - (enemy.enemyWidth / 2));
                    position = new Vector2(x, y);
                    break;
                case 2:
                    x = -(enemy.worldWidth / 2) + (enemy.enemyWidth / 2);
                    y = Random.Range((-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2), (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2));
                    position = new Vector2(x, y);
                    break;
                case 3:
                    x = (enemy.worldWidth / 2) - (enemy.enemyWidth / 2);
                    y = Random.Range((-(enemy.worldHeight / 2) + btmBorder.transform.lossyScale.y) + (enemy.enemyHeight / 2), (enemy.worldHeight / 2) - toolbar.transform.lossyScale.y - (enemy.enemyHeight / 2));
                    position = new Vector2(x, y);
                    break;
                default:
                    break;
            }
            GameObject explosion = GameObject.Find("Explosion");
            GameObject explode = GameObject.Instantiate(explosion, new Vector3(position.x, position.y, -1f), Quaternion.identity);
            explode.transform.localScale = new Vector2(0.3f, 0.3f);
            var main = explode.GetComponent<ParticleSystem>().main; 
            main.stopAction = ParticleSystemStopAction.Destroy;
            GameObject shur = GameObject.Instantiate(shuriken, position, Quaternion.identity);
            shur.SetActive(true);
            enemy.StartCoroutine(DestroyShuriken(shur));
        }
    }

    private IEnumerator DestroyShuriken(GameObject shur) {
        yield return new WaitForSeconds(5f);
        GameObject.Destroy(shur);
        isInit = false;
        enemy.abilityDur = Random.Range(3f, 10f);
        enemy.GetComponent<Jump>().enabled = true;
        enemy.GetComponent<Abilities>().enabled = false;
    }

    public void FireTrigger() {
        // isTransform = false;
        enemy.GetComponent<BoxCollider2D>().enabled = true;
        enemy.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
        enemy.StartCoroutine(Move());
        // enemy.abilityDur = Random.Range(3f, 10f);
        // enemy.GetComponent<Jump>().enabled = true;
        // enemy.GetComponent<Abilities>().enabled = false;
    }

     private IEnumerator Move() {
        yield return new WaitForSeconds(2f);
        Game game = Camera.main.GetComponent<Game>();
        if (!game.isOver) {
            isInit = false;
            enemy.abilityDur = Random.Range(3f, 10f);
            enemy.GetComponent<Jump>().enabled = true;
            enemy.GetComponent<Abilities>().enabled = false;
            enemy.transform.GetChild(0).gameObject.SetActive(false);
        }
    }
}
