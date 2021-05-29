using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorTrap : MonoBehaviour
{

    public Animator animator;

    public void OnTriggerEnter(Collider other)
    {
        animator.SetTrigger("Standing");
        
    }

}
