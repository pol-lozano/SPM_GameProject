using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanPatrolDecorator : Decorator
{
    public CanPatrolDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        if (tree.GetBlackBoardValue<bool>("MovingToPoint").GetVariable() == false &&
        tree.GetBlackBoardValue<bool>("isCoolingDown").GetVariable() == false)
        {
            return true;
        }
        else
            return false;
    }
}
