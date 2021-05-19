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
        foreach(Rigidbody r in tree.GetBlackBoardValue<List<Rigidbody>>("Ragdoll").GetVariable())
        {
            r.isKinematic = false;
        }
        tree.GetBlackBoardValue<Animator>("Anim").GetVariable().enabled = false;

        return NODE_STATE.SUCCESS;
    }
}
