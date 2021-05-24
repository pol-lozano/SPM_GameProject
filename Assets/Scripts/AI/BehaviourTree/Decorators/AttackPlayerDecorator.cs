using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AttackPlayerDecorator : Decorator
{
    private RaycastHit hitinfo;

    public AttackPlayerDecorator(BehaviourTree tree) 
    { 
        this.tree = tree;
    }

    public override bool Condition()
    {
        if (Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Target.position) 
            < BlackBoard.DistanceToAttack)
            return true;
        else
        {
            //tree.GetBlackBoardValue<bool>("isCoolingDown").SetVariable(false);
            BlackBoard.MovingToPoint = false;
            BlackBoard.RecentlyAttacked = false;
            return false;
        }
        
    }
}
