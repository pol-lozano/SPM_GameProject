//Author: Rickard Lindgren

public class IsStunnedDecorator : Decorator
{

    public IsStunnedDecorator(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override bool Condition()
    {
        return BlackBoard.Health.IsStunned;
    }
}
