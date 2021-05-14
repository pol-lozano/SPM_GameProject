//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class Node
{
    protected int ID;

    protected NODE_STATE nodeState;
    protected BlackBoard blackboard;
    protected BehaviourTree tree;
    public NODE_STATE NodeState { get => nodeState; }

    public abstract NODE_STATE Evaluate();
    public void SetBlackBoard(BlackBoard bb) { blackboard = bb; }
}

public enum NODE_STATE
{
    SUCCESS,
    FAILURE,
    RUNNING
}
