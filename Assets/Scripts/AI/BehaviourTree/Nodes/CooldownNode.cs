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
            tree.GetBlackBoardValue<bool>("isCoolingDown").SetVariable(true);
            timer -= Time.deltaTime;
            //Debug.Log(timer);
            return NODE_STATE.RUNNING;
        }
        else
        {
            tree.GetBlackBoardValue<bool>("isCoolingDown").SetVariable(false);
            tree.GetBlackBoardValue<bool>("MovingToPoint").SetVariable(false);
            timer = timerLength;
            Debug.Log("Cooldown DONE");
            return NODE_STATE.SUCCESS;
        }
    }
}
