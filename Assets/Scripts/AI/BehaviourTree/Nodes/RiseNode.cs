using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class RiseNode : Node
{
    public RiseNode(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        if (BlackBoard.Agent.baseOffset < BlackBoard.StartHeight && BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.Rising = true;
            BlackBoard.Agent.baseOffset += Time.deltaTime * BlackBoard.StunSpeed;
            return NODE_STATE.RUNNING;
        }
        else if (BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.Rising = false;
            BlackBoard.Health.IsStunned = false;
            BlackBoard.Agent.baseOffset = BlackBoard.StartHeight;
            return NODE_STATE.SUCCESS;
        }
        else
            return NODE_STATE.FAILURE;
    }
}
