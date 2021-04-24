//Author: Pol Lozano Llorens
using System;
using UnityEngine;

[RequireComponent(typeof(PhysicsComponent))]
public class CharacterController3D : MonoBehaviour
{
    private static CharacterController3D player;
    public static CharacterController3D Player
    {
        get
        {
            if (player == null)
            {
                player = FindObjectOfType<CharacterController3D>();
            }
            return player;
        }
    }

    [SerializeField] private InputHandler input;
    [SerializeField] private PlayerState[] states;

    private StateMachine stateMachine;

    public PhysicsComponent PhysicsComponent { get; set; }
    public Animator Animator { get; set; }
    public Vector2 RawInput { get; private set; }
    public bool DodgeInput { get; set; }

    private void Awake()
    {
        PhysicsComponent = GetComponent<PhysicsComponent>();
        Animator = GetComponentInChildren<Animator>();

        stateMachine = new StateMachine(this, states);
    }

    private void OnEnable()
    {
        input.moveEvent += OnMove;
        input.dodgeEvent += OnDodge;
    }

    private void OnDisable()
    {
        input.moveEvent -= OnMove;
        input.dodgeEvent -= OnDodge;
    }

    private void OnMove(Vector2 input) => RawInput = Vector2.ClampMagnitude(input, 1f);
    private void OnDodge() => DodgeInput = true;

    public Vector3 GetInput()
    {
        Vector3 correctedHorizontal = Camera.main.transform.right;
        correctedHorizontal.y = 0f;
        correctedHorizontal.Normalize();
        Vector3 correctedVertical = Camera.main.transform.forward;
        correctedVertical.y = 0f;
        correctedVertical.Normalize();
        return RawInput.x * correctedHorizontal + RawInput.y * correctedVertical;
    }

    /// <summary>
    /// Animation Event Callback when dodge animation begins
    /// </summary>
    public void OnDodgeStarted()
    {
        Player.PhysicsComponent.Velocity += Player.GetInput().normalized * 20;
        // Particle effects shaders, sounds etc...
    }

    /// <summary>
    /// Animation Event Callback when dodge animation ends
    /// </summary>
    public void OnDodgeEnded()
    {
        //When animation ends go back to player grounded
        stateMachine.Transition<PlayerGroundedState>();
    }

    private void Update() => stateMachine?.HandleUpdate();
    private void FixedUpdate() => stateMachine?.HandleFixedUpdate();

}
