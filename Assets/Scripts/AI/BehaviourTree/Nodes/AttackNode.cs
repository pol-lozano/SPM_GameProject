using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackNode : Node
{
    public AttackNode(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        BlackBoard.Agent.speed = Vector3.Distance(BlackBoard.ThisAI.position, BlackBoard.Target.position) + 1;
        BlackBoard.Anim.SetFloat("Speed", BlackBoard.Agent.speed);
        BlackBoard.Agent.SetDestination(BlackBoard.Target.position);
        
        if (BlackBoard.IsCoolingDown == false)
        {
            BlackBoard.IsCoolingDown = true;
            BlackBoard.MovingToPoint = true;
            BlackBoard.Anim.SetBool("Attack", true);
            
        }
        else
        {
            BlackBoard.Anim.SetBool("Attack", false);
        }

        return NODE_STATE.SUCCESS;



    }
}
