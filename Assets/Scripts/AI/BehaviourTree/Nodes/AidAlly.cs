//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AidAlly : Node
{
    public AidAlly(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.AllyInNeedPosition);
        BlackBoard.Agent.speed = BlackBoard.ChaseSpeed;
        BlackBoard.Anim.SetFloat("Speed", BlackBoard.ChaseSpeed);
        if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Agent.destination) < BlackBoard.DistanceToPointForSuccess)
        {
            BlackBoard.AllyInNeed = false;
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.RUNNING;
    }
}
