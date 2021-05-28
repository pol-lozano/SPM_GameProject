using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KnockBackNode : Node
{
    public KnockBackNode(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {

        BlackBoard.Agent.SetDestination(BlackBoard.ThisAI.position);
        BlackBoard.ThisAI.GetComponent<EnemyCollider>().DisableCollider();
        BlackBoard.RecentlyKnocked = true;
        BlackBoard.Anim.SetBool("Hit", true);

        return NODE_STATE.SUCCESS;
    }
}
