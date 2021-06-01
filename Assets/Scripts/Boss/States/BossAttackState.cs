using UnityEngine;

[CreateAssetMenu(menuName = ("BossState/AttackState"))]
public class BossAttackState : BossState
{
    [SerializeField] private ShakeEventData attackShake;
    public override void Enter()
    {
        base.Enter();
        BossController.Animator.SetTrigger("Attack");
        BossController.RigBuilder.layers[0].active = false;
    }

    public override void OnAnimationStarted()
    {
        //Play sound and effects
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
