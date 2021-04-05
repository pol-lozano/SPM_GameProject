//Pol Lozano Llorens
using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class CharacterController3D : MonoBehaviour
{
    public InputHandler input;
    public Camera mainCamera;

    [Header("Movement Settings")]
    [SerializeField] private float maxSpeed = 7f;
    [SerializeField] private float jumpHeight = 5f;
    [SerializeField] private float acceleration = 50f;
    [SerializeField] private float deceleration = 45f;

    private Vector2 rawInput;
    private PhysicsComponent rb;

    private void Awake()
    {
        rb = GetComponent<PhysicsComponent>();
    }
    private void OnEnable()
    {
        input.moveEvent += OnMove;
        input.jumpEvent += Jump;
    }

    private void OnDisable()
    {
        input.moveEvent -= OnMove;
        input.jumpEvent -= Jump;
    }

    private void OnMove(Vector2 input)
    {
        rawInput = Vector2.ClampMagnitude(input, 1f);
    }

    private Vector3 GetInput()
    {
        return CameraDirection(rawInput);
    }

    private void Update()
    {
        Move();
    }

    private void Move()
    {
        Vector3 input = GetInput();

        //Accelerate
        if (input.magnitude > float.Epsilon) Accelerate(input);
        else Decelerate();

        //Perform actual movement
        transform.Translate(rb.Velocity * Time.deltaTime);
    }

    private void Jump()
    {
        if (rb.Grounded) rb.VelocityY += PhysicsHelper.CalculateJumpVelocity(jumpHeight, rb.Gravity);
    }

    private void Accelerate(Vector3 input)
    {
        rb.VelocityX = Mathf.MoveTowards(rb.VelocityX, input.x * maxSpeed, acceleration * Time.deltaTime);
        rb.VelocityZ = Mathf.MoveTowards(rb.VelocityZ, input.z * maxSpeed, acceleration * Time.deltaTime);
    }

    private void Decelerate()
    {
        rb.VelocityX = Mathf.MoveTowards(rb.VelocityX, 0, deceleration * Time.deltaTime);
        rb.VelocityZ = Mathf.MoveTowards(rb.VelocityZ, 0, deceleration * Time.deltaTime);
    }

    private Vector3 CameraDirection(Vector2 input)
    {
        Vector3 correctedHorizontal = mainCamera.transform.right;
        correctedHorizontal.y = 0f;
        correctedHorizontal.Normalize();
        Vector3 correctedVertical = mainCamera.transform.forward;
        correctedVertical.y = 0f;
        correctedVertical.Normalize();
        return input.x * correctedHorizontal + input.y * correctedVertical;
    }
}
