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
        BlackBoard.Agent.SetDestination(BlackBoard.ThisAI.position);
        if (BlackBoard.Agent.baseOffset > 1.18f && BlackBoard.Rising == false)
        {
            BlackBoard.Agent.baseOffset -= acceleration * BlackBoard.StunSpeed;
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
