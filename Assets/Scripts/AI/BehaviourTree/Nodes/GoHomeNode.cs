using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class GoHomeNode : Node
{
    public GoHomeNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.StartPoint);
        BlackBoard.Anim.SetFloat("Speed", BlackBoard.PatrolSpeed);
        BlackBoard.RecentlySawTarget = false;
        BlackBoard.ReturningHome = true;

        //Success if Distance between StartPoint and ThisAI is smallen than the accepted distance to point for Success
        if(Vector3.Distance(BlackBoard.StartPoint, BlackBoard.ThisAI.position) < BlackBoard.DistanceToPointForSuccess)
        {
            //Debug.Log("CameHome");
            BlackBoard.ReturningHome = false;
            return NODE_STATE.SUCCESS;
        }

        return NODE_STATE.RUNNING;
    }
}
