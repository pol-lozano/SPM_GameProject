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
    [SerializeField] private ObjectPooler pool;
    [SerializeField] private OrbitCamera cam;
    
    private StateMachine stateMachine;
    private bool shootInput = false;
    private bool attackInput = false;
    private bool aimInput = false;

    

    public bool ShootInput { get => shootInput; set => shootInput = value; }
    public bool AttackInput { get => attackInput; set => attackInput = value; }
    public bool AimInput { get => aimInput; set => aimInput = value; }
    public CrossHairTarget CrossHair { get => crosshair; }

    public ObjectPooler GetObjectPooler() { return pool; }
    public Transform FirePoint { get => firePoint; set => firePoint = value; }
    public OrbitCamera GetCamera() { return cam; }

    private void Awake()
    {
        stateMachine = new StateMachine(this, states);
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

    private void OnShoot() => shootInput = true;
    private void OnAttack() => attackInput = true;
    private void OnAim() => aimInput = true;
    private void OnAimCanceled() => aimInput = false;

    public void SetCrosshair(bool b)
    {
        crosshairImage.SetActive(b);
    }
    
    


}
