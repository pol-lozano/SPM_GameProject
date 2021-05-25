using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateTowardsTarget : Node
{
    Vector3 direction;
    Quaternion lookDirection;
    public RotateTowardsTarget(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        Debug.Log("Rotate");
        direction = (BlackBoard.Target.position - BlackBoard.ThisAI.position).normalized;
        lookDirection = Quaternion.LookRotation(direction);
        BlackBoard.ThisAI.rotation = Quaternion.Slerp(BlackBoard.ThisAI.rotation, lookDirection, Time.deltaTime * 1);
        return NODE_STATE.SUCCESS;
    }
}
