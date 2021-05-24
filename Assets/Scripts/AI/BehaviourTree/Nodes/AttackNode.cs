using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNode : Node
{
    public AttackNode(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        if(BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.Agent.speed = Mathf.Lerp(BlackBoard.Agent.speed, 0.3f, 3);
            BlackBoard.IsCoolingDown = true;
            BlackBoard.MovingToPoint = true;
            BlackBoard.Anim.SetBool("Attack", true);
            BlackBoard.Anim.SetFloat("Speed", 0.3f);
            return NODE_STATE.SUCCESS;
        }
        BlackBoard.Anim.SetBool("Attack", false);
        return NODE_STATE.FAILURE;
        
    }
}
