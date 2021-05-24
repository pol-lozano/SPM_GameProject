//Author: Rickard Lindgren
using UnityEngine;

public class WaitNode : Node
{
    private float timerLength;
    private float timer;


    public WaitNode(float t)
    {
        timerLength = t;
        timer = t;

    }

    public override NODE_STATE Evaluate()
    {

        if(timer > 0)
        {
            timer -= Time.deltaTime;
            return NODE_STATE.RUNNING;
        }
        else
        {
            timer = timerLength;
            Debug.Log("WAIT DONE");
            return NODE_STATE.SUCCESS;
        }
    }
}
