using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class MeleeAttackState : CombatState
{
    [SerializeField] private float attackCooldown;
    [SerializeField] private float attackTimer;
    public override void Enter()
    {
        Debug.Log("Attack");
        //logik för attack och animationer
        attackCooldown = attackTimer;
    }

    public override void HandleUpdate()
    {
        attackCooldown -= Time.deltaTime;
        Player.AttackInput = false;
        Player.ShootInput = false;
    }

    public override void EvaluateTransitions()
    {
        if (attackCooldown < 0) stateMachine.Transition<IdleState>();
    }
}
