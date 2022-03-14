using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppFrameRate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (Application.isMobilePlatform) {
            Application.targetFrameRate = 120;
            QualitySettings.vSyncCount = 0;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
