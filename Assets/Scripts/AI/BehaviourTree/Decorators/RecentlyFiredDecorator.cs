using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecentlyFiredDecorator : Decorator
{
    public RecentlyFiredDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        if (BlackBoard.RecentlyFired == true)
        {
            Debug.Log("DODGE");
            BlackBoard.RecentlyFired = false;
            return true;
        }
        else
            //Debug.Log("NO DODGE");
            return false;
    }
}
