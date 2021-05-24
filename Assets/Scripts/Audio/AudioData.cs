using UnityEngine;

//Main Author Sajid Masoud El Pip, Supervisors Pol Loreno Llorenz & Rille Linegreen 
[CreateAssetMenu(menuName = "Audio/AudioData")]
public class AudioData : ScriptableObject
{
    public AudioClip[] sounds;

    public AudioClip GetAudioClip()
    {
        return (sounds.Length > 1) ? GetRandomSound() : GetSingleSound();
    }

    public AudioClip GetRandomSound()
    {
        int n = Random.Range(1, sounds.Length);
        AudioClip clip = sounds[n];
        sounds[n] = sounds[0];
        sounds[0] = clip;
        return clip;
    }

    public AudioClip GetSingleSound()
    {
        return (sounds.Length > 0) ? sounds[0] : null;
    }
}