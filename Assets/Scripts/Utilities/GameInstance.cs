
using UnityEngine;

public class GameInstance : MonoBehaviour
{
    private void OnEnable() => EventHandler<ReloadEvent>.RegisterListener(Reload);
    private void OnDisable() => EventHandler<ReloadEvent>.UnregisterListener(Reload);

    private void Reload(ReloadEvent eve)
    {
        CharacterController3D.Player.transform.position = Checkpoint.currentCheckPoint.transform.position;
        BossController.Boss.Agent.Warp(BossController.Boss.StartPosition);
        CharacterController3D.Player.GetComponent<HealthComponent>().ResetHealth();
        EnemyLoader.ResetEnemies();
        EventHandler<ReloadEnemiesEvent>.FireEvent(new ReloadEnemiesEvent());
    }


}
