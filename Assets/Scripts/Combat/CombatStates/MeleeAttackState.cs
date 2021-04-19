using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class MeleeAttackState : CombatState
{
    [SerializeField] private MeleeWeapon weapon;
    private bool attacking = false;
    private float timeSinceLastAttack = 0;

    public override void Enter()
    {
        //Send time since last attack and trigger attack animation based on that
    }

    public override void HandleUpdate()
    {
        timeSinceLastAttack += Time.deltaTime;
        Player.AttackInput = false;
        Player.ShootInput = false;
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
        stateMachine.Transition<IdleState>();
    }
}

