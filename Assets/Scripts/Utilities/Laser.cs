using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    private LineRenderer lr; //Make sure you attach a line renderer to your enemy
    public Transform player;
    public LayerMask obstacleLayers;
    
    void Start(){
        lr = GetComponent<LineRenderer>();
        lr.positionCount = 2;
    }

    void Update(){
  
    }
}
