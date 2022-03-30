using UnityEngine;
// using GooglePlayGames;
// using GooglePlayGames.BasicApi;

public class PlayGameServices : MonoBehaviour
{
    private bool isConnectedToGooglePlayService;
    public void Awake()
    {
        // PlayGamesPlatform.DebugLogEnabled = true;
        // PlayGamesPlatform.Activate();
    }

    // Start is called before the first frame update
    public void Start() { 
        SignInToGooglePlayService();
    }

    public void SignInToGooglePlayService() {
        Debug.Log("Show na");
       //  PlayGamesPlatform.Instance.ShowLeaderboardUI("CgkI-r_H8-cIEAIQAQ");
    }

    // internal void ProcessAuthentication(SignInStatus status) {
    //     if (status == SignInStatus.Success) {
    //         isConnectedToGooglePlayService = true;
    //         Debug.Log("Hey");
    //     } else {
    //         isConnectedToGooglePlayService = false;
    //          Debug.Log("Hey");
    //     }
    // }

    // Update is called once per frame
    void Update()
    {
        
    }
}
