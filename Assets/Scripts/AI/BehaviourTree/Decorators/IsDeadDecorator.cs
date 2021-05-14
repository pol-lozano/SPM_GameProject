//Author: Rickard Lindgren
using UnityEngine;

public class IsDeadDecorator : Decorator
{
    public IsDeadDecorator(BlackBoard bb, BehaviourTree tree) 
    { 
        this.blackBoard = bb;
        this.tree = tree;
    }
    public override bool Condition()
    {
        return tree.GetBlackBoardValue<HealthComponent>("Health").GetVariabel().CurrentHealth <= 0;
    }
}
