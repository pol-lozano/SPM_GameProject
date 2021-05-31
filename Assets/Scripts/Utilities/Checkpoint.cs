//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;

public class Checkpoint : MonoBehaviour
{
    public static Checkpoint currentCheckPoint;
    [SerializeField] private string UItext;
    [SerializeField] private List<int> scenesOnThisCheckpoint = new List<int>();

    public List<int> ScenesOnCheckpoint { get => scenesOnThisCheckpoint; }

    private void OnEnable() => EventHandler<ReloadEvent>.RegisterListener(Reload);
    private void OnDisable() => EventHandler<ReloadEvent>.UnregisterListener(Reload);

    /*DEN BORDE INTE AKTIVERAS SÅ HÄR, SPELAREN BORDE GÅ FRAM OCH INTERAGERA*/
    private void OnTriggerEnter/*STAY!?*/(Collider other)
    {
        if (other.CompareTag("Player") && this!=currentCheckPoint)
        {
            //Debug.Log("player");
            ActivateCheckpoint(other.gameObject);
        }
    }

    private void ActivateCheckpoint(GameObject player)
    {
        EventHandler<CheckPointEvent>.FireEvent(new CheckPointEvent(UItext));
        //Debug.Log("ActivateCheckpoint");
        currentCheckPoint = this;
        player.GetComponent<HealthComponent>().ResetHealth();
    }

    private void Reload(ReloadEvent eve)
    {
        //EventHandler<CheckPointEvent>.FireEvent(new CheckPointEvent(UItext));
    }
    
}

