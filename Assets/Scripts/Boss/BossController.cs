using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Animations.Rigging;

[RequireComponent(typeof(HealthComponent))]
public class BossController : MonoBehaviour
{
    private StateMachine stateMachine;
    [SerializeField] private State[] states;

    public Animator Animator { get; private set; }
    public NavMeshAgent Agent { get; private set; }
    public HealthComponent HealthComponent { get; private set; }
    public CharacterController3D Player { get; private set; }

    public RigBuilder RigBuilder;
    public MeleeWeapon MeleeWeapon;

    void Awake()
    {
        Player = CharacterController3D.Player;
        Animator = GetComponent<Animator>();
        Agent = GetComponent<NavMeshAgent>();
        HealthComponent = GetComponent<HealthComponent>();

        stateMachine = new StateMachine(this, states);
    }

    public void Update() => stateMachine?.HandleUpdate();
    public void OnAnimationStarted() => stateMachine?.OnAnimationStarted();
    public void OnAnimationEnded() => stateMachine?.OnAnimationEnded();
}