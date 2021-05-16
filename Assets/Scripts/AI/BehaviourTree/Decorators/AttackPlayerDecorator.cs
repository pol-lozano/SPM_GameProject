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
        if (Vector3.Distance(
            tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable().transform.position, 
            tree.GetBlackBoardValue<Transform>("Target").GetVariable().position) 
            < tree.GetBlackBoardValue<float>("DistanceToAttack").GetVariable())
            return true;

        return false;
    }
}
