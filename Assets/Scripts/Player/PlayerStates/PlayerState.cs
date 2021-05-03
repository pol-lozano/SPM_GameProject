//Author: Pol Lozano Llorens
using UnityEngine;

public abstract class PlayerState : State
{
    private CharacterController3D player;
    protected CharacterController3D Player => player = player != null ? player : (CharacterController3D)owner;

    protected int inputXFloatHash;
    protected int inputYFloatHash;
    protected int dodgeTriggerHash;
    protected int isDodgingBoolHash;
    protected int isGroundedBoolHash;

    public override void Initialize(StateMachine stateMachine, object owner)
    {
        base.Initialize(stateMachine, owner);
        InitializeAnimatorHashes();
    }

    private void InitializeAnimatorHashes()
    {
        inputXFloatHash = Animator.StringToHash("InputX");
        inputYFloatHash = Animator.StringToHash("InputY");
        dodgeTriggerHash = Animator.StringToHash("Dodge");
        isDodgingBoolHash = Animator.StringToHash("IsDodging");
        isGroundedBoolHash = Animator.StringToHash("IsGrounded");
    }

    public override void HandleUpdate() => Animate();
    private void Animate()
    {
        Vector3 input = Player.RawInput;
        Player.Animator.SetFloat(inputXFloatHash, input.x, 1f, Time.deltaTime * 10f);
        Player.Animator.SetFloat(inputYFloatHash, input.y, 1f, Time.deltaTime * 10f);
        Player.Animator.SetBool(isGroundedBoolHash, player.PhysicsComponent.IsGrounded);
    }

    /// <summary>
    /// Moves player and caps speed
    /// </summary>
    /// <param name="maxSpeed">speed to cap velocity at</param>
    protected void Move(float maxSpeed)
    {
        Vector3 input = Player.GetInput();

        //Accelerate
        if (input.magnitude > float.Epsilon)
            Player.PhysicsComponent.Accelerate(input, maxSpeed);
        else
            Player.PhysicsComponent.Decelerate();
    }

    public override void EvaluateTransitions()
    {
        if(Player.GetComponent<HealthComponent>().CurrentHealth <= 0)
        {
            stateMachine.Transition<PlayerDeath>();
        }
    }
}
