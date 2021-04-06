using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class AttackState : CombatState
{
    [SerializeField] private float attackCooldown;
    [SerializeField] private float attackTimer;
    public override void Enter()
    {
        Debug.Log("Attack");
        //logik för attack
        attackCooldown = attackTimer;
        
    }

    public override void HandleUpdate()
    {
        attackCooldown -= Time.deltaTime;
        Player.AttackInput = false;

        if (attackCooldown < 0)
            stateMachine.Transition<BaseState>();
    }
}
