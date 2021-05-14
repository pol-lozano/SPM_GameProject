using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SinkNode : Node
{
    public SinkNode(BlackBoard bb, BehaviourTree tree)
    {
        this.blackboard = bb;
        this.tree = tree;
    }

    public override NODE_STATE Evaluate()
    {
        NavMeshAgent agent = tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariabel();
        if (agent.baseOffset > 1.3f)
        {
            agent.baseOffset -= Time.deltaTime * tree.GetBlackBoardValue<float>("SinkAndRiseSpeed").GetVariabel();
            return NODE_STATE.RUNNING;
        }
        else
        {
            agent.baseOffset = 1.2f;
            return NODE_STATE.SUCCESS;
        }
    }
}
