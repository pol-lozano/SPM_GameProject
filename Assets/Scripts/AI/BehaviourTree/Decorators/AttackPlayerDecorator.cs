using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackPlayerDecorator : Decorator
{
    private Transform origin;
    private Transform target;
    private RaycastHit hitinfo;

    public AttackPlayerDecorator(BehaviourTree tree) 
    { 
        this.tree = tree;
        origin = tree.GetBlackBoardValue<Transform>("ThisAI").GetVariable().transform;
        target = tree.GetBlackBoardValue<Transform>("Target").GetVariable();
    }

    public override bool Condition()
    {
        if(Physics.Linecast(origin.position, target.position, out hitinfo) == false)
            if(hitinfo.distance < tree.GetBlackBoardValue<float>("DistanceToAttack").GetVariable())
                return true;
        return false;
    }
}
