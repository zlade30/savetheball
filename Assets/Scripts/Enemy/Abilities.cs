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
    [SerializeField]
    private GameObject shapeShiftyBomb;
    [SerializeField]
    private GameObject shapeShiftyMissile;
    [SerializeField]
    private Score score;
    [SerializeField]
    private Powerups powerups;
    private Enemy enemy;
    public string world = "";
    private SpeedyAbility speedy;
    private BombyAbility bomby;
    private ShapeShifty shapeShifty;

    // Start is called before the first frame update
    void Start()
    {
        enemy = GetComponent<Enemy>();
        if (world == "Speedy") speedy = new SpeedyAbility();
        else if (world == "Bomby") bomby = new BombyAbility();
        else if (world == "ShapeShifty") {
            shapeShifty = new ShapeShifty(
                enemy,
                shapeShiftyBomb,
                shapeShiftyMissile,
                score,
                powerups,
                toolbar,
                btmBorder
            );
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (world == "Speedy") {
            speedy.FadeInOutCatch(enemy, toolbar, btmBorder, score);
        } else if (world == "Bomby") {
            if (enemy.isGrounded) {
                if (Random.Range(0, 2) == 0) bomby.SpawnStickyBomb(enemy, stickyBomb, score);
                else bomby.SpawnWalkingBomb(enemy, walkingBomb, score);
            }
        } else if (world == "ShapeShifty") {
            if (powerups.isFireTrigger) shapeShifty.Skip();
            if (enemy.isGrounded) {
                int choose = Random.Range(0, 2);
                switch (choose) {
                    case 0:
                        shapeShifty.ShapeShiftyBomb();
                        break;
                    case 1:
                        shapeShifty.ShapeShiftyMissile();
                        break;
                }
            }
        }
    }
}
