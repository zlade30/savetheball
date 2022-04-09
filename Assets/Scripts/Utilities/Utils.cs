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
    public static string coin = "Coin";
    public static string[] powerups = { fire, ice, shield, teleport, life, star, coin };

    // Products

    public const string removeAdsId = "com.zalstudio.savedball.removeads";
    public const string lifeId = "com.zalstudio.savedball.powerups.life";
    public const string starId = "com.zalstudio.savedball.powerups.star";
    public const string fireId = "com.zalstudio.savedball.powerups.fire";
    public const string iceId = "com.zalstudio.savedball.powerups.ice";
    public const string shieldId = "com.zalstudio.savedball.powerups.shield";
    public const string teleportId = "com.zalstudio.savedball.powerups.teleport";
    public const string basketBallSkinId = "com.zalstudio.savedball.skins.basketball";
    public const string soccerBallSkinId = "com.zalstudio.savedball.skins.soccerball";
    public const string tennisBallSkinId = "com.zalstudio.savedball.skins.tennisball";
    public const string billiardBallSkinId = "com.zalstudio.savedball.skins.billiardball";
    public const string powPack1Id = "com.zalstudio.savedball.pack.powpack1";
    public const string powPack2Id = "com.zalstudio.savedball.pack.powpack2";
    public const string powPack3Id = "com.zalstudio.savedball.pack.powpack3";
    public static string[] products = {
        removeAdsId,
        lifeId,
        starId,
        fireId,
        iceId,
        shieldId,
        teleportId,
        basketBallSkinId,
        soccerBallSkinId,
        tennisBallSkinId,
        billiardBallSkinId,
        powPack1Id,
        powPack2Id,
        powPack3Id
    };

    public const string defaultSkin = "ballSkin";
    public const string basketBallSkin = "basketBallSkin";
    public const string soccerBallSkin = "soccerBallSkin";
    public const string tennisBallSkin = "tennisBallSkin";
    public const string billiardBallSkin = "billiardBallSkin";
    public const string currentSkin = "currentSkin";

    public const int mainMenu = 0;
    public const int shop = 1;
    public const int inventory = 2;
    public const int world = 3;
    public const int speedyWorld = 4;
    public const int bombyWorld = 5;
    public const int shapeShiftyWorld = 6;
    public const int ninjyWorld = 7;
    public const int wheel = 8;

    public const string score = "score";
    public const string highScore = "score";

    public const string speedyScore = "speedyScore";
    public const string bombyScore = "bombyScore";
    public const string shapeShiftyScore = "shapeShiftyScore";
    public const string ninjyScore = "ninjyScore";
    public const string speedyHighScore = "speedyHighScore";
    public const string bombyHighScore = "bombyHighScore";
    public const string shapeShiftyHighScore = "shapeShiftyHighScore";
    public const string ninjyHighScore = "ninjyHighScore";

    public const string didPlayerSubmitName = "didPlayerSubmitName";
    public const string currentWorld = "currentWorld";
    public const string userCollection = "users";
    public const string userId = "userId";
    public const string userName = "userName";
    public const string speedyCollection = "speedy";
    public const string bombyCollection = "bomby";
    public const string shapeShiftyCollection = "shapeShifty";
    public const string ninjyCollection = "ninjy";
    public const string volumeStatus = "volumeStatus";
    public const string isAuth = "isAuth";
    public const float bombyUnlockScore = 1000;
    public const float shapeShiftyUnlockScore = 800;
    public const float ninjyUnlockScore = 1200;
    public const string isShapeShiftyUnlock = "isShapeShiftyUnlock";
    public const string isBombyUnlock = "isBombyUnlock";
    public const string isNinjyUnlock = "isNinjyUnlock";
    
    public const int layerEnemy = 3;
    public const int layerBomb = 6;
    public const int layerBall = 7;
    public const int layerExplosion = 8;
    public const int layerShapeShiftyExplosion = 9;
    public const int layerNinjyTool = 10;
    public const int layerPowerup = 11;
    public const string spinAdsLeft = "spinAdsLeft";
    public const string isInWheel = "isInWheel";
    public const string selectedReward = "selectedReward";
    public const string dailySpin = "dailySpin";
}
