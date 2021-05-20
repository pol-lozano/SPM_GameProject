//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator), typeof(NavMeshAgent))]
public class UmbralMoth : MonoBehaviour
{
    
    [Header("AI speeds")]
    [Header("THESE VALUES CANNOT CHANGE IN RUNTIME")]
    [SerializeField] private float patrolSpeed;
    [SerializeField] private float attackSpeed;
    [SerializeField] private float chaseSpeed;
    [SerializeField] private float sinkSpeed;

    [Header("Gameplay Values")]
    [SerializeField] private float stunLenght;
    [SerializeField] private float shotCooldown;
    [SerializeField] private float waitTime;
    [SerializeField] private LayerMask layersToIgnore;

    [Header("Distances")]
    [SerializeField] private float distanceToAttack;
    [SerializeField] private float distanceToChase;
    [SerializeField] private float distanceToInvestigate;
    [SerializeField] private float distanceToPointForSucces;
    [SerializeField] private float maxDistanceFromStartPoint;

    [Header("References")]
    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;


    private GameObject treePrefab;
    //private BT_UmbralMoth behaviourTree;

    #region GETTERS
    /*GETTERS*/
    public float PatrolSpeed { get => patrolSpeed; }
    public float AttackSpeed { get => attackSpeed; }
    public float ChaseSpeed { get => chaseSpeed; }
    public float SinkSpeed { get => sinkSpeed; }
    public float StunLength { get => stunLenght; }
    public float ShotCooldown { get => shotCooldown; }
    public float WaitTime { get => waitTime; }
    public float DistanceToAttack { get => distanceToAttack; }
    public float DistanceToChase { get => distanceToChase; }
    public float DistanceToInvestigate { get => distanceToInvestigate; }
    public float DistanceToPointForSuccess { get => distanceToPointForSucces; }
    public float MaxDistanceFromStartPoint { get => maxDistanceFromStartPoint; }

    public LayerMask LayersToIgnore { get => layersToIgnore; }
    public Transform Target { get => target; }
    public Animator Anim { get => anim; }
    public AIPath Path { get => path; }
    public NavMeshAgent Agent { get => agent; }
    public HealthComponent Health { get => health; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    #endregion

    BT_UmbralMoth bt;

    void Awake()
    {
        //NEW

        treePrefab = ObjectPooler.instance.SpawnFromPool("MothTree");
        bt = treePrefab.GetComponent<BT_UmbralMoth>();
        BlackBoard bb = treePrefab.GetComponent<BlackBoard>();
        bb.SetBlackBoardValues(Target, Anim, Path, transform, Agent, Health, Ragdoll);

        
        
        agent.SetDestination(path.Next().position);
        
        //OLD
        //behaviourTree = new BT_UmbralMoth();
        //SetBlackBoardValues();
        //behaviourTree.ConstructBehaviourTree();

        //BlackBoard bb = new BlackBoard(Target, Anim, Path, transform, agent, Health, Ragdoll);
        //behaviourTree.SetBlackBoard(bb);
    }

    void Update()
    {
        Debug.DrawLine(transform.position, agent.destination, Color.magenta);
        bt.RunBehaviourTree();
    }
}
