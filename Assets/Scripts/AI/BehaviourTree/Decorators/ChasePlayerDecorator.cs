//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ChasePlayerDecorator : Decorator
{
    private RaycastHit hitinfo;

    public ChasePlayerDecorator(BehaviourTree tree)
    {
        this.tree = tree;

    }

    public override bool Condition()
    {
        if (Physics.Linecast(BlackBoard.ThisAI.position, BlackBoard.Target.position, out hitinfo, BlackBoard.LayersToIgnore))
        {
            //Debug.Log("Lost player due to: " + hitinfo.collider.name);
            BlackBoard.Chasing = false;
            return false;
        }
        else if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Target.position) < BlackBoard.DistanceToChase && BlackBoard.ReturningHome == false)
        {
            //Debug.Log("Chase SUcceeded");
            BlackBoard.Chasing = true;
            BlackBoard.TargetLastSeenPoint = BlackBoard.Target.position;
            BlackBoard.RecentlySawTarget = true;
            return true;
        }
        BlackBoard.Chasing = false;
        return false;
        
    }
}
