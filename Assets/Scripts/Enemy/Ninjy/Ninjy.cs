using UnityEngine;
using System.Collections;

public class Ninjy
{
    private bool isInit = false;

    private Enemy enemy;
    private GameObject ninjyClone;
    private Score score;
    private Powerups powerups;
    private GameObject toolbar;
    private GameObject btmBorder;
    private SpriteRenderer sprite;
    private Animator animator;

    public Ninjy(
        Enemy enemy,
        GameObject ninjyClone,
        Score score,
        Powerups powerups,
        GameObject toolbar,
        GameObject btmBorder
    ) {
        this.enemy = enemy;
        this.ninjyClone = ninjyClone;
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
        GameObject explode = Object.Instantiate(explosion, enemy.transform.position, Quaternion.identity);
        var main = explode.GetComponent<ParticleSystem>().main; 
        main.stopAction = ParticleSystemStopAction.Destroy;
        enemy.StartCoroutine(ActivateClone());
    }

    private IEnumerator ActivateClone() {
        yield return new WaitForSeconds(0.5f);
        
        for (int i = 0; i < 3; i++) {
            GameObject clone = Object.Instantiate(ninjyClone, enemy.transform.position, Quaternion.identity);
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
}
