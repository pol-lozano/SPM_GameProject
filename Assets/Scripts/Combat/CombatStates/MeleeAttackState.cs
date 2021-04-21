using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class MeleeAttackState : CombatState
{
    
    private bool attacking = true;
    private float timeSinceLastAttack = 0;

    /*FÖR TEST*/
    

    public override void Enter()
    {
        //Send time since last attack and trigger attack animation based on that
         Player.swordanim.SetTrigger("attack");
    }

    public override void HandleUpdate()
    {
        timeSinceLastAttack += Time.deltaTime;
        Player.AttackInput = false;
        Player.ShootInput = false;
        if (Player.weapon.attackEnded == true)
            OnEndAttack();

    }

    //Called by Animation Event in attack animation
    public void OnBeginAttack()
    {
        //Play attack sound
       
        attacking = true;
        //Begin listening for hits
    }

    public void OnEndAttack()
    {
        //Stop listening for hits
        
        attacking = false; 
    }

    public override void EvaluateTransitions()
    {
        if(attacking == false)
            stateMachine.Transition<IdleState>();
    }
}

