using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NeedHelpDecorator : Decorator
{
    public NeedHelpDecorator(BehaviourTree tree) { this.tree = tree; }

    public override bool Condition()
    {
        if (BlackBoard.SentForHelp == false &&
            BlackBoard.Health.CurrentHealth < 30/* &&
            BlackBoard.Target.GetComponent<HealthComponent>().CurrentHealth < 60*/)
        {
            return true;
        }
        else
            return false;
    }
}
