using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Selector : Node
{

    protected List<Node> nodes = new List<Node>();
    private Decorator decorator = null;

    public Selector(List<Node> list)
    {
        nodes = list;
    }
    public Selector(List<Node> list, Decorator d)
    {
        nodes = list;
        decorator = d;
    }

    public override NODE_STATE Evaluate()
    {
        
        foreach (var node in nodes)
        {
            switch (node.Evaluate())
            {
                case NODE_STATE.SUCCESS:
                    nodeState = NODE_STATE.SUCCESS;
                    return nodeState;
                case NODE_STATE.RUNNING:
                    nodeState = NODE_STATE.RUNNING;
                    return nodeState;
                case NODE_STATE.FAILURE:
                    break;
                default:
                    break;
            }
        }
        nodeState = NODE_STATE.FAILURE;
        return nodeState;
    }
}
