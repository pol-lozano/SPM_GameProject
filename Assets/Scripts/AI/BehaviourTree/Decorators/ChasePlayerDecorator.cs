using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ChasePlayerDecorator : Decorator
{
    private Transform origin;
    private Transform target;
    private RaycastHit hitinfo;
    private LayerMask layersToIgnore;

    public ChasePlayerDecorator(BehaviourTree tree)
    {
        this.tree = tree;
        origin = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable().transform;
        target = tree.GetBlackBoardValue<Transform>("Target").GetVariable();
        layersToIgnore = (1 << 13);
    }

    public override bool Condition()
    {
        
        if (Physics.Linecast(origin.position, target.position, out hitinfo, layersToIgnore))
        {
            return false;
        }
        else if (Vector3.Distance(origin.position, target.position) < tree.GetBlackBoardValue<float>("DistanceToChase").GetVariable())
        {
            Debug.Log("CLOSE ENOUGH");
            return true;
        }

        return false;
        
    }
}
