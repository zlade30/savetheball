using UnityEngine;
using UnityEngine.EventSystems;

public class AdsEvent : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    GameObject ads;

    private Game game;

    private InterstitialAds interstitialAds;
    private RewardedAds rewardedAds;
    // Start is called before the first frame update
    void Start()
    {
        interstitialAds = ads.GetComponent<InterstitialAds>();
        rewardedAds = ads.GetComponent<RewardedAds>();
        game = Camera.main.GetComponent<Game>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string uiName = eventData.pointerCurrentRaycast.gameObject.name;

        if (uiName == "Back") {
            if (!game.isOver && game.isPause)
                interstitialAds.ShowAd();
        } else {
            rewardedAds.ShowAd();
        }
    }
}
