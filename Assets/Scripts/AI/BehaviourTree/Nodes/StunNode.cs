using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StunNode : Node
{
    public StunNode(BehaviourTree tree) { this.tree = tree; }

    public override NODE_STATE Evaluate()
    {
        if(tree.GetBlackBoardValue<bool>("isCoolingDown").GetVariable() == false)
        {
            tree.GetBlackBoardValue<Animator>("Anim").GetVariable().SetBool("Stunned", true);
        }
        return NODE_STATE.SUCCESS;
    }
}
