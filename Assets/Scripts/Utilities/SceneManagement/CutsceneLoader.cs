using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class CutsceneLoader : MonoBehaviour
{
    [SerializeField] private PlayableDirector Timeline;

    public void OnTriggerEnter(Collider other)
    {
        Timeline.Play();
    }
}
