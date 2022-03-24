using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXManager : MonoBehaviour
{
    public new AudioSource audio;
    public AudioClip tap;
    public AudioClip freeze;
    public AudioClip destroy;
    public AudioClip jump;
    public AudioClip fade;
    public AudioClip boom;
    public AudioClip gunShot;
    public AudioClip smoke;
    public AudioClip activate;

    public static SFXManager sfxInstance;

    void Awake()
    {
        if (sfxInstance != null && sfxInstance != this) {
            Destroy(this.gameObject);
            return;
        }

        sfxInstance = this;
        DontDestroyOnLoad(this);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
