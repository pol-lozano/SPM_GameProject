//Author: Rickard Lindgren
using UnityEngine.AI;

public class SetNextDestinationNode : Node
{

    public SetNextDestinationNode(BehaviourTree tree)
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
