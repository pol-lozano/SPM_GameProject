//AUTHOR: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class ChaseNode : Node
{

    public ChaseNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.MovingToPoint == false)
        {
            Debug.Log("CHASE");
            BlackBoard.Agent.SetDestination(BlackBoard.Target.position);
            BlackBoard.Agent.speed = BlackBoard.ChaseSpeed;
        }
        return NODE_STATE.SUCCESS;
    }
}
