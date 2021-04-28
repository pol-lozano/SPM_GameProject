using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inverter : Node
{

    protected Node node;


    public Inverter(Node n)
    {
        node = n;
    }

    public override NODE_STATE Evaluate()
    {
        switch (node.Evaluate())
        {
            case NODE_STATE.SUCCESS:
                nodeState = NODE_STATE.FAILURE;
                break;
            case NODE_STATE.RUNNING:
                nodeState = NODE_STATE.RUNNING;
                break;
            case NODE_STATE.FAILURE:
                nodeState = NODE_STATE.SUCCESS;
                break;
        }
        return nodeState;
    }
}
