using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DieNode : Node
{
    public override NODE_STATE Evaluate()
    {
        Debug.Assert(tree.GetBlackBoard());
        Debug.Assert(tree.GetBlackBoard().Ragdoll);
        Debug.Log("Object is Dead");
        foreach(Rigidbody r in tree.GetBlackBoard().Ragdoll)
        {
            r.isKinematic = false;
        }
        tree.GetBlackBoard().Anim.enabled = false;

        return NODE_STATE.SUCCESS;
    }
}
