using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase.Firestore;
using Firebase.Extensions;
using TMPro;

public class Leaderboard : MonoBehaviour
{
    [SerializeField]
    GameObject boardItem;

    private FirebaseFirestore db;
    private string table;

    // Start is called before the first frame update
    void Start()
    {
        db = FirebaseFirestore.DefaultInstance;

        int world = PlayerPrefs.GetInt(Utils.currentWorld);
        switch (world) {
            case Utils.bombyWorld:
                table = Utils.bombyCollection;
                break;
            case Utils.ninjyWorld:
                table = Utils.ninjyCollection;
                break;
            case Utils.speedyWorld:
                table = Utils.speedyCollection;
                break;
            case Utils.shapeShiftyWorld:
                table = Utils.shapeShiftyCollection;
                break;
            default:
                break;
        }

        if (Application.internetReachability != NetworkReachability.NotReachable)
            FetchLeaderBoard();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void FetchLeaderBoard() {
        Query allCitiesQuery = db.Collection(table).OrderByDescending("score").Limit(20);
        Dictionary<string, object> list;

        allCitiesQuery.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot allCitiesQuerySnapshot = task.Result;
            int i = 0;
            foreach (DocumentSnapshot documentSnapshot in allCitiesQuerySnapshot.Documents)
            {
                string userId = PlayerPrefs.GetString(Utils.userId);
                GameObject board = boardItem.transform.GetChild(i).gameObject;
                if (userId == documentSnapshot.Id)
                    board.GetComponent<Image>().color = new Color32(167, 255, 247, 255);
                TextMeshProUGUI rank = board.transform.GetChild(0).GetComponent<TextMeshProUGUI>();
                TextMeshProUGUI name = board.transform.GetChild(1).GetComponent<TextMeshProUGUI>();
                TextMeshProUGUI score = board.transform.GetChild(2).GetComponent<TextMeshProUGUI>();

                Debug.Log("Document data for {0} document:"+ documentSnapshot.Id);
                list = documentSnapshot.ToDictionary();
                int x = 0;
                foreach (KeyValuePair<string, object> pair in list)
                {
                    string key = pair.Key;
                    object value = pair.Value;
                    Debug.Log("Key"+ pair.Key);
                    Debug.Log("Value"+ pair.Value);
                    if (x == 0) name.text = pair.Value.ToString();
                    else score.text = pair.Value.ToString();
                    x++;
                }
                i++;
            }
        });
    }
}
