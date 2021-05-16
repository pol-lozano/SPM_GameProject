//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;

public class DeathScreen : HitComponent
{
    [SerializeField] private Animator anim;
    private int fadeOutTriggerHash;
    private int fadeInTriggerHash;

    private void Awake()
    {
        fadeOutTriggerHash = Animator.StringToHash("fadeout");
        fadeInTriggerHash = Animator.StringToHash("fadein");
    }

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

    private void OnDying(DyingEvent data)
    {
        HealthComponent hc = (HealthComponent) data.Info.hitComponent;
        if(hc.IsPlayer)
            anim.SetTrigger(fadeOutTriggerHash);
    }

    private void OnReload(ReloadEvent data)
    {
        anim.SetTrigger(fadeInTriggerHash);
    }

    public void SendDeathEvent()
    {
        EventHandler<DeathEvent>.FireEvent(new DeathEvent(new DeathInfo { hitComponent = this }));
    }

    public override void HandleHit(HitInfo info)
    {
        throw new System.NotImplementedException();
    }
}
