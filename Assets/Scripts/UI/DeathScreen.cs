//Author: Rickard Lindgren
using UnityEngine;

public class DeathScreen : MonoBehaviour
{

    [SerializeField] private Animator anim;

    private void OnEnable() 
    {
        EventHandler<DyingEvent>.RegisterListener(OnDying);
        EventHandler<ReloadEvent>.RegisterListener(OnReload);
    }


    private void OnDisable()
    {
        EventHandler<DyingEvent>.UnregisterListener(OnDying);
        EventHandler<ReloadEvent>.UnregisterListener(OnReload);
    }

    private void OnDying(DyingEvent eve)
    {
        anim.SetTrigger("fadeout");
    }

    private void OnReload(ReloadEvent eve)
    {
        anim.SetTrigger("fadein");
    }

    private void SendDeathEvent()
    {
        DeathInfo deathInfo = new DeathInfo
        {
            unit = gameObject,
        };
        EventHandler<DeathEvent>.FireEvent(new DeathEvent(deathInfo));
    }

}
