using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SetRandomPoint : Node
{

    NavMeshAgent agent;
    float sampleDistance = 5;
    float maxDistance = 5;

    public SetRandomPoint(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();

    }
    public override NODE_STATE Evaluate()
    {
        if(tree.GetBlackBoardValue<bool>("MovingToPoint").GetVariable() == false)
        {
            Debug.Log("Set Random Point");
            Vector3 samplePos = GetSamplePositionOnNavMesh(agent.transform.position, sampleDistance, maxDistance);
            Vector3 adjusted = new Vector3(samplePos.x, agent.transform.position.y, samplePos.z);
            tree.GetBlackBoardValue<Vector3>("RandomPoint").SetVariable(adjusted);
        }
        return NODE_STATE.SUCCESS;
    }

    public Vector3 GetSamplePositionOnNavMesh(Vector3 origin, float originRadius, float maxDistance)
    {
        Vector3 randomPositionInsidePatrolArea = origin + Random.insideUnitSphere * originRadius;
        NavMesh.SamplePosition(randomPositionInsidePatrolArea, out var hitInfo, maxDistance, NavMesh.AllAreas);
        return hitInfo.position;
    }
}
