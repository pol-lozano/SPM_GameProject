using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MoveToTargetLastSeenPoint : Node
{
    NavMeshAgent agent;
    public MoveToTargetLastSeenPoint(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
    }
    public override NODE_STATE Evaluate()
    {
        agent.SetDestination(tree.GetBlackBoardValue<Vector3>("TargetLastSeenPoint").GetVariable());

        if (Vector3.Distance(agent.transform.position, agent.destination)
            < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {
            tree.GetBlackBoardValue<bool>("RecentlySawTarget").SetVariable(false);
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;
    }
}
