using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeShiftyGun : MonoBehaviour
{
    [SerializeField]
    private Ball ball;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!transform.Find("Bullets").gameObject.activeSelf) {
            Vector2 dir = ball.transform.position - transform.position;

            var offset = 90f;
            dir.Normalize();
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;       
            transform.rotation = Quaternion.Euler(Vector3.forward * (angle + offset));
        }
    }
}
