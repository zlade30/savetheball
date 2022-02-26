using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Toolbar : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        SpriteRenderer sr = GetComponent<SpriteRenderer>();
        float worldScreenHeight = Camera.main.orthographicSize * 2;
        float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;

        transform.localScale = new Vector3(worldScreenWidth / sr.sprite.bounds.size.x, (worldScreenHeight / sr.sprite.bounds.size.y) / 8, 1);
        //   transform.localPosition = new Vector3(0, worldScreenHeight, 0);
        Vector3 mPos = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0));
        mPos.z = 0;
        mPos.x += gameObject.GetComponent<SpriteRenderer>().bounds.size.x / 2;
        mPos.y += gameObject.GetComponent<SpriteRenderer>().bounds.size.y / 2;
        mPos.y = mPos.y * -1;
        transform.position = mPos;
        float total = (worldScreenHeight - sr.transform.lossyScale.y) / 2;
    }
}
