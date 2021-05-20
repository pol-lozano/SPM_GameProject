using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MoveToRandomPoint : Node
{

    public MoveToRandomPoint(BehaviourTree tree)
    {
        this.tree = tree;

    }
    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.RandomPoint);
        BlackBoard.Agent.speed = Mathf.Lerp(BlackBoard.Agent.speed, 3, 1);
        //Debug.DrawLine(agent.transform.position, agent.destination, Color.magenta, 3);
        BlackBoard.MovingToPoint = true;


        if (Vector3.Distance(BlackBoard.Agent.transform.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToPointForSuccess)
            return NODE_STATE.SUCCESS;
        else
            return NODE_STATE.RUNNING;

            
    }
}
