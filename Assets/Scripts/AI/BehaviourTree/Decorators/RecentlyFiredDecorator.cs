//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecentlyFiredDecorator : Decorator
{
    public RecentlyFiredDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        if (BlackBoard.RecentlyAttacked == true)
        {
            Debug.Log("DODGE");
            BlackBoard.RecentlyAttacked = false;
            return true;
        }
        else
            //Debug.Log("NO DODGE");
            return false;
    }
}
