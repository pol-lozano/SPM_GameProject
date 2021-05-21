//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator), typeof(NavMeshAgent))]
public class UmbralFiend : MonoBehaviour
{
    
    [Header("AI speeds")]
    [Header("THESE VALUES CANNOT CHANGE IN RUNTIME")]
    [SerializeField] private float patrolSpeed;
    [SerializeField] private float attackSpeed;
    [SerializeField] private float chaseSpeed;

    [Header("Gameplay Values")]
    [SerializeField] private float stunLenght;
    [SerializeField] private float attackCooldown;
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

    private BT_UmbralFiend behaviourTree;
    private GameObject treePrefab;

    #region GETTERS
    /*GETTERS*/
    public float PatrolSpeed { get => patrolSpeed; }
    public float AttackSpeed { get => attackSpeed; }
    public float ChaseSpeed { get => chaseSpeed; }
    public float StunLength { get => stunLenght; }
    public float AttackCooldown { get => attackCooldown; }
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


    void Awake()
    {

        treePrefab = ObjectPooler.instance.SpawnFromPool("FiendTree");
        behaviourTree = treePrefab.GetComponent<BT_UmbralFiend>();
        BlackBoard bb = treePrefab.GetComponent<BlackBoard>();
        bb.SetBlackBoardValues(Target, Anim, Path, transform, Agent, Health, Ragdoll);

        agent.SetDestination(path.Next().position);

    }

    void Update()
    {
        Debug.DrawLine(transform.position, agent.destination, Color.magenta);
        behaviourTree.RunBehaviourTree();
    }
}
