using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TooFarFromHomeDecorator : Decorator
{

    public TooFarFromHomeDecorator(BehaviourTree tree) { this.tree = tree; }
    public override bool Condition()
    {
        return Vector3.Distance(
            tree.GetBlackBoardValue<Vector3>("StartPoint").GetVariable(),
            tree.GetBlackBoardValue<UmbralMoth>("ThisAI").GetVariable().transform.position)
            > tree.GetBlackBoardValue<float>("MaxDistanceFromStartPoint").GetVariable();
    }
}
