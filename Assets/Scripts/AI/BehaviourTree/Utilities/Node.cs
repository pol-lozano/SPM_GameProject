//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class Node
{
    protected string ID;

    protected NODE_STATUS status = NODE_STATUS.START;
    protected NODE_STATE nodeState;
    protected BlackBoard blackboard;
    protected BehaviourTree tree;

    public NODE_STATE NodeState { get => nodeState; }

    public NODE_STATUS STATUS { get => status; }
    public void OnInitialize() { }
    public void OnTerminate() { }
    public abstract NODE_STATE Evaluate();
    public void SetBlackBoard(BlackBoard bb) { blackboard = bb; }
}

public enum NODE_STATE
{
    SUCCESS,
    FAILURE,
    RUNNING
}

public enum NODE_STATUS
{
    START,
    RUNNING, 
    ENDED
}
