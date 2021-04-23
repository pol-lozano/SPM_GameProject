//Author: Pol Lozano Llorens
public abstract class PlayerAirState : PlayerState
{
    public float airSpeed = 10f;

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        Move(airSpeed);
    }

    public override void Exit()
    {
        //TODO: Maybe play landing sound or particles?
    }

    public override void EvaluateTransitions()
    {
        if (Player.PhysicsComponent.IsGrounded)
            stateMachine.Transition<PlayerGroundedState>();
    }
}
