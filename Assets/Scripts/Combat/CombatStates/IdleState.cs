using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Idle")]
public class IdleState : CombatState
{
    public override void EvaluateTransitions()
    {
        if (Player.AttackInput && Player.SwordPickup) 
            stateMachine.Transition<MeleeAttackState>();
        if (Player.AimInput && Player.CrossbowPickup) 
            stateMachine.Transition<AimState>();
    }
}
