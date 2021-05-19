//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asserter : Node
{

    protected Node node;


    public Asserter(Node n)
    {
        node = n;
    }

    public override NODE_STATE Evaluate()
    {
        node.Evaluate();
        return NODE_STATE.SUCCESS;
    }
}
