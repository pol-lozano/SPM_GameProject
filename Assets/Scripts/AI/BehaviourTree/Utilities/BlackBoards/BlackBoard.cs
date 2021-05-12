//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BlackBoard
{
    /****************Values**************/
    private float moveSpeed = 1;
    [SerializeField] private float stunSpeed = 2;
    [SerializeField] private float stunLength = 3;
    [SerializeField] private float distanceToAttack = 1;
    [SerializeField] private float distanceToPointForSuccess = 1;
    [SerializeField] private float shotCooldown = 2;

    public float MoveSpeed { get => moveSpeed; set => moveSpeed = value; }
    public float StartHeight { get; set; }
    public float StunSpeed { get => stunSpeed; }
    public float StunLength { get => stunLength; }
    public float DistanceToAttack { get => distanceToAttack; }
    public float DistanceToPointForSuccess { get => distanceToPointForSuccess; }
    public float ShotCooldown { get => shotCooldown; }
    /****************Values**************/



    /****************References**************/
    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private EnemyAI thisAI;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent enemyHealth;
    [SerializeField] private List<Rigidbody> ragdoll;

    public Transform Target { get => target; }
    public HealthComponent EnemyHealth { get => enemyHealth; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    public Animator Anim { get => anim; }
    public NavMeshAgent Agent { get => agent; }

    /****************References**************/

    public BlackBoard
        (Transform target, 
        Animator anim, 
        AIPath path, 
        EnemyAI thisAI, 
        NavMeshAgent agent, 
        HealthComponent enemyHealth, 
        List<Rigidbody> ragdoll)
    {
        Debug.Assert(enemyHealth);
        
        this.target = target;
        this.anim = anim;
        this.path = path;
        this.thisAI = thisAI;
        this.agent = agent;
        this.enemyHealth = enemyHealth;
        this.ragdoll = ragdoll;

        Debug.Assert(this.enemyHealth);
    }

}
