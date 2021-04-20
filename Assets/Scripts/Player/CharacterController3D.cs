//Pol Lozano Llorens
using System;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PhysicsComponent))]
public class CharacterController3D : MonoBehaviour
{
    public static CharacterController3D Player { get; private set; }

    [SerializeField] private InputHandler input;
    [SerializeField] private PlayerState[] states;

    //TODO: REMOVE THIS AND FIX PROPER ANIMATION SYSTEM
    [SerializeField] private Transform playerMesh; //Should fix better later
    public Transform PlayerMesh => playerMesh;

    private StateMachine stateMachine;

    public PhysicsComponent PhysicsComponent { get; set; }
    public Animator Animator { get; set; }
    public OrbitCamera Camera { get; set; }

    public Vector2 rawInput;
    public bool dodgeInput;

    private void Awake()
    {
        Player = this;

        PhysicsComponent = GetComponent<PhysicsComponent>();
        Animator = GetComponentInChildren<Animator>();
        Camera = OrbitCamera.Camera;

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

    private void OnMove(Vector2 input) => rawInput = Vector2.ClampMagnitude(input, 1f);
    private void OnDodge() => dodgeInput = true;

    public Vector3 GetInput()
    {
        Vector3 correctedHorizontal = Camera.transform.right;
        correctedHorizontal.y = 0f;
        correctedHorizontal.Normalize();
        Vector3 correctedVertical = Camera.transform.forward;
        correctedVertical.y = 0f;
        correctedVertical.Normalize();
        return rawInput.x * correctedHorizontal + rawInput.y * correctedVertical;
    }

    private void Update() => stateMachine?.HandleUpdate();
    private void FixedUpdate() => stateMachine?.HandleFixedUpdate();

}
