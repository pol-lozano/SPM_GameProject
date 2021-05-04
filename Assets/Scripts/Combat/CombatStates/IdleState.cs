using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Idle")]
public class IdleState : CombatState
{
    public override void EvaluateTransitions()
    {
        if (Player.AttackInput && Player.SwordPickUp) 
            stateMachine.Transition<MeleeAttackState>();
        if (Player.AimInput && Player.CrossBowPickUp) 
            stateMachine.Transition<AimState>();
    }
}
