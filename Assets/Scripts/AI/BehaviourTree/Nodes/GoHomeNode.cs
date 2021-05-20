using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class GoHomeNode : Node
{
    float returnSpeed = 3;
    public GoHomeNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.StartPoint);
        BlackBoard.Agent.speed = returnSpeed;
        BlackBoard.RecentlySawTarget = false;

        //Success if Distance between StartPoint and ThisAI is smallen than the accepted distance to point for Success
        if(Vector3.Distance(BlackBoard.StartPoint, BlackBoard.ThisAI.position) < BlackBoard.DistanceToPointForSuccess)
        {
            return NODE_STATE.SUCCESS;
        }

        return NODE_STATE.RUNNING;
    }
}
