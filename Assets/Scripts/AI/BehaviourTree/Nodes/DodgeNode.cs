using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class DodgeNode : Node
{
    NavMeshAgent agent;
    NavMeshHit hitinfo;
    float sampleDistance = 3;
    float maxDistance = 6;
    public DodgeNode(BehaviourTree tree) 
    { 
        this.tree = tree;
        agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
    }
    public override NODE_STATE Evaluate()
    {
        if(tree.GetBlackBoardValue<bool>("isCoolingDown").GetVariable() == true)
        {
            Vector3 samplePos = GetSamplePositionOnNavMesh(agent.transform.position, sampleDistance, maxDistance);
            Vector3 adjusted = new Vector3(samplePos.x, agent.transform.position.y, samplePos.z);
            Debug.Log(Vector3.Distance(agent.transform.position, adjusted));
            Debug.DrawRay(agent.transform.position, adjusted - agent.transform.position, Color.cyan, 3f);

            agent.SetDestination(adjusted);

            //agent.speed = 5;
        }
        
        if (Vector3.Distance(agent.transform.position, agent.destination)
                < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {
            Debug.Log("DODGED");
            tree.GetBlackBoardValue<bool>("isCoolingDown").SetVariable(false);
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
