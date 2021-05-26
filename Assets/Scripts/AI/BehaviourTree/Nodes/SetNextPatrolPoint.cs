//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class SetNextPatrolPoint : Node
{

    public SetNextPatrolPoint(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.Path.Next().position);
        return NODE_STATE.SUCCESS;
    }

}
