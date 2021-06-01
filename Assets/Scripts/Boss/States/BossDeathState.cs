
using UnityEngine;
[CreateAssetMenu(menuName =("BossState/Death"))]
public class BossDeathState : BossState
{
    public override void Enter()
    {
        base.Enter();
        BossController.Animator.SetTrigger("Death");
        BossController.RigBuilder.layers[0].active = false;
        BossController.MeleeWeapon.Collider.enabled = false;
    }
}
