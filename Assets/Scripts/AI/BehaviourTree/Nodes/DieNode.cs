using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DieNode : Node
{

    private GameObject obj;

    public DieNode(GameObject o)
    {
        obj = o;
        
    }

    public override NODE_STATE Evaluate()
    {
        
        obj.SetActive(false);
        return NODE_STATE.SUCCESS;
    }
}
