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

    //ANIMATION CALLBACKS DONT WORK ON SCRIPTABLE OBJECTS
    /*
    /// <summary>
    /// Animation Event Callback when dodge animation begins
    /// </summary>
    public void OnDodgeStarted()
    {
        Player.PhysicsComponent.Velocity += Player.GetInput().normalized * dodgeForce;
        // Particle effects shaders, sounds etc...
    }

    /// <summary>
    /// Animation Event Callback when dodge animation ends
    /// </summary>
    public void OnDodgeEnded()
    {
        //When animation ends go back to player grounded
        stateMachine.Transition<PlayerGroundedState>();
    }*/
}
