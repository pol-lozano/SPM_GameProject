//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;
using System.Collections.Generic;
public abstract class BehaviourTree
{
    protected Node topNode;
    protected BlackBoard bb;
    public abstract void ConstructBehaviourTree();
    public abstract void RunBehaviourTree();
    public abstract void SetBlackBoard(BlackBoard bb);

    public BlackBoard GetBlackBoard() { return bb; }
}
