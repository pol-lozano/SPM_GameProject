using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNode : Node
{
    float speed;
    public AttackNode(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        speed = Mathf.Lerp(BlackBoard.Agent.speed, 0.3f, 3);
        BlackBoard.Agent.speed = speed;
        if(BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.IsCoolingDown = true;
            BlackBoard.MovingToPoint = true;
            BlackBoard.Anim.SetBool("Attack", true);
            BlackBoard.Anim.SetFloat("Speed", speed);
        }
        else
        {
            BlackBoard.Anim.SetBool("Attack", false);
        }

        return NODE_STATE.SUCCESS;



    }
}
