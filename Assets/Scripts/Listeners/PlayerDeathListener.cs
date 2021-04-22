using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDeathListener : MonoBehaviour
{
    private void OnEnable()
    {
        EventHandler<DeathEvent>.RegisterListener(OnPlayerDeath);
    }

    private void OnDisable()
    {
        EventHandler<DeathEvent>.UnregisterListener(OnPlayerDeath);
    }

    private void OnPlayerDeath(DeathEvent deathEvent)
    {
        Debug.Log(deathEvent.Info.unit.tag);
        if (deathEvent.Info.unit.tag == "Player")
        {
            Debug.Log(Checkpoint.currentCheckPoint.transform.position);
            deathEvent.Info.unit.transform.position = Checkpoint.currentCheckPoint.transform.position;
        }
    }

}
