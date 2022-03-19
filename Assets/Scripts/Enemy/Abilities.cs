using UnityEngine;

public class Abilities : MonoBehaviour
{
    [SerializeField]
    private GameObject toolbar;
	[SerializeField]
	private GameObject btmBorder;
    [SerializeField]
    private GameObject stickyBomb;
    [SerializeField]
    private GameObject walkingBomb;
    private Enemy enemy;
    public string world = "";
    private SpeedyAbility speedy;
    private BombyAbility bomby;

    // Start is called before the first frame update
    void Start()
    {
        enemy = GetComponent<Enemy>();
        if (world == "Speedy") speedy = new SpeedyAbility();
        else if (world == "Bomby") bomby = new BombyAbility();
    }

    // Update is called once per frame
    void Update()
    {
        if (world == "Speedy") {
            speedy.FadeInOutCatch(enemy, toolbar, btmBorder);
        } else if (world == "Bomby") {
            if (enemy.isGrounded) {
                if (Random.Range(0, 2) == 0) bomby.SpawnStickyBomb(enemy, stickyBomb);
                else bomby.SpawnWalkingBomb(enemy, walkingBomb);
            }
        }
    }
}
