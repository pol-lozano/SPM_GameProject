//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;

public class MoveToDestinationNode : Node
{

    private float moveSpeed = 3;
    Vector3 adjustedPoint;

    public MoveToDestinationNode(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        agent.speed = moveSpeed;
        adjustedPoint = new Vector3(agent.destination.x, agent.transform.position.y, agent.destination.z);
        if (Vector3.Distance(agent.transform.position, adjustedPoint) < tree.GetBlackBoardValue<float>("DistanceToPointForSucces").GetVariable())
        {
            return NODE_STATE.SUCCESS;
        }
        else 
            return NODE_STATE.RUNNING;
    }
}
