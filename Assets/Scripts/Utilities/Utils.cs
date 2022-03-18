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
    public static string[] powerups = { fire, ice, shield, teleport, life, star };

    // Products

    public const string removeAdsId = "com.zalstudio.savedball.remove.ads";
    public const string lifeId = "com.zalstudio.savedball.life";
    public const string starId = "com.zalstudio.savedball.star";
    public const string fireId = "com.zalstudio.savedball.fire";
    public const string iceId = "com.zalstudio.savedball.ice";
    public const string shieldId = "com.zalstudio.savedball.shield";
    public const string teleportId = "com.zalstudio.savedball.teleport";
    public const string basketBallSkinId = "com.zalstudio.savedball.skin.basketball";
    public const string soccerBallSkinId = "com.zalstudio.savedball.skin.soccerball";
    public const string tennisBallSkinId = "com.zalstudio.savedball.skin.tennisball";
    public const string billiardBallSkinId = "com.zalstudio.savedball.skin.billiardball";
    public static string[] products = { removeAdsId, lifeId, starId, fireId, iceId, shieldId, teleportId, basketBallSkinId, soccerBallSkinId, tennisBallSkinId, billiardBallSkinId };

    public const string defaultSkin = "ballSkin";
    public const string basketBallSkin = "basketBallSkin";
    public const string soccerBallSkin = "soccerBallSkin";
    public const string tennisBallSkin = "tennisBallSkin";
    public const string billiardBallSkin = "billiardBallSkin";
    public const string currentSkin = "currentSkin";

    public const int mainMenu = 0;
    public const int shop = 1;
    public const int inventory = 2;
    public const int speedyWorld = 3;
}
