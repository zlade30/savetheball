using System.Collections;
using UnityEngine;

public class Wheel : MonoBehaviour
{
    [SerializeField]
    private WheelManager wheelManager;
    private float time = 5f;
    public bool isStop { set; get; } = false;
    private float max = 2f;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void StartWheel() {
        time = 5;
        isStop = false;
        StartCoroutine(Spin());
    }
 
    public IEnumerator Spin() //Call this method with StartCoroutine(RotateForSeconds());
    {
        time = 5;     //How long will the object be rotated?
        float max = 2;
    
        while(time > 0)     //While the time is more than zero...
        {
            if (time <= 2) max = time;
            transform.Rotate(Vector3.forward, Time.deltaTime * max * 120);     //...rotate the object.
            if (isStop)
                time -= Time.deltaTime;     //Decrease the time- value one unit per second.
                
            yield return null;     //Loop the method.
        }

        wheelManager.ShowRewardPanel();    
    }
}
