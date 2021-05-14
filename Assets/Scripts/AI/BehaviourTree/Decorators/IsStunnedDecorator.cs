//Author: Rickard Lindgren

public class IsStunnedDecorator : Decorator
{

    public IsStunnedDecorator(BlackBoard bb) { this.blackBoard = bb; }

    public override bool Condition()
    {
        return blackBoard.EnemyHealth.IsStunned;
    }
}
