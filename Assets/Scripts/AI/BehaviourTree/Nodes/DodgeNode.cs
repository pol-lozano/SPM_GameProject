using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class DodgeNode : Node
{
    NavMeshHit hitinfo;
    float sampleDistance = 3;
    float maxDistance = 6;
    public DodgeNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }
    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.IsCoolingDown == true)
        {
            Vector3 samplePos = GetSamplePositionOnNavMesh(BlackBoard.Agent.transform.position, sampleDistance, maxDistance);
            Vector3 adjusted = new Vector3(samplePos.x, BlackBoard.Agent.transform.position.y, samplePos.z);
            Debug.Log(Vector3.Distance(BlackBoard.Agent.transform.position, adjusted));
            Debug.DrawRay(BlackBoard.Agent.transform.position, adjusted - BlackBoard.Agent.transform.position, Color.cyan, 3f);

            BlackBoard.Agent.SetDestination(adjusted);

            //agent.speed = 5;
        }
        
        if (Vector3.Distance(BlackBoard.Agent.transform.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToPointForSuccess)
        {
            //Debug.Log("DODGED");
            BlackBoard.IsCoolingDown = false;
            return NODE_STATE.SUCCESS;
        }   
            else
                return NODE_STATE.RUNNING;
        
    }

    public Vector3 GetSamplePositionOnNavMesh(Vector3 origin, float originRadius, float maxDistance)
    {
        Vector3 randomPositionInsidePatrolArea = Random.insideUnitSphere * originRadius + origin;
        NavMesh.SamplePosition(randomPositionInsidePatrolArea, out var hitInfo, maxDistance, NavMesh.AllAreas);
        return hitInfo.position;
    }
}
