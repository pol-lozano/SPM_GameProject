using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MoveToRandomPoint : Node
{
    NavMeshAgent agent;

    public MoveToRandomPoint(BehaviourTree tree)
    {
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();

    }
    public override NODE_STATE Evaluate()
    {
        agent.SetDestination(tree.GetBlackBoardValue<Vector3>("RandomPoint").GetVariable());
        agent.speed = Mathf.Lerp(agent.speed, 3, 1);
        //Debug.DrawLine(agent.transform.position, agent.destination, Color.magenta, 3);
        tree.GetBlackBoardValue<bool>("MovingToPoint").SetVariable(true);


        if (Vector3.Distance(agent.transform.position, agent.destination)
            < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {

            
            return NODE_STATE.SUCCESS;
        }
        else
        {

            return NODE_STATE.RUNNING;
        }
            
    }
}
