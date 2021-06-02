
using UnityEngine;

public class GameInstance : MonoBehaviour
{
    private void OnEnable()
    {
        EventHandler<ReloadEvent>.RegisterListener(Reload);
        EventHandler<DyingEvent>.RegisterListener(OnDying);
    }
    private void OnDisable()
    {
        EventHandler<ReloadEvent>.UnregisterListener(Reload);
        EventHandler<DyingEvent>.UnregisterListener(OnDying);
    }

    private void Reload(ReloadEvent eve)
    {
        CharacterController3D.Player.transform.position = Checkpoint.currentCheckPoint.transform.position;

        if(BossController.Boss != null)
            BossController.Boss.Agent.Warp(BossController.Boss.StartPosition);

        CharacterController3D.Player.GetComponent<HealthComponent>().ResetHealth();
        //EventHandler<ReloadEnemiesEvent>.FireEvent(new ReloadEnemiesEvent());
    }

    private void OnDying(DyingEvent data)
    {
        HealthComponent hc = (HealthComponent)data.Info.hitComponent;
        if (hc.IsPlayer)
            EnemyLoader.ResetEnemies();
    }


}
