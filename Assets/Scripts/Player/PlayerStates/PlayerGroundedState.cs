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
        if (Player.DodgeInput) 
            stateMachine.Transition<PlayerDodgeState>();
        if (!Player.PhysicsComponent.IsGrounded) 
            stateMachine.Transition<PlayerFallingState>();
    }
}
