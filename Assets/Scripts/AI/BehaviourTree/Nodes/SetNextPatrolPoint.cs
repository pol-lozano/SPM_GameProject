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
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        agent.SetDestination(tree.GetBlackBoardValue<AIPath>("Path").GetVariable().Next().position);
        return NODE_STATE.SUCCESS;
    }

}
