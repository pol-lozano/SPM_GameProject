using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AidAllyDecorator : Decorator
{

    public AidAllyDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        return BlackBoard.AllyInNeed && Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.AllyInNeedPosition) < BlackBoard.DistanceToAid;
    }
}
