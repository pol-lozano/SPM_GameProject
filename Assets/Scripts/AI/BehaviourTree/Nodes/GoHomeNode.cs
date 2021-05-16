using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class GoHomeNode : Node
{
    private float returnSpeed = 3;
    public GoHomeNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        agent.SetDestination(tree.GetBlackBoardValue<Vector3>("StartPoint").GetVariable());
        agent.speed = returnSpeed;

        Debug.Log(Vector3.Distance(
            tree.GetBlackBoardValue<Vector3>("StartPoint").GetVariable(),
            tree.GetBlackBoardValue<UmbralMoth>("ThisAI").GetVariable().transform.position));

        //Success if Distance between StartPoint and ThisAI is smallen than the accepted distance to point for Success
        if(Vector3.Distance(
            tree.GetBlackBoardValue<Vector3>("StartPoint").GetVariable(),
            tree.GetBlackBoardValue<UmbralMoth>("ThisAI").GetVariable().transform.position)
            < tree.GetBlackBoardValue<float>("DistanceToPointForSuccess").GetVariable())
        {
            Debug.Log("HOME");
            return NODE_STATE.SUCCESS;
        }

        return NODE_STATE.RUNNING;
    }
}
