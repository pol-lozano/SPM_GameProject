using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class InvestigatePointNode : Node
{
    NavMeshAgent agent;
    Vector3 poi;
    bool investigating;

    public InvestigatePointNode(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
    }
    public override NODE_STATE Evaluate()
    {
        investigating = tree.GetBlackBoardValue<bool>("Investigating").GetVariable();

        if(investigating == false)
        {
            Debug.Log("Investigate new point");
            tree.GetBlackBoardValue<Vector3>("InvestigatePoint").SetVariable(
                tree.GetBlackBoardValue<Transform>("Target").GetVariable().position
                );
            poi = tree.GetBlackBoardValue<Vector3>("InvestigatePoint").GetVariable();
            agent.SetDestination(poi);
            agent.speed = 1.5f;
            tree.GetBlackBoardValue<bool>("Investigating").SetVariable(true);
        }

        if (Vector3.Distance(agent.transform.position, poi)
            < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {
            tree.GetBlackBoardValue<bool>("Investigating").SetVariable(false);
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;

    }
}
