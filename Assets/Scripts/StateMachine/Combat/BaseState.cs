using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class BaseState : CombatState
{

    public override void Enter()
    {
        Debug.Log("Base");
    }
    public override void HandleUpdate()
    {


        if (Player.AttackInput)
            stateMachine.Transition<AttackState>();

        
        if (Player.AimInput)
            stateMachine.Transition<AimState>();
        
    }
}
