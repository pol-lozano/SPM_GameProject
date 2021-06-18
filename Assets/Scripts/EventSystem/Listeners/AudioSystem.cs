//Author: Pol Lozano Llorens 
//Secondary Author: Sajid Masoud
using UnityEngine;
using UnityEngine.UI;

public class AudioSystem : MonoBehaviour
{
    public static AudioSystem instance;
    [SerializeField] private float minPitch = .95f, maxPitch = 1.05f;
    [SerializeField] private float volume;

    [SerializeField] private Slider effectSlider;
    [SerializeField] private Slider masterSlider;


    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != this) Destroy(this);
    }

    private void OnEnable() => EventHandler<SoundEvent>.RegisterListener(OnSoundEvent);
    private void OnDisable() => EventHandler<SoundEvent>.UnregisterListener(OnSoundEvent);

    void OnSoundEvent(SoundEvent soundEvent) {
        if (soundEvent.Data == null)
            return;
       
        AudioClip clip = soundEvent.Data.GetAudioClip(); 
        if(clip != null)
        {
            //Debug.Log(soundEvent.Data);
            volume = (PlayerPrefs.GetFloat("EffectVolume", effectSlider.value)) * 0.1f * (PlayerPrefs.GetFloat("MasterVolume", masterSlider.value));
            soundEvent.AudioSource.volume = volume;

            if (soundEvent.Data.StaticPitch == false)
                soundEvent.AudioSource.pitch = Random.Range(minPitch, maxPitch);
            soundEvent.AudioSource.PlayOneShot(clip);
        }    
    }
}