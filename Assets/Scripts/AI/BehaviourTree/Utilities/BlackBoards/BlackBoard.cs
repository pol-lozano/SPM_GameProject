//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BlackBoard : MonoBehaviour
{
    /****************Values**************/
    [Header("AI speeds")]
    [SerializeField] private float patrolSpeed;
    [SerializeField] private float attackSpeed;
    [SerializeField] private float chaseSpeed;
    [Header("Distances")]
    [SerializeField] private float distanceToAttack;
    [SerializeField] private float distanceToChase;
    [SerializeField] private float distanceToInvestigate;
    [SerializeField] private float distanceToAid;
    [SerializeField] private float distanceToPointForSuccess;
    [SerializeField] private float maxDistanceFromStartPoint;
    [Header("Gameplay Values")]
    [SerializeField] private float stunSpeed;
    [SerializeField] private float stunLength;
    [SerializeField] private float attackCooldown;
    [SerializeField] private float waitTime;
    [SerializeField] private LayerMask layersToIgnore;
    [Header("Sounds")]
    [SerializeField] private AudioData attackAudio;
    [SerializeField] private AudioData alarmAudio;

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
    public float DistanceToAid { get => distanceToAid; }
    public float DistanceToPointForSuccess { get => distanceToPointForSuccess; }
    public float MaxDistanceFromStartPoint { get => maxDistanceFromStartPoint; }
    public float AttackCooldown { get => attackCooldown; }
    public float WaitTime { get => waitTime; }
    public AudioData AttackAudio { get => attackAudio; }
    public AudioData AlarmAudio { get => alarmAudio; }
    #endregion

    #region PROPERTIES
    public bool IsCoolingDown { get; set; }
    public bool MovingToPoint { get; set; }
    public bool RecentlyAttacked { get; set; }
    public bool RecentlySawTarget { get; set; }
    public bool Investigating { get; set; }
    public bool Rising { get; set; }
    public bool AllyInNeed { get; set; }
    public bool SentForHelp { get; set; }
    public bool RecentlyKnocked { get; set; }
    public bool ReturningHome { get; set; }
    public bool Chasing { get; set; }
    public Vector3 StartPoint { get; set; }
    public Vector3 InvestigatePoint { get; set; }
    public Vector3 RandomPoint { get; set; }
    public Vector3 TargetLastSeenPoint { get; set; }
    public Vector3 AllyInNeedPosition { get; set; }
    public LayerMask LayersToIgnore { get => layersToIgnore; }

    #endregion
    /****************Values**************/



    /****************References**************/
    [Header("References")]
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
        StartHeight = agent.baseOffset;
        this.target = target;
        this.anim = anim;
        this.path = path;
        this.thisAI = thisAI;
        this.agent = agent;
        this.health = health;
        this.ragdoll = ragdoll;
    }

    public void Reset()
    {
        IsCoolingDown = false;
        MovingToPoint = false;
        RecentlyAttacked = false;
        RecentlySawTarget = false;
        Investigating = false;
        Rising = false;
        AllyInNeed = false;
        SentForHelp = false;
        RecentlyKnocked = false;
        ReturningHome = false;
        Chasing = false;
        StartPoint = Vector3.zero;
        InvestigatePoint = Vector3.zero;
        RandomPoint = Vector3.zero;
        TargetLastSeenPoint = Vector3.zero;
        AllyInNeedPosition = Vector3.zero;
        target = null;
        anim = null;
        path = null;
        thisAI = null;
        agent = null;
        health = null;
        ragdoll = null;

    }

}
