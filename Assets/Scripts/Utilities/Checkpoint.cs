using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Checkpoint : MonoBehaviour
{
    public static Checkpoint currentCheckPoint;

    //ska ligga i checkpointManager ist
    //[SerializeField] private List<string> scenesOnThisCheckpoint = new List<string>();

    private void Awake()
    {
        if (currentCheckPoint == null)
            currentCheckPoint = this;
    }

    /*DEN BORDE INTE AKTIVERAS SÅ HÄR, SPELAREN BORDE GÅ FRAM OCH INTERAGERA*/
    private void OnTriggerEnter/*STAY!?*/(Collider other)
    {
        if (other.CompareTag("Player")/*&& input.G*/)
        {
            Debug.Log("player");
            ActivateCheckpoint(other.gameObject);
        }
    }

    private void ActivateCheckpoint(GameObject player)
    {
        Debug.Log("ActivateCheckpoint");
        currentCheckPoint = this;
        player.GetComponent<HealthComponent>().ResetHealth();
    }
    
    
        
}
