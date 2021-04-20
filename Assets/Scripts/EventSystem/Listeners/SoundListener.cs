//Author: Pol Lozano Llorens
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class SoundListener : MonoBehaviour
{
    public static SoundListener instance;
    [SerializeField] private AudioSource source;
    private readonly float minPitch = .95f, maxPitch = 1.05f;

    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != this) Destroy(this);
        DontDestroyOnLoad(this);
    }

    private void OnEnable() => EventHandler<DeathEvent>.RegisterListener(OnDeath);
    private void OnDisable() => EventHandler<DeathEvent>.UnregisterListener(OnDeath);

    void OnDeath(DeathEvent deathEvent) => PlayClip(deathEvent.Info.sound);

    void PlayClip(AudioClip clip)
    {
        source.pitch = Random.Range(minPitch, maxPitch);
        source.PlayOneShot(clip);
    }
}