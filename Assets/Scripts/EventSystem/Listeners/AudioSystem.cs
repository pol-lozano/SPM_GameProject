//Author: Pol Lozano Llorens 
//Secondary Author: Sajid Masoud
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
        AudioClip clip = soundEvent.Data.GetAudioClip(); 
        if(clip != null)
        {
            soundEvent.AudioSource.pitch = Random.Range(minPitch, maxPitch);
            soundEvent.AudioSource.PlayOneShot(clip);
        }    
    }
}