using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanPatrolDecorator : Decorator
{
    public CanPatrolDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        if (BlackBoard.MovingToPoint == false && BlackBoard.IsCoolingDown == false)
        {
            return true;
        }
        else
            return false;
    }
}
