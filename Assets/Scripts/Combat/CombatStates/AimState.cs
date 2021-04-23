//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Aiming")]
public class AimState : CombatState
{   
    public override void Enter()
    {
        Player.SetCrosshair(true);
        Player.Animator.SetBool(isAimingHash, true);
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        //vill man sakta ner tiden lite när man siktar... asså typ 0.95%??
        //Maybe zoom in camera
    }

    public override void EvaluateTransitions()
    {
        if (!Player.AimInput)
            stateMachine.Transition<IdleState>();
        if (Player.AttackInput) 
            stateMachine.Transition<ShootState>();
    }

    public override void Exit()
    {
        Player.SetCrosshair(false);
        Player.Animator.SetBool(isAimingHash,false);
    }
}
