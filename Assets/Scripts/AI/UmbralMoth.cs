//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator), typeof(NavMeshAgent))]
public class UmbralMoth : Enemy
{

    [SerializeField] private int enemyID;

    [Header("References")]
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;

    private GameObject treePrefab;
    private BT_UmbralMoth behaviourTree;

    #region GETTERS

    public Transform Target { get; private set; }
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

        Target = GameObject.FindGameObjectWithTag("Player").transform;
        Anim.enabled = true;
        Anim.SetBool("Die", false);

        ControlObjectSet<Transform>(Target);
        ControlObjectSet<AIPath>(Path);

        treePrefab = ObjectPooler.instance.SpawnFromPool("MothTree");
        behaviourTree = treePrefab.GetComponent<BT_UmbralMoth>();
        BlackBoard bb = treePrefab.GetComponent<BlackBoard>();
        bb.SetBlackBoardValues(Target, Anim, Path, transform, Agent, Health, Ragdoll);

        agent.SetDestination(path.Next().position);
        
    }

    void Update()
    {
        //Debug.DrawLine(transform.position, agent.destination, Color.magenta);
        behaviourTree.RunBehaviourTree();

        if (Health.CurrentHealth <= 0)
            Destroy(gameObject, 4);
    }

    private void OnDestroy()
    {
        behaviourTree.BlackBoard.Reset();
        EnemyLoader.OnDestroy(this);
    }

    private void ControlObjectSet<T>(T obj)
    {
        if(obj == null)
        {
            Debug.LogError("WARNING: " + obj.GetType() + " is null. Make sure the object is set correctly");
        }
    }
}
