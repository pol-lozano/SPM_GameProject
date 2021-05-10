using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour
{


    [SerializeField] private GameObject objectToPickup;
    [SerializeField] private bool isSword;
    public Animator anim;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            objectToPickup.SetActive(false);
            PlayerCombat.Player.PickUpObject(isSword);
            Debug.Log("Picked up!");
            anim.SetBool("Activated", true);
        }
    }
}


