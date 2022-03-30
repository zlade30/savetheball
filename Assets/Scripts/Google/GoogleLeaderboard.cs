using UnityEngine;
using GooglePlayGames;

public class GoogleLeaderboard : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowLeaderboardUI() {
        if (Application.platform == RuntimePlatform.Android) {
            int world = PlayerPrefs.GetInt(Utils.currentWorld);
            switch (world) {
                case Utils.bombyWorld:
                    PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_bomby_leaderboard);
                    break;
                case Utils.ninjyWorld:
                    PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_ninjy_world);
                    break;
                case Utils.speedyWorld:
                    PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_speedy_leaderboard);
                    break;
                case Utils.shapeShiftyWorld:
                    PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_shapeshifty_world);
                    break;
                default:
                    break;
            }
        }
    }

    public void DoLeaderboardPost(int score) {
        if (Application.platform == RuntimePlatform.Android) {
            int world = PlayerPrefs.GetInt(Utils.currentWorld);
            switch (world) {
                case Utils.bombyWorld:
                    Social.ReportScore(score, GPGSIds.leaderboard_bomby_leaderboard,
                        (bool success) => {
                            if (success) {

                            } else {

                            }
                        }
                    );
                    break;
                case Utils.ninjyWorld:
                    Social.ReportScore(score, GPGSIds.leaderboard_ninjy_world,
                        (bool success) => {
                            if (success) {

                            } else {

                            }
                        }
                    );
                    break;
                case Utils.speedyWorld:
                    Social.ReportScore(score, GPGSIds.leaderboard_speedy_leaderboard,
                        (bool success) => {
                            if (success) {
                                Debug.Log("Success post");
                            } else {
                                Debug.Log("Success post");
                            }
                        }
                    );
                    break;
                case Utils.shapeShiftyWorld:
                    Social.ReportScore(score, GPGSIds.leaderboard_shapeshifty_world,
                        (bool success) => {
                            if (success) {

                            } else {

                            }
                        }
                    );
                    break;
                default:
                    break;
            }
        }
    }
}
