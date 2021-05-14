//Author: Rickard Lindgren
using UnityEngine;

public class WaitNode : Node
{

    private float timer;

    public WaitNode(BehaviourTree tree)
    {
        this.tree = tree;
        timer = tree.GetBlackBoardValue<float>("WaitTime").GetVariable();
    }

    public override NODE_STATE Evaluate()
    {


        if(timer > 0)
        {
            timer -= Time.deltaTime;
            Debug.Log(timer);
            return NODE_STATE.RUNNING;
        }
        else
        {
            timer = tree.GetBlackBoardValue<float>("WaitTime").GetVariable();
            return NODE_STATE.SUCCESS;
        }
    }
}
