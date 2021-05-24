//Author: Rickard Lindgren
using UnityEngine;

public class CooldownNode : Node
{
    private float timerLength;
    private float timer;
  
    public CooldownNode(BehaviourTree tree, float t)
    {
        this.tree = tree;
        timerLength = t;
        timer = t;
    }

    public override NODE_STATE Evaluate()
    {
        if(timer > 0)
        {
            BlackBoard.IsCoolingDown = true;
            timer -= Time.deltaTime;
            //Debug.Log(timer);
            return NODE_STATE.RUNNING;
        }
        else
        {
            BlackBoard.IsCoolingDown = false;
            BlackBoard.MovingToPoint = false;
            BlackBoard.RecentlyKnocked = false;
            timer = timerLength;
            return NODE_STATE.SUCCESS;
        }
    }
}
