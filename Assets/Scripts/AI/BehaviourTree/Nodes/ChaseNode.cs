using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ChaseNode : Node
{

    private float chaseSpeed = 4;

    public ChaseNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        agent.SetDestination(tree.GetBlackBoardValue<Transform>("Target").GetVariable().position);
        agent.speed = chaseSpeed;
        return NODE_STATE.SUCCESS;
    }
}
