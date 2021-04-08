using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class IdleState : CombatState
{

    public override void Enter()
    {

    }
    public override void HandleUpdate()
    {

    }

    public override void EvaluateTransitions()
    {
        if (Player.AttackInput) stateMachine.Transition<MeleeAttackState>();
        if (Player.AimInput) stateMachine.Transition<AimState>();
    }
}
