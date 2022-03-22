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
        else if (world == "ShapeShifty") shapeShifty = new ShapeShifty();
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
            if (enemy.isGrounded) {
                shapeShifty.ShapeShiftyMissile(enemy, shapeShiftyMissile, toolbar, btmBorder, score);
                // int choose = Random.Range(0, 10);
                // switch (choose) {
                //     case 0:
                //         shapeShifty.ShapeShiftyBomb(enemy, shapeShiftyBomb, score);
                //         break;
                //     case 1:
                //         shapeShifty.ShapeShiftyMissile(enemy, shapeShiftyMissile, toolbar, btmBorder, score);
                //         break;
                //     case 2:
                //         shapeShifty.Skip(enemy);
                //         break;
                //     default:
                //         shapeShifty.Skip(enemy);
                //         break;
                // }
            }
        }
    }
}
