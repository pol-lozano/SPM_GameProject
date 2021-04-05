using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Grounded")]
public class PlayerGroundedState : PlayerState
{
    public float maxSpeed = 10f;
    public float acceleration = 50f;
    public float deceleration = 45f;

    public override void Enter()
    {
        base.Enter();
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        Vector3 input = Player.GetInput();

        //Accelerate
        if (input.magnitude > float.Epsilon) Accelerate(input);
        else Decelerate();
    }

    public override void EvaluateTransitions()
    {
        if (Player.PhysicsComponent.IsGrounded && Player.JumpInput) stateMachine.Transition<PlayerJumpingState>();
        if (!Player.PhysicsComponent.IsGrounded) stateMachine.Transition<PlayerFallingState>();
    }

    private void Accelerate(Vector3 input)
    {
        Player.PhysicsComponent.VelocityX = Mathf.MoveTowards(Player.PhysicsComponent.VelocityX, input.x * maxSpeed, acceleration * Time.deltaTime);
        Player.PhysicsComponent.VelocityZ = Mathf.MoveTowards(Player.PhysicsComponent.VelocityZ, input.z * maxSpeed, acceleration * Time.deltaTime);
    }

    private void Decelerate()
    {
        Player.PhysicsComponent.VelocityX = Mathf.MoveTowards(Player.PhysicsComponent.VelocityX, 0, deceleration * Time.deltaTime);
        Player.PhysicsComponent.VelocityZ = Mathf.MoveTowards(Player.PhysicsComponent.VelocityZ, 0, deceleration * Time.deltaTime);
    }
}
