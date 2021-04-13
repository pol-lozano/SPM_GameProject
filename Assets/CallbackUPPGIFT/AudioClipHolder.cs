using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioClipHolder : MonoBehaviour
{
    [SerializeField] private List<AudioClip> sounds = new List<AudioClip>();

    private Dictionary<string, AudioClip> soundsDic = new Dictionary<string, AudioClip>();
    private void Start()
    {
        foreach(AudioClip clip in sounds)
        {
            soundsDic.Add(clip.name, clip);
        }
    }
    public AudioClip GetSound(string s)
    {
        return soundsDic[s];
    }
}
