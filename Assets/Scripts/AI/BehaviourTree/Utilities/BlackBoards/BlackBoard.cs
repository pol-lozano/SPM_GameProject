//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BlackBoard : MonoBehaviour
{
    /****************Values**************/
    [SerializeField] private float patrolSpeed;
    [SerializeField] private float attackSpeed;
    [SerializeField] private float chaseSpeed;
    [SerializeField] private float stunSpeed;
    [SerializeField] private float stunLength;
    [SerializeField] private float distanceToAttack;
    [SerializeField] private float distanceToChase;
    [SerializeField] private float distanceToInvestigate;
    [SerializeField] private float distanceToPointForSuccess;
    [SerializeField] private float maxDistanceFromStartPoint;
    [SerializeField] private float attackCooldown;
    [SerializeField] private float waitTime;
    [SerializeField] private LayerMask layersToIgnore;

    #region GETTERS
    public float PatrolSpeed { get => patrolSpeed; }
    public float AttackSpeed { get => attackSpeed; }
    public float ChaseSpeed { get => chaseSpeed; }
    public float StartHeight { get; set; }
    public float StunSpeed { get => stunSpeed; }
    public float StunLength { get => stunLength; }
    public float DistanceToAttack { get => distanceToAttack; }
    public float DistanceToChase { get => distanceToChase; }
    public float DistanceToInvestigate { get => distanceToInvestigate; }
    public float DistanceToPointForSuccess { get => distanceToPointForSuccess; }
    public float MaxDistanceFromStartPoint { get => maxDistanceFromStartPoint; }
    public float AttackCooldown { get => attackCooldown; }
    public float WaitTime { get => waitTime; }
    #endregion

    #region PROPERTIES
    public bool IsCoolingDown { get; set; }
    public bool MovingToPoint { get; set; }
    public bool RecentlyFired { get; set; }
    public bool RecentlySawTarget { get; set; }
    public bool Investigating { get; set; }
    public bool Rising { get; set; }
    public Vector3 StartPoint { get; set; }
    public Vector3 InvestigatePoint { get; set; }
    public Vector3 RandomPoint { get; set; }
    public Vector3 TargetLastSeenPoint { get; set; }
    public LayerMask LayersToIgnore { get => layersToIgnore; }

    #endregion
    /****************Values**************/



    /****************References**************/
    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private Transform thisAI;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;

    #region GETTERS
    public Transform Target { get => target; }
    public Animator Anim { get => anim; }
    public AIPath Path { get => path; }
    public Transform ThisAI { get => thisAI; }
    public NavMeshAgent Agent { get => agent; }
    public HealthComponent Health { get => health; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    #endregion


    /****************References**************/

    public void SetBlackBoardValues
        (Transform target, 
        Animator anim, 
        AIPath path, 
        Transform thisAI, 
        NavMeshAgent agent, 
        HealthComponent health, 
        List<Rigidbody> ragdoll)
    {
        
        StartPoint = thisAI.position;
        this.target = target;
        this.anim = anim;
        this.path = path;
        this.thisAI = thisAI;
        this.agent = agent;
        this.health = health;
        this.ragdoll = ragdoll;
        Debug.Log(ThisAI.name);
    }

}
