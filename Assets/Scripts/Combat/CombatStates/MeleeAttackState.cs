//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Melee")]
public class MeleeAttackState : CombatState
{ 
    private float timeSinceLastAttack = 0;

    public override void Enter()
    {
        //Send time since last attack and trigger attack animation based on that
        Player.Animator.SetTrigger(attackTriggerHash);
        Player.Animator.SetFloat(timeSinceLastAttackHash, timeSinceLastAttack);
    }

    public override void HandleUpdate()
    {
        timeSinceLastAttack += Time.deltaTime;
        Player.AttackInput = false;
        Player.ShootInput = false;
    }

    //Called by Animation Event in attack animation
    public override void OnAnimationStarted()
    {
        //Play attack sound
        timeSinceLastAttack = 0;
        //Begin listening for hits
        Player.meleeWeapon.Collider.enabled = true;

    }

    public override void OnAnimationEnded()
    {
        Player.meleeWeapon.Collider.enabled = false;
        //Stop listening for hits     
        stateMachine.Transition<IdleState>();
    }

}

