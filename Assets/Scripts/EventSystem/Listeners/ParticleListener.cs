//Author: Pol Lozano Llorens
using UnityEngine;

public class ParticleListener : MonoBehaviour
{
    private void OnEnable() => EventHandler<DeathEvent>.RegisterListener(OnPlayParticles);
    private void OnDisable() => EventHandler<DeathEvent>.UnregisterListener(OnPlayParticles);

    void OnPlayParticles(DeathEvent deathEvent)
    {
        //Object pooler would be better
        ParticleSystem system = Instantiate(deathEvent.Info.particleSystem, deathEvent.Info.hitComponent.transform.position, Quaternion.identity);
        system.gameObject.transform.SetParent(transform);
        system.Play();
        Destroy(system.gameObject, system.main.duration);
    }
}