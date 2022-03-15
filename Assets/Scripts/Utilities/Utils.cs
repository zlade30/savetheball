using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Utils {

    // Animation states

    public static string isIdle1 = "isIdle1";
    public static string isIdle2 = "isIdle2";
    public static string isRunning = "isRunning";
    public static string isJumping = "isJumping";
    public static string isSliding = "isSliding";
    public static string isSideRunning = "isSideRunning";
    public static string isIdleSlide = "isIdleSlide";
    public static string isCatch1 = "isCatch1";
    public static string isCatch2 = "isCatch2";
    public static string[] animations = { isIdle1, isIdle2, isRunning, isJumping, isSliding, isSideRunning, isIdleSlide, isCatch1, isCatch2 };

    public static void ActivateAnimation(string anim, Animator animator)
    {
        for (int i = 0; i < Utils.animations.Length; i++) {
            if (anim == Utils.animations[i])
                animator.SetBool(anim, true);
            else
                animator.SetBool(Utils.animations[i], false);
        }
    }

    // Powerups

    public static string fire = "Fire";
    public static string ice = "Ice";
    public static string shield = "Shield";
    public static string teleport = "Teleport";
    public static string life = "Life";
    public static string star = "Star";

    public static IEnumerator FadeOutSprite(SpriteRenderer sprite)
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;
            yield return new WaitForSeconds(0.05f); // update interval
        }
    }
 
    public static IEnumerator FadeInSprite(SpriteRenderer sprite)
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

    public static IEnumerator FadeOutImage(Image sprite)
    {
        float alphaVal = sprite.color.a;
        Color tmp = sprite.color;

        while (sprite.color.a > 0)
        {
            alphaVal -= 0.01f;
            tmp.a = alphaVal;
            sprite.color = tmp;
            yield return new WaitForSeconds(0.05f); // update interval
        }
    }
 
    public static IEnumerator FadeInImage(Image sprite)
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
