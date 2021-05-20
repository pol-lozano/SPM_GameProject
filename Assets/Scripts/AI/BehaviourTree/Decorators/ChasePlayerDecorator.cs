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
            return false;
        }
        else if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Target.position) < BlackBoard.DistanceToChase)
        {
            BlackBoard.TargetLastSeenPoint = BlackBoard.Target.position;
            BlackBoard.RecentlySawTarget = true;
            return true;
        }

        return false;
        
    }
}
