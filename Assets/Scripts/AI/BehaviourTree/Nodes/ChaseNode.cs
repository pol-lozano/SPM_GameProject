//AUTHOR: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class ChaseNode : Node
{
    private NavMeshAgent agent;

    public ChaseNode(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
    }

    public override NODE_STATE Evaluate()
    {
        agent.SetDestination(tree.GetBlackBoardValue<Transform>("Target").GetVariable().position);
        agent.speed = tree.GetBlackBoardValue<float>("ChaseSpeed").GetVariable();
        return NODE_STATE.SUCCESS;
    }
}
