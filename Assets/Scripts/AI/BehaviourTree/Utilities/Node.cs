//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class Node
{
    public string ID;

    protected NODE_STATE nodeState;
    protected BehaviourTree tree;

    public NODE_STATE NodeState { get => nodeState; }



    public void SetBehaviourTree(BehaviourTree tree) { this.tree = tree; }
    public abstract NODE_STATE Evaluate();

    protected BlackBoard BlackBoard { get => tree.BlackBoard; }
}

public enum NODE_STATE
{
    SUCCESS,
    FAILURE,
    RUNNING
}

