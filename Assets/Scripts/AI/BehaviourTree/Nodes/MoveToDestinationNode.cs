//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class MoveToDestinationNode : Node
{

    Vector3 adjustedPoint;

    public MoveToDestinationNode(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        Debug.Log("Patroling somewhere");

        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        agent.speed = tree.GetBlackBoardValue<float>("PatrolSpeed").GetVariable();
        adjustedPoint = new Vector3(agent.destination.x, agent.transform.position.y, agent.destination.z);
        if (Vector3.Distance(agent.transform.position, adjustedPoint) < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {
            Debug.Log("Reached Destination");
            return NODE_STATE.SUCCESS;
        }
        else 
            return NODE_STATE.RUNNING;
    }
}
