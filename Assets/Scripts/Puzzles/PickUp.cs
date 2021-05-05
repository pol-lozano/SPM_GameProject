//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour
{
    [SerializeField] private bool isSword;
    [SerializeField] private GameObject pickUpObject;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerCombat.Player.PickUpObject(isSword);
            pickUpObject.SetActive(false);
        }
    }
}
