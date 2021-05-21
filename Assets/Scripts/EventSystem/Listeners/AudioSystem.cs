//Author: Pol Lozano Llorens 
using UnityEngine;

public class AudioSystem : MonoBehaviour
{
    public static AudioSystem instance;

    [SerializeField] private float minPitch = .95f, maxPitch = 1.05f;

    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != this) Destroy(this);
        DontDestroyOnLoad(this);
    }

    private void OnEnable() => EventHandler<SoundEvent>.RegisterListener(OnSoundEvent);
    private void OnDisable() => EventHandler<SoundEvent>.UnregisterListener(OnSoundEvent);

    void OnSoundEvent(SoundEvent soundEvent) {
        //=> PlayClip(soundEvent.Info);
        AudioClip clip = soundEvent.Data.GetRandomSound(); 
        soundEvent.AudioSource.pitch = Random.Range(minPitch, maxPitch);
        soundEvent.AudioSource.PlayOneShot(clip);
        Debug.Log("PlayedAudioClip: " + clip + " Kött fifaän");

    }
}