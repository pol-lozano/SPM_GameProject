//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;

public class Sequence : Node
{

    protected List<Node> nodes = new List<Node>();
    private Decorator decorator;


    public Sequence(List<Node> list, Decorator d, int ID)
    {
        nodes = list;
        decorator = d;
        this.ID = ID;
    }

    public override NODE_STATE Evaluate()
    {
        //Debug.Log(ID);
        if (decorator.Condition() == true)
        {
            bool anyChildRunning = false;
            foreach (var node in nodes)
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
        else
            return NODE_STATE.FAILURE;
        
    }
}
