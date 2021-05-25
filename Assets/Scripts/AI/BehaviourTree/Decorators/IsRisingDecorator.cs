//Author: Rickard Lindgren
using UnityEngine;

public class IsRisingDecorator : Decorator
{
    public IsRisingDecorator(BehaviourTree tree) 
    { 
        this.tree = tree;
    }
    public override bool Condition()
    {
        return !BlackBoard.Rising;
    }
}
