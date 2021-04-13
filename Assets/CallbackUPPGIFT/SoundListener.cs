using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundListener : MonoBehaviour
{
    private Queue<UnitDeath> eventQueue = new Queue<UnitDeath>();
    private AudioSource audio;
    private AudioClip clip;
    void Start()
    {
        audio = GetComponent<AudioSource>();
        EventSystem.Current.RegisterListener<UnitDeath>(OnUnitDeath);
    }

    private void OnUnitDeath(UnitDeath udi)
    {
        clip = udi.unit.GetComponent<AudioClipHolder>().GetSound(udi.audioClip);
        eventQueue.Enqueue(udi);
    }

    private void UseQueue()
    {
        //Play sound from the first in queue.
        Debug.Log("Spelar ett ljud bara fast så här många har dött: " + eventQueue.Count);
        audio.PlayOneShot(clip);
        //empty queue
        eventQueue.Clear();

    }

    private void Update()
    {
        if(eventQueue.Count > 0)
        {
            UseQueue();
        }
    }
}
