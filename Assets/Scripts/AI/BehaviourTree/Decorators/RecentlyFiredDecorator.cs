using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecentlyFiredDecorator : Decorator
{
    public RecentlyFiredDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        if (tree.GetBlackBoardValue<bool>("RecentlyFired").GetVariable() == true)
        {
            Debug.Log("DODGE");
            tree.GetBlackBoardValue<bool>("RecentlyFired").SetVariable(false);
            return true;
        }
        else
            //Debug.Log("NO DODGE");
            return false;
    }
}
