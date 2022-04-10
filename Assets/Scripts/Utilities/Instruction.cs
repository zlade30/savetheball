using UnityEngine.SceneManagement;
using UnityEngine;

public class Instruction : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Back() {
        SceneManager.LoadScene(Utils.world);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
    }

    public void Play() {
        SceneManager.LoadScene(Utils.speedyWorld);
        SFXManager.sfxInstance.audio.PlayOneShot(SFXManager.sfxInstance.tap);
        PlayerPrefs.SetInt(Utils.showInstruction, 1);
    }
}
