//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Selector : Node
{

    protected List<Node> nodes = new List<Node>();
    private Decorator decorator = null;


    /*
    public Selector(List<Node> list)
    {
        nodes = list;
        decorator = null;
    }
    */
    public Selector(List<Node> list, Decorator d)
    {
        nodes = list;
        decorator = d;
        
    }

    public override NODE_STATE Evaluate()
    {
        if (decorator.Condition() == true)
        {
            foreach (var node in nodes)
            {
                switch (node.Evaluate())
                {
                    case NODE_STATE.SUCCESS:
                        //Debug.Log(node.ID + "SUCC");
                        nodeState = NODE_STATE.SUCCESS;
                        return nodeState;
                    case NODE_STATE.RUNNING:
                        //Debug.Log(node.ID + "RUNN");
                        nodeState = NODE_STATE.RUNNING;
                        return nodeState;
                    case NODE_STATE.FAILURE:
                        //Debug.Log(node.ID + "FAIL");
                        nodeState = NODE_STATE.FAILURE;
                        break;
                    default:
                        break;
                }
            }
            return nodeState;
        }
        else
            return NODE_STATE.FAILURE;

        
    }
}
