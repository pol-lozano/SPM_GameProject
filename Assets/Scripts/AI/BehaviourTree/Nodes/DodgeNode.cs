using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class DodgeNode : Node
{
    NavMeshAgent agent;
    NavMeshHit hitinfo;
    float sampleDistance = 3;
    public DodgeNode(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
    }
    public override NODE_STATE Evaluate()
    {
        Debug.Log("DODGE");
        NavMesh.SamplePosition(agent.transform.position, out hitinfo, sampleDistance, NavMesh.AllAreas);
        
        agent.SetDestination(hitinfo.position);
        agent.speed = 5;
            if (Vector3.Distance(agent.transform.position, agent.destination)
                < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
                return NODE_STATE.SUCCESS;
            else
                return NODE_STATE.RUNNING;
        
    }
}
