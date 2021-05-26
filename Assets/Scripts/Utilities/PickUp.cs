using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Secondary author: Sajid Masoud
public class PickUp : MonoBehaviour
{
    [SerializeField] private GameObject objectToPickup;
    [SerializeField] private bool isSword;
    [SerializeField] private AudioData pickUpAudio;
    [SerializeField] private Collider pickupCollider;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private GameObject particleSystem;

    public Animator anim;

    private void OnTriggerEnter(Collider other)
    {
        objectToPickup.SetActive(false);
        PlayerCombat.Player.PickUpObject(isSword);
        Debug.Log("Picked up!");

        if (anim != null)
            anim.SetBool("Activated", true);

        EventHandler<SoundEvent>.FireEvent(new SoundEvent(pickUpAudio, audioSource));
        pickupCollider.enabled = false;
        particleSystem.SetActive(false);
    }
}

