//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Dodge")]
public class PlayerDodgeState : PlayerState
{
    [SerializeField] private float dodgeForce;
    private float timeSinceLastDodge = 0;

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
        timeSinceLastDodge = Time.time - timeSinceLastDodge;
        Debug.Log("Time since last dodge: " + timeSinceLastDodge);

        Player.PhysicsComponent.AddForce(Player.GetInput().normalized * dodgeForce, ForceMode.Force);
        // Particle effects shaders, sounds etc...
    }

    /// <summary>
    /// Animation Event Callback when dodge animation ends
    /// </summary>
    public override void OnAnimationEnded()
    {
        //When animation ends go back to player grounded
        Player.Animator.SetBool(isDodgingBoolHash, false);
        Player.Animator.SetFloat(timeSinceLastDodgeFloatHash, timeSinceLastDodge);

        timeSinceLastDodge = Time.time;
        stateMachine.Transition<PlayerGroundedState>();
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
    }
}
