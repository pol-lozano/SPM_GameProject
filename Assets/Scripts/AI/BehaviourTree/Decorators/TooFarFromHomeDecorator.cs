using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TooFarFromHomeDecorator : Decorator
{

    public TooFarFromHomeDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        return Vector3.Distance(BlackBoard.StartPoint, BlackBoard.ThisAI.position) > BlackBoard.MaxDistanceFromStartPoint || BlackBoard.ReturningHome == true;
    }
}
