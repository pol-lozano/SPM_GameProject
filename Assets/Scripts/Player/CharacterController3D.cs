//Pol Lozano Llorens
using System;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PhysicsComponent))]
public class CharacterController3D : MonoBehaviour
{
    [HideInInspector] public PhysicsComponent PhysicsComponent;
    [HideInInspector] public Animator Animator;

    public InputHandler input;
    public Transform playerMesh;
    public Camera mainCamera;

    public PlayerState[] states;
    private StateMachine stateMachine;

    public Vector2 rawInput;

    private void Awake()
    {
        PhysicsComponent = GetComponent<PhysicsComponent>();
        Animator = GetComponentInChildren<Animator>();
        stateMachine = new StateMachine(this, states);
    }

    private void OnEnable()
    {
        input.moveEvent += OnMove;   
    }

    private void OnDisable()
    {
        input.moveEvent -= OnMove;      
    }

    private void OnMove(Vector2 input) => rawInput = Vector2.ClampMagnitude(input, 1f);

    public Vector3 GetInput()
    {
        Vector3 correctedHorizontal = mainCamera.transform.right;
        correctedHorizontal.y = 0f;
        correctedHorizontal.Normalize();
        Vector3 correctedVertical = mainCamera.transform.forward;
        correctedVertical.y = 0f;
        correctedVertical.Normalize();
        return rawInput.x * correctedHorizontal + rawInput.y * correctedVertical;
    }

    private void Update() => stateMachine.HandleUpdate();
    private void FixedUpdate() => stateMachine.HandleFixedUpdate();

}
