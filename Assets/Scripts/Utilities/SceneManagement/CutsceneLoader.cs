using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

//Author: Sajid A. Masoud
public class CutsceneLoader : MonoBehaviour
{
    [SerializeField] private PlayableDirector Timeline;
    [SerializeField] private AudioSource audioSource;

    private bool activatedCutscene;
    private void OnEnable() => EventHandler<ReloadEvent>.RegisterListener(StopAudio);
    private void OnDisable() => EventHandler<ReloadEvent>.UnregisterListener(StopAudio);

    public void OnTriggerEnter(Collider other)
    {
        GetComponent<Collider>().enabled = false;
        if(activatedCutscene == false)
        {
            Timeline.Play();
            activatedCutscene = true;
        }
        audioSource.Play();
    }
    private void StopAudio(ReloadEvent pe)
    {
       audioSource.Stop();
       GetComponent<Collider>().enabled = true;

    }

}
