//Author: Rickard Lindgren

public class IsStunnedDecorator : Decorator
{

    public IsStunnedDecorator(BlackBoard bb, BehaviourTree tree)
    {
        this.blackBoard = bb;
        this.tree = tree;
    }

    public override bool Condition()
    {
        return tree.GetBlackBoardValue<HealthComponent>("Health").GetVariable().IsStunned;
    }
}
