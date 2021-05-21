using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SeenTargetDecorator : Decorator
{

    public SeenTargetDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        return tree.GetBlackBoardValue<bool>("RecentlySawTarget").GetVariable();
    }
}
