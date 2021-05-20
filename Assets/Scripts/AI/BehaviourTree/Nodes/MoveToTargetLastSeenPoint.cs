using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MoveToTargetLastSeenPoint : Node
{
    public MoveToTargetLastSeenPoint(BehaviourTree tree) 
    { 
        this.tree = tree;
    }
    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.TargetLastSeenPoint);

        if (Vector3.Distance(BlackBoard.Agent.transform.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToPointForSuccess)
        {
            BlackBoard.RecentlySawTarget = false;
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;
    }
}
