using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Raycast : MonoBehaviour
{
    [SerializeField]
    GameObject ball;
    Vector3 trans;
    private bool isInit;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void FixedUpdate()
    { 
        Debug.DrawLine(transform.position, ball.transform.position * 10f,  Color.red);  
    }
}
