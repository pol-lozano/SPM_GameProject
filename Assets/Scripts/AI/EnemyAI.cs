//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator),typeof(NavMeshAgent))]
public class EnemyAI : MonoBehaviour
{

    
    [SerializeField] private BehaviourTree behaviourTree;

    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;

    private BlackBoard blackBoard;


    void Start()
    {
        Debug.Assert(health);
        blackBoard = new BlackBoard(target, anim, path, this, agent, health, ragdoll);
        SetBlackBoardValues();

        behaviourTree = new BT_UmbralMoth();
        behaviourTree.SetBlackBoard(blackBoard);
        behaviourTree.ConstructBehaviourTree();
    }

    private void SetBlackBoardValues()
    {
        blackBoard.StartHeight = agent.baseOffset;
    }

    void Update()
    {
        behaviourTree.RunBehaviourTree();
    }
}
