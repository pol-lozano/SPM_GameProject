//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator),typeof(NavMeshAgent))]
public class EnemyAI : MonoBehaviour
{

    [SerializeField] private Transform target;
    [SerializeField] private BehaviourTree behaviourTree;

    private BlackBoard blackBoard;


    void Awake()
    {
        blackBoard = new BlackBoard();
        behaviourTree = new BT_UmbralMoth();
        behaviourTree.SetBlackBoard(blackBoard);
        behaviourTree.ConstructBehaviourTree();
    }

    void Update()
    {
        behaviourTree.RunBehaviourTree();
    }
}
