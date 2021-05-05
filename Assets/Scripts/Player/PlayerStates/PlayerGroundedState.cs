//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Grounded")]
public class PlayerGroundedState : PlayerState
{
    public float maxSpeed = 10f;

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        Move(maxSpeed);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (Player.DodgeInput && Player.Animator.GetBool("IsAttacking") == false) 
            stateMachine.Transition<PlayerDodgeState>();
        if (!Player.PhysicsComponent.IsGrounded) 
            stateMachine.Transition<PlayerFallingState>();
    }
}
