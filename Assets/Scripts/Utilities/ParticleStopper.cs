using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class ParticleStopper : MonoBehaviour
{

    [SerializeField] private HealthComponent health;
    [SerializeField] private VisualEffect vfx;

    void Update()
    {
        if (health.CurrentHealth <= 0)
            vfx.Stop();
    }
}
