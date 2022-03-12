using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Progress : MonoBehaviour
{
    public float waitTime = 5.0f;
    Image bar;

    // Start is called before the first frame update
    void Start()
    {
        bar = GetComponent<Image>();
        bar.fillAmount = 1f;
    }

    // Update is called once per frame
    void Update()
    {
        bar.fillAmount -= 1.0f / waitTime * Time.deltaTime;
    }
}
