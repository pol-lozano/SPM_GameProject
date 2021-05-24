using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SetRandomPoint : Node
{

    float sampleDistance = 3;
    float maxDistance = 3;

    public SetRandomPoint(BehaviourTree tree) 
    { 
        this.tree = tree;

    }
    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.MovingToPoint == false)
        {
            Vector3 samplePos = GetSamplePositionOnNavMesh(BlackBoard.Target.position, sampleDistance, maxDistance);
            Vector3 adjusted = new Vector3(samplePos.x, BlackBoard.Agent.transform.position.y, samplePos.z);
            BlackBoard.IsCoolingDown = true;
            BlackBoard.RandomPoint = adjusted;
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
