using UnityEngine;
using System.Collections;

public class Abilities : MonoBehaviour
{
    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
    private Enemy enemy;
    public string world = "";
    private SpeedyAbility speedy;

    // Start is called before the first frame update
    void Start()
    {
        enemy = GetComponent<Enemy>();
        if (world == "Speedy") speedy = new SpeedyAbility();
    }

    // Update is called once per frame
    void Update()
    {
        if (world == "Speedy") {
            speedy.FadeInOutCatch(enemy, toolbar, btmBorder);
        }
    }
}
