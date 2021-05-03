//Author: Pol Lozano Llorens
using UnityEngine;

public class DeathListener : MonoBehaviour
{
    private void OnEnable() => EventHandler<DeathEvent>.RegisterListener(OnDeath);
    private void OnDisable() => EventHandler<DeathEvent>.UnregisterListener(OnDeath);

    void OnDeath(DeathEvent deathEvent)
    {
        Debug.Log(deathEvent.Info.unit.tag);
        //TODO: MAKE ENEMY DEATH SEPARATE FROM PLAYER DEATH?

        switch (deathEvent.Info.unit.tag)
        {
            case "Player": 
                HandlePlayerDeath(deathEvent);
                break;
            case "Enemy":
                HandleEnemyDeath(deathEvent);
                break;
        }
    }

    private void HandleEnemyDeath(DeathEvent deathEvent)
    {

    }

    private void HandlePlayerDeath(DeathEvent deathEvent)
    {
        //deathEvent.Info.unit.transform.position = Checkpoint.currentCheckPoint.transform.position;
    }
}