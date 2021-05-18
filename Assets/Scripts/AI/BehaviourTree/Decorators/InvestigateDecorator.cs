using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class InvestigateDecorator : Decorator
{
    public InvestigateDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        if (tree.GetBlackBoardValue<bool>("Investigating").GetVariable() == false)
        {
            
            return Vector3.Distance(tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable().transform.position,
                tree.GetBlackBoardValue<Transform>("Target").GetVariable().position) <
                tree.GetBlackBoardValue<float>("DistanceToInvestigate").GetVariable();
        }
        else
            return false;
        
    }
}
