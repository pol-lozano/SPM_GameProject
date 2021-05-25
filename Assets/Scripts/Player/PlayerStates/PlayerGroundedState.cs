//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Grounded")]
public class PlayerGroundedState : PlayerState
{
    [SerializeField] private float maxSpeed = 10f;
    [SerializeField] private AudioData playerStepSound;

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        Move(maxSpeed);
    }

    public override void OnAnimationEnded()
    {
        base.OnAnimationEnded();
        //Play step sound
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(playerStepSound, Player.AudioSource));
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
