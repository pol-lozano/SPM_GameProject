using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StunNode : Node
{
    public StunNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        BlackBoard.ThisAI.GetComponent<EnemyCollider>().DisableCollider();
        BlackBoard.IsCoolingDown = true;
        BlackBoard.Agent.speed = 0;
        BlackBoard.Anim.SetBool("Stunned", true);
        BlackBoard.Anim.SetFloat("Speed", 0);
        return NODE_STATE.SUCCESS;
    }
}
