//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Melee")]
public class MeleeAttackState : CombatState
{ 
    private bool attacking = false;
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
    /*
    //Called by Animation Event in attack animation
    public void OnBeginAttack()
    {
        //Play attack sound
        timeSinceLastAttack = 0;
        attacking = true;
        //Begin listening for hits
    }

    public void OnEndAttack()
    {
        //Stop listening for hits
        
        attacking = false; 
    }*/

    public override void EvaluateTransitions()
    {
        if(attacking == false)
            stateMachine.Transition<IdleState>();
    }
}

