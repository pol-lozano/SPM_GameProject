using UnityEngine;
using UnityEngine.AI;

public class AIController : MonoBehaviour
{
    private StateMachine stateMachine;
    [SerializeField] private State[] states;
    [SerializeField] private LayerMask visionMask;
    [SerializeField] private AIPath path;
    [SerializeField] private Transform attackPoint;

    [HideInInspector] public MeshRenderer Renderer;
    [HideInInspector] public NavMeshAgent Agent;
    [HideInInspector] public Animator Animator;
    [HideInInspector] public HealthComponent HealthComponent;

    [SerializeField] private Rigidbody[] rigidBodies;


    public CharacterController3D Player { get; set; }
    public Transform AttackPoint { get => attackPoint; }


    public LayerMask VisionMask { get => visionMask; }

    private void Awake()
    {
       
        Renderer = GetComponent<MeshRenderer>();
        Agent = GetComponent<NavMeshAgent>();
        Animator = GetComponent<Animator>();
        HealthComponent = GetComponent<HealthComponent>();
       
        DeactivateRagdoll();

        stateMachine = new StateMachine(this, states);
    }

    private void Start()
    {

        Player = CharacterController3D.Player;
    }

    public void DeactivateRagdoll()
    {
        foreach (Rigidbody rb in rigidBodies) rb.isKinematic = true;
        Animator.enabled = true;
    }

    public void ActivateRagdoll()
    {
        foreach (Rigidbody rb in rigidBodies) rb.isKinematic = false;
        Animator.enabled = false;
    }

    public void Update() => stateMachine?.HandleUpdate();

    public void OnAnimationStarted() => stateMachine?.OnAnimationStarted();
    public void OnAnimationEnded() => stateMachine?.OnAnimationEnded();

    public AIPath GetPath() 
    { 
        
        return path; 
    }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        if (!Application.isPlaying || Agent == null) return;

        Gizmos.color = Color.green;
        Gizmos.DrawLine(transform.position, transform.position + Agent.velocity);

        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, transform.position + Agent.desiredVelocity);
       
        Gizmos.color = Color.magenta;
        var path = Agent.path;
        Vector3 prevCorner = transform.position;
        foreach (var corner in path.corners)
        {
            Gizmos.DrawLine(prevCorner, corner);
            Gizmos.DrawSphere(corner, .2f);
            prevCorner = corner;
        }       
    }
#endif
}
