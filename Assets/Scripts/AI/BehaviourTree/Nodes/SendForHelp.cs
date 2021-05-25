using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SendForHelp : Node
{
    public SendForHelp(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        BlackBoard.Anim.SetTrigger("Alarm");
        BlackBoard.Anim.SetFloat("Speed", 0);
        
        //spela ljud

        BlackBoard.SentForHelp = true;
        BlackBoard.Agent.speed = 0;
        BlackBoard.Agent.ResetPath();

        EventHandler<AlarmEvent>.FireEvent(new AlarmEvent(BlackBoard.ThisAI.position));
        return NODE_STATE.SUCCESS;
    }
}
