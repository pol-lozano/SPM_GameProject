using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsDeadDecorator : Decorator
{
    public IsDeadDecorator(BehaviourTree tree) 
    { 
        this.tree = tree; 
    }
    public override bool Condition()
    {
        Debug.Assert(tree != null);
        Debug.Assert(tree.GetBlackBoard().MoveSpeed > 0);
        Debug.Log("ENEMT HEALTH: " + tree.GetBlackBoard().EnemyHealth.CurrentHealth);
        if (tree.GetBlackBoard().EnemyHealth.CurrentHealth <= 0)
            return true;
        else
            return false;
    }
}
