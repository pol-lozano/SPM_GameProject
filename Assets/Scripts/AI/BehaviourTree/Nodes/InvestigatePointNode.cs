using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class InvestigatePointNode : Node
{

    public InvestigatePointNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }


    public override NODE_STATE Evaluate()
    {

        if(BlackBoard.Investigating == false)
        {
            //Debug.Log("Investigate new point");
            BlackBoard.InvestigatePoint = BlackBoard.Target.position;
            BlackBoard.Agent.SetDestination(BlackBoard.InvestigatePoint);
            BlackBoard.Agent.speed = 1.5f;
            BlackBoard.Anim.SetFloat("Speed", 1.5f);
            BlackBoard.Investigating = true;
        }

        if (Vector3.Distance(BlackBoard.Agent.transform.position, BlackBoard.InvestigatePoint)
            < BlackBoard.DistanceToPointForSuccess)
        {
            BlackBoard.Investigating = false;
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;

    }
}
