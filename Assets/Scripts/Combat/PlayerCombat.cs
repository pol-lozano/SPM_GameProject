//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    private static PlayerCombat player;
    public static PlayerCombat Player
    {
        get
        {
            if (player == null)
            {
                player = FindObjectOfType<PlayerCombat>();
            }
            return player;
        }
    }

    [Header("Shooting Related Settings")]
    [SerializeField] private Transform firePoint;
    [SerializeField] private GameObject crosshairImage;
    [SerializeField] private CrossHairTarget crosshair;

    [SerializeField] private InputHandler input;
    [SerializeField] private CombatState[] states;

    private bool crossBowPickUp = false;
    private bool swordPickUp = false;

    private StateMachine stateMachine;

    //CrossHairTarget and Firepoint should be removed when we properly implement this
    public CrossHairTarget CrossHair => crosshair;
    public Transform FirePoint => firePoint;

    public Animator Animator { get; set; }

    public bool ShootInput { get; set; }
    public bool AttackInput { get; set; }
    public bool AimInput { get; set; }
    public bool SwordPickUp { get => swordPickUp; }
    public bool CrossBowPickUp { get => crossBowPickUp; }

    [SerializeField] private MeleeWeapon meleeWeapon;
    [SerializeField] private GameObject crossbow;

    private void Awake()
    {
        meleeWeapon.gameObject.SetActive(false);
        crossbow.SetActive(false);

        Animator = GetComponentInChildren<Animator>();
        stateMachine = new StateMachine(this, states);
    }
    public MeleeWeapon MeleeWeapon { get => meleeWeapon; }
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

    private void OnShoot() { if(AimInput) ShootInput = true; }
    private void OnAttack() => AttackInput = true;
    private void OnAim() => AimInput = true;
    private void OnAimCanceled() => AimInput = false;

    //This should be done in UI System with events
    public void SetCrosshair(bool b)
    {
        crosshairImage.SetActive(b);
    }

    public void PickUpObject(bool isSword)
    {
        if (isSword)
            swordPickUp = true;
        else
            crossBowPickUp = true;

        ShootInput = false;
        AimInput = false;
        AttackInput = false;

        meleeWeapon.gameObject.SetActive(swordPickUp);
        crossbow.SetActive(crossBowPickUp);

    }

}
