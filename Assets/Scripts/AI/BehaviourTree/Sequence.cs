using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sequence : Node
{

    protected List<Node> nodes = new List<Node>();


    public Sequence(List<Node> list)
    {
        nodes = list;
    }

    public override NODE_STATE Evaluate()
    {
        bool anyChildRunning = false;
        foreach(var node in nodes)
        {
            switch (node.Evaluate())
            {
                case NODE_STATE.SUCCESS:
                    break;
                case NODE_STATE.RUNNING:
                    nodeState = NODE_STATE.RUNNING;
                    return nodeState;
                case NODE_STATE.FAILURE:
                    nodeState = NODE_STATE.FAILURE;
                    return nodeState;
                default:
                    break;
            }
        }

        return nodeState = anyChildRunning ? NODE_STATE.RUNNING : NODE_STATE.SUCCESS;
    }
}
