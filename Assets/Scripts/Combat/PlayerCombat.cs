//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    public AudioSource AudioSource { get; private set; }

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

    [SerializeField] private MeleeWeapon meleeWeapon;
    [SerializeField] private GameObject crossbow;

    [SerializeField] private ParticleSystem trail;

    private StateMachine stateMachine;

    //CrossHairTarget and Firepoint should be removed when we properly implement this
    public CrossHairTarget CrossHair => crosshair;
    public Transform FirePoint => firePoint;

    public Animator Animator { get; set; }

    public bool ShootInput { get; set; }
    public bool AttackInput { get; set; }
    public bool AimInput { get; set; }

    [SerializeField] private bool swordPickup;
    [SerializeField] private bool crossbowPickup;

    public bool SwordPickup { get => swordPickup; }
    public bool CrossbowPickup { get => crossbowPickup; }
    public ParticleSystem Trail { get => trail; }
    public MeleeWeapon MeleeWeapon { get => meleeWeapon; }

    private void Awake()
    {
        meleeWeapon.gameObject.SetActive(false);
        crossbow.SetActive(false);

        AudioSource = GetComponent<AudioSource>();

        Animator = GetComponentInChildren<Animator>();
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

    public void PickUpObject(bool isSword)
    {
        if (isSword)
            swordPickup = true;
        else
            crossbowPickup = true;

        AttackInput = false;
        ShootInput = false;
        AimInput = false;

        meleeWeapon.gameObject.SetActive(swordPickup);
        crossbow.SetActive(crossbowPickup);
    }
}
