//Author: Pol Lozano Llorens
using UnityEngine;

public abstract class PlayerState : State
{
    private CharacterController3D player;
    protected CharacterController3D Player => player = player != null ? player : (CharacterController3D)owner;

    protected int inputXHash;
    protected int inputYHash;
    protected int dodgeTriggerHash;
    protected int fallingTriggerHash;

    public override void Initialize(StateMachine stateMachine, object owner)
    {
        base.Initialize(stateMachine, owner);
        InitializeAnimatorHashes();
    }

    private void InitializeAnimatorHashes()
    {
        inputXHash = Animator.StringToHash("InputX");
        inputYHash = Animator.StringToHash("InputY");
        dodgeTriggerHash = Animator.StringToHash("Dodge");
        fallingTriggerHash = Animator.StringToHash("Falling");
    }

    public override void HandleUpdate() => Animate();
    private void Animate()
    {
        Vector3 input = Player.RawInput;
        Player.Animator.SetFloat(inputXHash, input.x, 1f, Time.deltaTime * 10f);
        Player.Animator.SetFloat(inputYHash, input.y, 1f, Time.deltaTime * 10f);
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
}
