using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour
{


    [SerializeField] private GameObject objectToPickup;
    [SerializeField] private bool isSword;
    [SerializeField] private AudioData playerPickUp;

    public Animator anim;

    private void OnTriggerEnter(Collider other)
    {
          objectToPickup.SetActive(false);
          PlayerCombat.Player.PickUpObject(isSword);
          Debug.Log("Picked up!");
          anim.SetBool("Activated", true);
          EventHandler<SoundEvent>.FireEvent(new SoundEvent(playerPickUp));

    }
}


