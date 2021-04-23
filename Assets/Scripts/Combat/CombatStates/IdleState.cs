using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Idle")]
public class IdleState : CombatState
{
    public override void EvaluateTransitions()
    {
        if (Player.AttackInput) 
            stateMachine.Transition<MeleeAttackState>();
        if (Player.AimInput) 
            stateMachine.Transition<AimState>();
    }
}
