//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    [Header("Shooting Related Settings")]
    [SerializeField] private Transform firePoint;
    [SerializeField] private GameObject crosshairImage;
    [SerializeField] private CrossHairTarget crosshair;

    [SerializeField] private InputHandler input;
    [SerializeField] private CombatState[] states;

    private StateMachine stateMachine;

    //CrossHairTarget and Firepoint should be removed when we properly implement this
    public CrossHairTarget CrossHair => crosshair;
    public Transform FirePoint => firePoint;

    public Animator Animator { get; set; }

    public bool ShootInput { get; set; }
    public bool AttackInput { get; set; }
    public bool AimInput { get; set; }

    public MeleeWeapon meleeWeapon;

    private void Awake()
    {
        Animator = GetComponentInChildren<Animator>();
        meleeWeapon = GetComponentInChildren<MeleeWeapon>(); //TODO: Fix nicer
        stateMachine = new StateMachine(this, states);
    }

    public void OnAnimationStarted() => stateMachine?.OnAnimationStarted();
    public void OnAnimationEnded() => stateMachine?.OnAnimationEnded();

    private void Update() => stateMachine?.HandleUpdate();
    
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
