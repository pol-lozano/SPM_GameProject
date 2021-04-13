using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleListener : MonoBehaviour
{
    void Start()
    {
        EventSystem.Current.RegisterListener<UnitSpawn>(OnSpawn);
        EventSystem.Current.RegisterListener<UnitDeath>(OnDeath);
    }

    void OnSpawn(UnitSpawn spawn)
    {
        spawn.unit.GetComponent<ParticleHolder>().GetParticleSpawn().Play();
    }

    void OnDeath(UnitDeath udi)
    {
        foreach(ParticleSystem p in udi.unit.GetComponent<ParticleHolder>().GetParticleDeath())
        {
            p.transform.parent = null;
            p.Play();
            Destroy(p, 1);
        }
    }
}
