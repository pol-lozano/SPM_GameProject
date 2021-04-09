using UnityEngine;
using UnityEngine.AI;

public class AIController : MonoBehaviour
{
    public State[] states;
    private StateMachine stateMachine;
    public Transform[] patrols;
    [SerializeField] private AIPath path;

    [HideInInspector] public MeshRenderer Renderer;
    [HideInInspector] public NavMeshAgent Agent;
    [HideInInspector] public Animator Animator;
    [HideInInspector] public HealthComponent HealthComponent;

    Rigidbody[] rigidBodies;

    public LayerMask visionMask;
    public CharacterController3D player;
    public ObjectPooler pooler;
    public bool isStunned = false;


    private void Awake()
    {
        Renderer = GetComponent<MeshRenderer>();
        Agent = GetComponent<NavMeshAgent>();
        Animator = GetComponent<Animator>();
        HealthComponent = GetComponent<HealthComponent>();

        rigidBodies = GetComponentsInChildren<Rigidbody>();
        DeactivateRagdoll();

        stateMachine = new StateMachine(this, states);
        foreach(var rb in rigidBodies)
        {
            HitBox hitBox = rb.gameObject.AddComponent<HitBox>();
            hitBox.health = HealthComponent;
        }
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

    public void Update() => stateMachine.HandleUpdate();

    public AIPath GetPath() { return path; }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        if (!Application.isPlaying) return;

        Gizmos.color = Color.green;
        Gizmos.DrawLine(transform.position, transform.position + Agent.velocity);

        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, transform.position + Agent.desiredVelocity);

        Gizmos.color = Color.black;
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
