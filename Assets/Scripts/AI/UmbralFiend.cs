//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator), typeof(NavMeshAgent))]
public class UmbralFiend : Enemy
{

    [SerializeField] private int enemyID;

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
    
 
    public Transform Target { get => target; }
    public Animator Anim { get => anim; }
    public AIPath Path { get => path; }
    public NavMeshAgent Agent { get => agent; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    #endregion

    private void Awake()
    {
        Id = enemyID;
        healthComponent = health;
        if (EnemyLoader.LoadEnemy(this) == false)
            Destroy(gameObject);
    }

    void Start()
    {
        Anim.enabled = true;
        Anim.SetBool("Die", false);
        target = GameObject.FindGameObjectWithTag("Player").transform;
        treePrefab = ObjectPooler.instance.SpawnFromPool("FiendTree");
        behaviourTree = treePrefab.GetComponent<BT_UmbralFiend>();
        blackBoard = treePrefab.GetComponent<BlackBoard>();
        blackBoard.Reset();
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
        if (Health.CurrentHealth <= 0)
        {
            Anim.enabled = false;
            ActivateRagdoll();
            blackBoard.AllyInNeed = false;
            blackBoard.AllyInNeedPosition = Vector3.zero;
            blackBoard.Reset();
            Destroy(gameObject, 4);
        }
        else
            behaviourTree.RunBehaviourTree();
    }

    private void OnDestroy()
    {
        EnemyLoader.OnDestroy(this);
    }

    private void ActivateRagdoll()
    {
        foreach (Rigidbody r in Ragdoll)
        {
            r.isKinematic = false;
        }
    }
}
