//AUTHOR: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class ChaseNode : Node
{
    Vector3 lookAtPos;
    public ChaseNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        lookAtPos = new Vector3(BlackBoard.Target.position.x,
                                BlackBoard.ThisAI.position.y,
                                BlackBoard.Target.position.z);
        BlackBoard.ThisAI.LookAt(lookAtPos);

        if (BlackBoard.MovingToPoint == false)
        {
            BlackBoard.Agent.speed = BlackBoard.ChaseSpeed;
            BlackBoard.Agent.SetDestination(BlackBoard.Target.position);
            BlackBoard.Anim.SetFloat("Speed", BlackBoard.ChaseSpeed);
        }

        if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToAttack + 1.5f)
        {
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;

    }
}
