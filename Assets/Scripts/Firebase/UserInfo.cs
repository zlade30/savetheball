using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System.Collections.Generic;

public class UserInfo : MonoBehaviour
{
    FirebaseFirestore db;
    
    // Start is called before the first frame update
    void Start()
    {
        db = FirebaseFirestore.DefaultInstance;
        Dictionary<string, object> city = new Dictionary<string, object>
        {
                { "name", "Zalde" },
                { "country", "PH" }
        };
        db.Collection("users").AddAsync(city).ContinueWithOnMainThread(task => {
                DocumentReference addedDocRef = task.Result;
                Debug.Log("Added document with ID: {0}."+ addedDocRef.Id);
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
