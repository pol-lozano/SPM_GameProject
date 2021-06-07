//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotLookingAtTarget : Decorator
{
    
    public NotLookingAtTarget(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        return Vector3.Dot(BlackBoard.ThisAI.position, BlackBoard.Target.position) < 0.7f;
    }
}
