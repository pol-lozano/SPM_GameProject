//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class MoveToPatrolPoint : Node
{

    Vector3 adjustedPoint;

    public MoveToPatrolPoint(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.speed = Mathf.Lerp(BlackBoard.Agent.speed, BlackBoard.PatrolSpeed, 3);
        BlackBoard.Anim.SetFloat("Speed", BlackBoard.PatrolSpeed);
        adjustedPoint = new Vector3(BlackBoard.Agent.destination.x, BlackBoard.Agent.transform.position.y, BlackBoard.Agent.destination.z);

        if (Vector3.Distance(BlackBoard.Agent.transform.position, adjustedPoint) < BlackBoard.DistanceToPointForSuccess)
        {
            return NODE_STATE.SUCCESS;
        }
            
        else
            return NODE_STATE.RUNNING;
            
    }
}
