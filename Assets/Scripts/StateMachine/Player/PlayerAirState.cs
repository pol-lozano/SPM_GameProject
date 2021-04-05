using UnityEngine;

public abstract class PlayerAirState : PlayerState
{
    public float airSpeed = 10f;
    public float acceleration = 50f;
    public float deceleration = 45f;

    public override void HandleUpdate()
    {
        //Apply air movement velocity
        Vector3 input = Player.GetInput();

        //Accelerate
        if (input.magnitude > float.Epsilon) Accelerate(input);
        else Decelerate();
    }

    public override void Exit()
    {
        //TODO: Maybe play landing sound or particles?
    }

    public override void EvaluateTransitions()
    {
        if (Player.PhysicsComponent.IsGrounded) stateMachine.Transition<PlayerGroundedState>();
    }

    private void Accelerate(Vector3 input)
    {
        Player.PhysicsComponent.VelocityX = Mathf.MoveTowards(Player.PhysicsComponent.VelocityX, input.x * airSpeed, acceleration * Time.deltaTime);
        Player.PhysicsComponent.VelocityZ = Mathf.MoveTowards(Player.PhysicsComponent.VelocityZ, input.z * airSpeed, acceleration * Time.deltaTime);
    }

    private void Decelerate()
    {
        Player.PhysicsComponent.VelocityX = Mathf.MoveTowards(Player.PhysicsComponent.VelocityX, 0, deceleration * Time.deltaTime);
        Player.PhysicsComponent.VelocityZ = Mathf.MoveTowards(Player.PhysicsComponent.VelocityZ, 0, deceleration * Time.deltaTime);
    }
}
