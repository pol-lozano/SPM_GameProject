//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator), typeof(NavMeshAgent))]
public class UmbralFiend : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;

    private BT_UmbralFiend behaviourTree;
    private BlackBoard blackBoard;
    private GameObject treePrefab;

    #region GETTERS
    
    /*
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
    */
    public Transform Target { get => target; }
    public Animator Anim { get => anim; }
    public AIPath Path { get => path; }
    public NavMeshAgent Agent { get => agent; }
    public HealthComponent Health { get => health; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    #endregion


    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;
        /*
        if (EnemyLoader(this) == false)
            Destroy(gameObject);
        */

        treePrefab = ObjectPooler.instance.SpawnFromPool("FiendTree");
        behaviourTree = treePrefab.GetComponent<BT_UmbralFiend>();
        blackBoard = treePrefab.GetComponent<BlackBoard>();
        blackBoard.SetBlackBoardValues(Target, Anim, Path, transform, Agent, Health, Ragdoll);

        agent.SetDestination(path.Next().position);

    }

    private void OnEnable() => EventHandler<AlarmEvent>.RegisterListener(AidAlly);
    private void OnDisable() => EventHandler<AlarmEvent>.UnregisterListener(AidAlly);

    public void AidAlly(AlarmEvent eve)
    {
        blackBoard.AllyInNeed = true;
        blackBoard.AllyInNeedPosition = eve.Position;
    }

    void Update()
    {
        //Debug.DrawLine(transform.position, agent.destination, Color.magenta);
        behaviourTree.RunBehaviourTree();
    }
}
