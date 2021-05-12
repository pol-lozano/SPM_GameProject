//Author: Rickard Lindgren
using UnityEngine;

public class DieNode : Node
{

    public DieNode(BlackBoard bb)
    {
        this.blackboard = bb;
    }

    public override NODE_STATE Evaluate()
    {
        Debug.Assert(blackboard.Ragdoll.Count > 0);
        Debug.Log("Object is Dead");
        foreach(Rigidbody r in blackboard.Ragdoll)
        {
            r.isKinematic = false;
        }
        blackboard.Anim.enabled = false;

        return NODE_STATE.SUCCESS;
    }
}
