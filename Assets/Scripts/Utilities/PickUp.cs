using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour
{
    [SerializeField] private GameObject objectToPickup;
    [SerializeField] private bool isSword;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            objectToPickup.SetActive(false);
            PlayerCombat.Player.PickUpObject(isSword);
        }
    }
}
