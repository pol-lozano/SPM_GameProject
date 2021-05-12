//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class Node
{
    protected NODE_STATE nodeState;
    protected BehaviourTree tree;
    public NODE_STATE NodeState { get => nodeState; }

    public abstract NODE_STATE Evaluate();
    public void SetTree(BehaviourTree bt) { tree = bt; }
}

public enum NODE_STATE
{
    SUCCESS,
    FAILURE,
    RUNNING
}
