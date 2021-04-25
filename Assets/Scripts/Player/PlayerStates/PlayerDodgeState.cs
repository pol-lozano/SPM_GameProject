//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Dodge")]
public class PlayerDodgeState : PlayerState
{
    [SerializeField] private float dodgeForce;

    public override void Enter() => Dodge();

    private void Dodge()
    {
            Player.DodgeInput = false;
            Player.Animator.SetTrigger(dodgeTriggerHash);
    }

    /// <summary>
    /// Animation Event Callback when dodge animation begins
    /// </summary>
    public override void OnAnimationStarted()
    {
        Player.Animator.SetBool(isDodgingBoolHash, true);
        Player.PhysicsComponent.Velocity += Player.GetInput().normalized * dodgeForce;
        // Particle effects shaders, sounds etc...
    }

    /// <summary>
    /// Animation Event Callback when dodge animation ends
    /// </summary>
    public override void OnAnimationEnded()
    {
        //When animation ends go back to player grounded
        Player.Animator.SetBool(isDodgingBoolHash, false);
        stateMachine.Transition<PlayerGroundedState>();
    }
}
