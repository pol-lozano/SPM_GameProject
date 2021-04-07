using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu()]
public class AimState : CombatState
{
    
    public override void Enter()
    {
        Debug.Log("AIM");
        Player.SetCrosshair(true);
    }
    public override void HandleUpdate()
    {
        base.HandleUpdate();
        //vill man sakta ner tiden lite när man siktar... asså typ 0.95%??

    }

    public override void EvaluateTransitions()
    {
        if (Player.ShootInput) stateMachine.Transition<ShootState>();
        if (!Player.AimInput) stateMachine.Transition<IdleState>();
    }

    public override void Exit()
    {
        Debug.Log("EXIT AIM");
        Player.SetCrosshair(false);
    }

}
