using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppFrameRate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            Application.targetFrameRate = 120;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
