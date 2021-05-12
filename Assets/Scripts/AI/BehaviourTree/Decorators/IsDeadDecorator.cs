using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IsDeadDecorator : Decorator
{
    public IsDeadDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        Debug.Log("ENEMT HEALTH: "+tree.GetBlackBoard().EnemyHealth.CurrentHealth);
        return tree.GetBlackBoard().EnemyHealth.CurrentHealth <= 0;
    }
}
