using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SinkNode : Node
{
    public SinkNode(BlackBoard bb)
    {
        this.blackboard = bb;
    }
    public override NODE_STATE Evaluate()
    {
        if(blackboard.Agent.baseOffset > 1.3f)
        {
            blackboard.Agent.baseOffset -= Time.deltaTime * blackboard.StunSpeed;
            return NODE_STATE.RUNNING;
        }
        else
        {
            blackboard.Agent.baseOffset = 1.2f;
            return NODE_STATE.SUCCESS;
        }
    }
}
