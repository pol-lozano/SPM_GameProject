using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleHolder : MonoBehaviour
{
    [SerializeField] private ParticleSystem spawn;
    [SerializeField] private List<ParticleSystem> death = new List<ParticleSystem>();

    public ParticleSystem GetParticleSpawn() { return spawn; }
    public List<ParticleSystem> GetParticleDeath() { return death; }
}
