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
        Player.TurnOnCrosshair();
    }
    public override void HandleUpdate()
    {
        base.HandleUpdate();
        //vill man sakta ner tiden lite när man siktar??

        if (Player.ShootInput)
        {
            Player.TurnOffCrosshair();
            stateMachine.Transition<ShootState>();
        }
            

        if (!Player.AimInput)
        {
            Player.TurnOffCrosshair();
            stateMachine.Transition<BaseState>();
        }
            
    }

}
