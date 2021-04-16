using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPoint : MonoBehaviour
{
    public static Transform currentCheckPoint;


    /*DEN BORDE INTE AKTIVERAS SÅ HÄR, SPELAREN BORDE GÅ FRAM OCH INTERAGERA*/
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            currentCheckPoint = this.transform;
            //call CheckPointEvent. enemies respawns and player resets
        }
    }
}
