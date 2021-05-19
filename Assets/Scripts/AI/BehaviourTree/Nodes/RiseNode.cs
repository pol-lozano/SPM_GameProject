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
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable();
        if (agent.baseOffset < tree.GetBlackBoardValue<float>("StartHeight").GetVariable())
        {
            agent.baseOffset += Time.deltaTime * tree.GetBlackBoardValue<float>("SinkSpeed").GetVariable();
            return NODE_STATE.RUNNING;
        }
        else
        {
            agent.baseOffset = tree.GetBlackBoardValue<float>("StartHeight").GetVariable();
            return NODE_STATE.SUCCESS;
        }
    }
}
