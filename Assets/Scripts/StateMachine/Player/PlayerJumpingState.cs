using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/PlayerAirState/Jumping")]
public class PlayerJumpingState : PlayerAirState
{
    public float jumpHeight = 5f;

    public override void Enter()
    {
        base.Enter();
        //Apply jump velocity
        Player.PhysicsComponent.AddForce(Vector3.up * PhysicsHelper.CalculateJumpVelocity(jumpHeight, Player.PhysicsComponent.Gravity));
        Player.JumpInput = false;
        //TODO: Play jump sound etc    
    }

    public override void Exit()
    {
        Player.JumpInput = false;
    }
}
