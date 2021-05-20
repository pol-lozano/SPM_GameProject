using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SinkNode : Node
{
    public SinkNode(BehaviourTree tree)
    {
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.SetDestination(BlackBoard.Agent.transform.position);
        if (BlackBoard.Agent.baseOffset > 1.21f && BlackBoard.Rising == false)
        {
            BlackBoard.Agent.baseOffset -= Time.deltaTime * BlackBoard.StunSpeed;
            return NODE_STATE.RUNNING;
        }
        else
        {
            return NODE_STATE.SUCCESS;
        }
    }
}
