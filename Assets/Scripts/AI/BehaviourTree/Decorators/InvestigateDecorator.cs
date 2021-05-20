using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class InvestigateDecorator : Decorator
{
    public InvestigateDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        if (BlackBoard.Investigating == false)
            return Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Target.position) <BlackBoard.DistanceToInvestigate;
        else
            return false;
        
    }
}
