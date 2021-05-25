//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Dodge")]
public class PlayerDodgeState : PlayerState
{
    [SerializeField] private float dodgeForce;
    [SerializeField] private AudioData playerDodgeSound;

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
        timeSinceLastDodge = Time.time - timeSinceLastDodge;

        Player.Animator.SetBool(isDodgingBoolHash, true);
        Vector3 input = Player.GetInput();
        Vector3 dodgeDirection = (input.magnitude > float.Epsilon) ? input.normalized : -Player.PlayerMesh.transform.forward.normalized;
        Player.PhysicsComponent.AddForce(dodgeDirection * dodgeForce, ForceMode.Force);

        // Particle effects shaders, sounds etc...
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(playerDodgeSound, Player.AudioSource));
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
