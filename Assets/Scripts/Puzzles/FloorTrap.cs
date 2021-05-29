using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorTrap : MonoBehaviour
{

    [SerializeField] private Animator animator;
    [SerializeField] private AudioData audioData;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private ShakeEventData shakeData;

    public void OnTriggerEnter(Collider other)
    {
        animator.SetTrigger("Standing");
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(audioData, audioSource));
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));


    }

}
