using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Main Author Sajid Masoud El Pip, Supervisors Pol Loreno Llorenz & Rille Linegreen 
[CreateAssetMenu(menuName = "Audio/AudioData")]

public class AudioData : ScriptableObject
{
    public AudioClip[] sounds;

    public AudioClip GetRandomSound()
    {

        if(sounds.Length > 1)
        {
            int n = Random.Range(1, sounds.Length);
            AudioClip clip = sounds[n];
            sounds[n] = sounds[0]; //flyttar tillbaka till index 0
            sounds[0] = clip;
            return clip;
        }
        else
        {
            return GetSingleSound();
        }
    }

    public AudioClip GetSingleSound()
    {
        return sounds.Length > 0 ? sounds[0] : null;
    }
 
}


