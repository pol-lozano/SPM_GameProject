//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(HealthComponent), typeof(Animator),typeof(NavMeshAgent))]
public class UmbralMoth : MonoBehaviour
{

    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent health;
    [SerializeField] private List<Rigidbody> ragdoll;

    private BlackBoard blackBoard;
    private BT_UmbralMoth behaviourTree;


    void Start()
    {
        //NOT LIKE THIS
        //blackBoard = new BlackBoard(target, anim, path, this, agent, health, ragdoll);
        //behaviourTree.SetBlackBoard(blackBoard);



        behaviourTree = new BT_UmbralMoth();
        SetBlackBoardValues();
        behaviourTree.ConstructBehaviourTree();
    }

    private void SetBlackBoardValues()
    {
        behaviourTree.SetBlackBoardValues(target, anim, path, this, agent, health, ragdoll);
        //blackBoard.StartHeight = agent.baseOffset;
        //blackBoard.StartPosition = transform.position;
    }

    void Update()
    {
        behaviourTree.RunBehaviourTree();
    }
}
