using UnityEngine;

[CreateAssetMenu(menuName = ("BossState/AttackState"))]
public class BossAttackState : BossState
{
    [SerializeField] private ShakeEventData attackShake;
    [SerializeField] private AudioData audioData;
    public override void Enter()
    {
        base.Enter();
        BossController.Agent.ResetPath();
        BossController.Animator.SetTrigger("Attack");
        BossController.RigBuilder.layers[0].active = false;
    }

    public override void OnAnimationStarted()
    {
        //Play sound and effects
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(audioData, bossController.AudioSource));
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(attackShake));
        BossController.MeleeWeapon.Collider.enabled = true;
    }

    public override void OnAnimationEnded()
    {
        BossController.RigBuilder.layers[0].active = true;
        BossController.MeleeWeapon.Collider.enabled = false;
        stateMachine.Transition<BossTargetingState>();
    }
}
