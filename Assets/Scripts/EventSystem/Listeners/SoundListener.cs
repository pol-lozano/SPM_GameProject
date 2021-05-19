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

    private void OnEnable() => EventHandler<SoundEvent>.RegisterListener(OnSoundEvent);
    private void OnDisable() => EventHandler<SoundEvent>.UnregisterListener(OnSoundEvent);

    void OnSoundEvent(SoundEvent soundEvent) => PlayClip(soundEvent.Info.GetRandomSound());

    void PlayClip(AudioClip clip)
    {
        source.pitch = Random.Range(minPitch, maxPitch);
        source.PlayOneShot(clip);
        Debug.Log("PlayedAudioClip" + clip.name + "Hej angelina");
    }
}