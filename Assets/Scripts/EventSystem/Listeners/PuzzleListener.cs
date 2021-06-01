//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class PuzzleListener : MonoBehaviour
{

    [SerializeField] private int id;
    [SerializeField] private Animator anim;
    [SerializeField] private AudioData puzzleActivationAudio;
    [SerializeField] private AudioData puzzleImpactAudio;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private VisualEffect vfxOne;
    [SerializeField] private VisualEffect vfxTwo;

    private void OnEnable() => EventHandler<PuzzleEvent>.RegisterListener(UnlockPuzzle);
    private void OnDisable() => EventHandler<PuzzleEvent>.UnregisterListener(UnlockPuzzle);

    private void UnlockPuzzle(PuzzleEvent pe)
    {
        if (pe.id == id)
        {
            if(puzzleActivationAudio != null && audioSource != null)
            {
                EventHandler<SoundEvent>.FireEvent(new SoundEvent(puzzleActivationAudio, audioSource));
            }
            anim.SetTrigger("unlock");
        }
    }  

    public void OnAnimationEnded()
    {
        if(vfxOne != null)
            vfxOne.Play();
        if(vfxTwo != null)
           vfxTwo.Play();
        if (puzzleImpactAudio != null && audioSource != null)
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(puzzleImpactAudio, audioSource));
    }

}
