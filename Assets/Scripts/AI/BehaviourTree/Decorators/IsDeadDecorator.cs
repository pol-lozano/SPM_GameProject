//Author: Rickard Lindgren
using UnityEngine;

public class IsDeadDecorator : Decorator
{
    public IsDeadDecorator(BlackBoard bb) { this.blackBoard = bb; }
    public override bool Condition()
    {
        return blackBoard.EnemyHealth.CurrentHealth <= 0;
    }
}
