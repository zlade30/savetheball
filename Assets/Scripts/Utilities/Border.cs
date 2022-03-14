using UnityEngine;

public class Border : MonoBehaviour
{
    [SerializeField]
    bool isTop = true;
    [SerializeField]
    int borderHeight = 8;

    // Start is called before the first frame update
    void Start()
    {
        SpriteRenderer sr = GetComponent<SpriteRenderer>();
        float worldScreenHeight = Camera.main.orthographicSize * 2;
        float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;

        transform.localScale = new Vector3(worldScreenWidth / sr.sprite.bounds.size.x, (worldScreenHeight / sr.sprite.bounds.size.y) / borderHeight, 1);
        //   transform.localPosition = new Vector3(0, worldScreenHeight, 0);
        Vector3 mPos = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0));
        mPos.z = 0;
        mPos.x += gameObject.GetComponent<SpriteRenderer>().bounds.size.x / 2;
        mPos.y += gameObject.GetComponent<SpriteRenderer>().bounds.size.y / 2;
        if (isTop) mPos.y = mPos.y * -1;
        else mPos.y = mPos.y * 1;
        transform.position = mPos;
        float total = (worldScreenHeight - sr.transform.lossyScale.y) / 2;
    }
}
