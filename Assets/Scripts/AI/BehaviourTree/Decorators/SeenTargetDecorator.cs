using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SeenTargetDecorator : Decorator
{

    public SeenTargetDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        return BlackBoard.RecentlySawTarget == true && BlackBoard.Chasing == false;
    }
}
