using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Trigger : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    private Image bar;
    [SerializeField]
    private GameObject powerupsObject;
    private Powerups powerups;
    private Game game;

    // Start is called before the first frame update
    void Start()
    {
        powerups = powerupsObject.GetComponent<Powerups>();
        game = Camera.main.GetComponent<Game>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string name = eventData.pointerCurrentRaycast.gameObject.name;

        if (!game.isPause && !game.isOver) {
            if ((name == Utils.fire || name == "FireValue") && PlayerPrefs.GetInt(Utils.fire) != 0) {
                int value = PlayerPrefs.GetInt(Utils.fire);
                --value;
                PlayerPrefs.SetInt(Utils.fire, value);
                powerups.isFireTrigger = true;
                bar.fillAmount = 1f;
                SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.destroy);
            }

            if ((name == Utils.ice || name == "IceValue") && PlayerPrefs.GetInt(Utils.ice) != 0) {
                int value = PlayerPrefs.GetInt(Utils.ice);
                --value;
                PlayerPrefs.SetInt(Utils.ice, value);
                powerups.isIceTrigger = true;
                bar.fillAmount = 1f;
                SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.freeze);
            }

            if ((name == Utils.shield || name == "ShieldValue") && PlayerPrefs.GetInt(Utils.shield) != 0) {
                int value = PlayerPrefs.GetInt(Utils.shield);
                --value;
                PlayerPrefs.SetInt(Utils.shield, value);
                powerups.isShieldTrigger = true;
                bar.fillAmount = 1f;
                SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
            }

            if ((name == Utils.teleport || name == "TeleportValue") && PlayerPrefs.GetInt(Utils.teleport) != 0) {
                int value = PlayerPrefs.GetInt(Utils.teleport);
                --value;
                PlayerPrefs.SetInt(Utils.teleport, value);
                powerups.isTeleportTrigger = true;
                bar.fillAmount = 1f;
                SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
            }
        }
    }
}
