using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SinkNode : Node
{
    float acceleration = 0;
    public SinkNode(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.ResetPath();
        if (BlackBoard.Agent.baseOffset > 1.21f && BlackBoard.Rising == false)
        {
            BlackBoard.Agent.baseOffset -= Time.deltaTime * BlackBoard.StunSpeed + acceleration;
            acceleration += 0.01f;
            return NODE_STATE.RUNNING;
        }
        else
        {
            acceleration = 0;
            return NODE_STATE.SUCCESS;
        }
    }
}
