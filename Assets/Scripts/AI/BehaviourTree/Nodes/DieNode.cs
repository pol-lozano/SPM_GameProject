//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;


public class DieNode : Node
{

    public DieNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {

        foreach(Rigidbody r in BlackBoard.Ragdoll)
        {
            r.isKinematic = false;
        }
        //Debug.Log("IS DEAD");
        BlackBoard.Anim.SetBool("Die", true);
        

        return NODE_STATE.SUCCESS;
    }
}
