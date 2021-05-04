//Pol Lozano Llorens
using System;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PhysicsComponent))]
public class GodMode : MonoBehaviour
{
    [HideInInspector] public Animator Animator;

    public float speed;
    public InputHandler input;
    public Transform playerMesh;
    public Camera mainCamera;


    public Vector2 rawInput;
    public bool dodgeInput;

    private bool fly;
    private bool sink;

    private void Awake()
    {

        Animator = GetComponentInChildren<Animator>();
    }

    private void OnEnable()
    {

        gameObject.GetComponent<HealthComponent>().enabled = false;
        PlayerCombat.Player.PickUpObject(true);
        PlayerCombat.Player.PickUpObject(false);
        input.moveEvent += OnMove;
        input.dodgeEvent += OnDodge;
        input.flyEvent += OnFly;
        input.flyEventCanceled += OnFlyCancel;
        input.sinkEvent += OnSink;
        input.sinkEventCanceled += OnSinkCancel;
    }

    private void OnDisable()
    {
        gameObject.GetComponent<HealthComponent>().enabled = true;
        input.moveEvent -= OnMove;
        input.dodgeEvent -= OnDodge;
        input.flyEvent -= OnFly;
        input.flyEventCanceled -= OnFlyCancel;
        input.sinkEvent -= OnSink;
        input.sinkEventCanceled -= OnSinkCancel;
    }

    private void OnMove(Vector2 input) => rawInput = Vector2.ClampMagnitude(input, 1f);
    private void OnDodge() => dodgeInput = true;

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

    private void Update()
    {
        Move();
    }


    void Move()
    {
        Vector3 input = GetInput();
        //Accelerate
        if (input.magnitude > float.Epsilon)
        {
            transform.position += input * speed * Time.deltaTime;

        }

        if (fly)
            transform.position += Vector3.up * (1 * speed * Time.deltaTime);

        if (sink)
            transform.position -= Vector3.up * (1 * speed * Time.deltaTime);
    }

    private void OnFly(){ fly = true; }
    private void OnFlyCancel(){ fly = false; }

    private void OnSink(){ sink = true; }
    private void OnSinkCancel(){ sink = false; }
}
