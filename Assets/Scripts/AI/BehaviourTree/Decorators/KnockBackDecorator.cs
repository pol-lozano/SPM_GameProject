using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KnockBackDecorator : Decorator
{
    public KnockBackDecorator(BehaviourTree tree) { this.tree = tree; }
    
    public override bool Condition()
    {
        if (BlackBoard.Health.Invulnerable
            && BlackBoard.Health.LastType != typeof(Projectile)
            && BlackBoard.Health.IsStunned == false
            && BlackBoard.RecentlyKnocked == false)
            return true;
        else
            BlackBoard.Anim.SetBool("Hit", false);
        return false;
    }
}
