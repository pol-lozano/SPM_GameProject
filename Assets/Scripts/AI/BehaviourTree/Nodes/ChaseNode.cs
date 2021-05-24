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
            
            BlackBoard.Agent.SetDestination(BlackBoard.Target.position);
            BlackBoard.Agent.speed = Mathf.Lerp(BlackBoard.Agent.speed, BlackBoard.ChaseSpeed, 3);
            BlackBoard.Anim.SetFloat("Speed", BlackBoard.ChaseSpeed);
        }

        if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToAttack)
        {
            return NODE_STATE.SUCCESS;
        }
        else
        {
            Debug.Log("Not there yet");
        }
            return NODE_STATE.RUNNING;

    }
}
