using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Animations.Rigging;

[RequireComponent(typeof(HealthComponent))]
public class BossController : MonoBehaviour
{
    private StateMachine stateMachine;
    [SerializeField] private State[] states;

    private static BossController boss;
    public static BossController Boss
    {
        get
        {
            if (boss == null)
            {
                boss = FindObjectOfType<BossController>();
            }
            return boss;
        }
    }

    public Animator Animator { get; private set; }
    public NavMeshAgent Agent { get; private set; }
    public HealthComponent HealthComponent { get; private set; }
    public CharacterController3D Player { get;  set; }
    public Vector3 StartPosition { get; private set; }

    public RigBuilder RigBuilder;
    public MeleeWeapon MeleeWeapon;
    public ChainIKConstraint headLookConstraint;
    public Animator BossDoorAnimator;

    void Start()
    {
        Player = CharacterController3D.Player;
        StartPosition = transform.position;
        headLookConstraint.data.target.position = Player.transform.position;
        headLookConstraint.data.target.parent = Player.transform;
        Animator = GetComponent<Animator>();
        Agent = GetComponent<NavMeshAgent>();
        HealthComponent = GetComponent<HealthComponent>();

        stateMachine = new StateMachine(this, states);
    }

    public void Update() => stateMachine?.HandleUpdate();
    public void OnAnimationStarted() => stateMachine?.OnAnimationStarted();
    public void OnAnimationEnded() => stateMachine?.OnAnimationEnded();
}