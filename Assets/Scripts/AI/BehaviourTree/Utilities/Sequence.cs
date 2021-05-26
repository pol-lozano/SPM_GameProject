//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;

public class Sequence : Node
{

    protected List<Node> nodes = new List<Node>();
    private Decorator decorator;


    public Sequence(List<Node> list, Decorator d, string ID)
    {
        nodes = list;
        decorator = d;
        this.ID = ID;
    }

    public override NODE_STATE Evaluate()
    {
        
        if (decorator.Condition() == true)
        {
            
            bool anyChildRunning = false;
            foreach (Node node in nodes)
            {
                //if (node.STATUS == NODE_STATUS.START)
                //node.OnInitialize();
                //Debug.Log(ID);
                switch (node.Evaluate())
                {
                    case NODE_STATE.FAILURE:
                        //Debug.Log(ID + "FAIL");
                        return NODE_STATE.FAILURE;
                    case NODE_STATE.SUCCESS:
                        //Debug.Log(ID + "SUCC");
                        break;
                    case NODE_STATE.RUNNING:
                        nodeState = NODE_STATE.RUNNING;
                        //Debug.Log(ID + "RUNN");
                        return nodeState;
                    default:
                        break;
                }
            }
            return nodeState = anyChildRunning ? NODE_STATE.RUNNING : NODE_STATE.SUCCESS;
        }
        else
        {
            //Debug.Log("fail " + ID);
            return NODE_STATE.FAILURE;
        }
            
        
    }
}
