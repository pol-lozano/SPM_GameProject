using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SendForHelp : Node
{
    public SendForHelp(BehaviourTree tree) { this.tree = tree; }
    public override NODE_STATE Evaluate()
    {
        //spela animation.
        //spela ljud

        BlackBoard.SentForHelp = true;
        BlackBoard.Agent.speed = Mathf.Lerp(BlackBoard.Agent.speed, 0, 3);
        EventHandler<AlarmEvent>.FireEvent(new AlarmEvent(BlackBoard.ThisAI.position));
        return NODE_STATE.SUCCESS;
    }
}
