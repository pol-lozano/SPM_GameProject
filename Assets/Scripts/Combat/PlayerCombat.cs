using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    [SerializeField] private InputHandler input;
    [SerializeField] private CombatState[] states;

    [Space(5)]
    [Header("Shooting Related Settings")]
    [SerializeField] private Transform firePoint;
    [SerializeField] private GameObject crosshairImage;
    [SerializeField] private CrossHairTarget crosshair;
    
    private StateMachine stateMachine;

    //CrossHairTarget and Firepoint should be removed when we properly implement this
    public CrossHairTarget CrossHair => crosshair;
    public Transform FirePoint => firePoint;

    public bool ShootInput { get; set; }
    public bool AttackInput { get; set; }
    public bool AimInput { get; set; }
    public OrbitCamera Camera { get; set; }

    private void Awake()
    {
        stateMachine = new StateMachine(this, states);
        Camera = GameManager.instance.Camera;
    }

    private void Update()
    {
        stateMachine.HandleUpdate();
    }

    private void OnEnable()
    {
        input.shootEvent += OnShoot;
        input.attackEvent += OnAttack;
        input.aimEvent += OnAim;
        input.aimEventCanceled += OnAimCanceled;
    }

    private void OnDisable()
    {
        input.shootEvent -= OnShoot;
        input.attackEvent -= OnAttack;
        input.aimEvent -= OnAim;
        input.aimEventCanceled -= OnAimCanceled;
    }

    private void OnShoot() => ShootInput = true;
    private void OnAttack() => AttackInput = true;
    private void OnAim() => AimInput = true;
    private void OnAimCanceled() => AimInput = false;

    //This should be done in UI System with events
    public void SetCrosshair(bool b)
    {
        crosshairImage.SetActive(b);
    }
}
