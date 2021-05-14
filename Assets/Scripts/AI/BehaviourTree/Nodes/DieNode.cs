//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;

public class DieNode : Node
{

    public DieNode(BlackBoard bb, BehaviourTree tree)
    {
        this.blackboard = bb;
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        Debug.Log("Object is Dead");
        foreach(Rigidbody r in tree.GetBlackBoardValue<List<Rigidbody>>("Ragdoll").GetVariabel())
        {
            r.isKinematic = false;
        }
        tree.GetBlackBoardValue<Animator>("Anim").GetVariabel().enabled = false;

        return NODE_STATE.SUCCESS;
    }
}
