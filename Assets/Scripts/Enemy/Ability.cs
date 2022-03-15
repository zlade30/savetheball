using UnityEngine;
using System.Collections;

public class Ability : MonoBehaviour
{
    private bool isInit = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("Animator");
    }

    // Speedy Ability
    public void FadeInOutCatch(Enemy enemy)
    {
        Animator animator = enemy.GetComponent<Animator>();
        SpriteRenderer sprite = enemy.GetComponent<SpriteRenderer>();
        Utils.ActivateAnimation(Utils.isIdle2, animator);

        if (!isInit) {
            StartCoroutine(FadeOut(sprite));
            isInit = true;
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
    }

    private IEnumerator FadeIn(SpriteRenderer sprite)
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a < 1)
        {
            alphaVal += 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;

            yield return new WaitForSeconds(0.01f); // update interval
        }
    }
    
}
