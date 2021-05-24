using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitStunNode : Node
{
    string animText;
    public ExitStunNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.Anim.SetBool("Stunned", false);
        }
        return NODE_STATE.SUCCESS;
    }
}
