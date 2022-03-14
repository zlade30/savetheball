using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppFrameRate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
<<<<<<< HEAD
        if (Application.isMobilePlatform) {
            Application.targetFrameRate = 120;
            QualitySettings.vSyncCount = 0;
        }
=======
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            Application.targetFrameRate = 120;
>>>>>>> bc65015e256f2f8be1ac57ee881862b5c941e9c1
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
