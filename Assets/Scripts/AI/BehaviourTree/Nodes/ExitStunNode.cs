using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitStunNode : Node
{
    string animText;
    public ExitStunNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Anim.SetBool("Stunned", false);
        BlackBoard.Health.IsStunned = false;
        return NODE_STATE.SUCCESS;
    }
}
