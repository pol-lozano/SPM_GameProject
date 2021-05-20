using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StunNode : Node
{
    public StunNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.Anim.SetBool("Stunned", true);
        }
        return NODE_STATE.SUCCESS;
    }
}
