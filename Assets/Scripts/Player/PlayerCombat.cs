using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    public InputHandler input;
    public CombatState[] states;

    private StateMachine stateMachine;
    
    [SerializeField] private ObjectPooler pool;
    [SerializeField] private GameObject crosshair;
    [SerializeField] private Camera cam;
    [SerializeField] private Transform firePoint;
    private bool shootInput = false;
    private bool attackInput = false;
    private bool aimInput = false;

    private Vector3 crossHairTarget;
    private Ray chRay;
    private RaycastHit chHitInfo;

    public bool ShootInput { get => shootInput; set => shootInput = value; }
    public bool AttackInput { get => attackInput; set => attackInput = value; }
    public bool AimInput { get => aimInput; set => aimInput = value; }

    public ObjectPooler GetObjectPooler() { return pool; }
    public Transform FirePoint { get => firePoint; set => firePoint = value; }
    public Camera GetCamera() { return cam; }
        
    public Vector3 GetCrossHairTarget() { return crossHairTarget; }

    private void Awake()
    {
        stateMachine = new StateMachine(this, states);
    }

    private void Update()
    {
        stateMachine.HandleUpdate();
        SetCrossHairTarget();
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
        crosshair.SetActive(b);
    }

    private void SetCrossHairTarget()
    {
        
        chRay.origin = cam.transform.position;
        chRay.direction = cam.transform.forward;
        Physics.Raycast(chRay, out chHitInfo);
        crossHairTarget = chHitInfo.point;
    }



}
