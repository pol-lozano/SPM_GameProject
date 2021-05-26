//Author: Rickard Lindgren
using UnityEngine;

public class IsDeadDecorator : Decorator
{
    public IsDeadDecorator(BehaviourTree tree) 
    { 
        this.tree = tree;
    }
    public override bool Condition()
    {
        return BlackBoard.Health.CurrentHealth <= 0;
    }
}
