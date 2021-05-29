using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorTrap : MonoBehaviour
{

    [SerializeField] private Animator animator;
    [SerializeField] private ShakeEventData shakeData;

    public void OnTriggerEnter(Collider other)
    {
        animator.SetTrigger("Standing");
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));


    }

}
