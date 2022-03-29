using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Leaderboard : MonoBehaviour
{
    [SerializeField]
    GameObject boardItem;
    private string table;

    // Start is called before the first frame update
    void Start()
    {
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
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
