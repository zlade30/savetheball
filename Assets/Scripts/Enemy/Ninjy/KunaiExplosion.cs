using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KunaiExplosion : MonoBehaviour
{
    ParticleSystem ps;
    Game game;

    // these lists are used to contain the particles which match
    // the trigger conditions each frame.
    List<ParticleSystem.Particle> enter = new List<ParticleSystem.Particle>();
    List<ParticleSystem.Particle> exit = new List<ParticleSystem.Particle>();

    // Start is called before the first frame update
    void Start()
    {
        game = Camera.main.GetComponent<Game>();
    }

    void OnEnable()
    {
        ps = GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnParticleTrigger() {
        List<ParticleSystem.Particle> enteredParticles = new List<ParticleSystem.Particle>();
        int enterCount = ps.GetTriggerParticles(ParticleSystemTriggerEventType.Enter, enteredParticles);

        foreach (ParticleSystem.Particle particle in enteredParticles)
        {
            game.GameOver();
        }
	}
}
