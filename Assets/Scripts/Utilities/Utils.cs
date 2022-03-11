using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utils {
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
}
