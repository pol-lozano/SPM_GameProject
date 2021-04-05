//Pol Lozano Llorens
using System;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PhysicsComponent))]
public class CharacterController3D : MonoBehaviour
{
    public InputHandler input;
    public PhysicsComponent PhysicsComponent;
    public Camera mainCamera;

    public PlayerState[] states;
    private StateMachine stateMachine;

    private Vector2 rawInput;
    private bool jumpInput = false;
    public bool JumpInput { get => jumpInput; set => jumpInput = value; }

    private void Awake()
    {
        PhysicsComponent = GetComponent<PhysicsComponent>();
        stateMachine = new StateMachine(this, states);
    }

    private void OnEnable()
    {
        input.moveEvent += OnMove;
        input.jumpEvent += OnJump;
        input.jumpCanceledEvent += OnJumpCanceled;
    }

    private void OnDisable()
    {
        input.moveEvent -= OnMove;
        input.jumpEvent -= OnJump;
        input.jumpCanceledEvent -= OnJumpCanceled;
    }

    private void OnMove(Vector2 input) => rawInput = Vector2.ClampMagnitude(input, 1f);
    private void OnJump() => jumpInput = true;
    private void OnJumpCanceled() => jumpInput = false;

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
}
