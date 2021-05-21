//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;
using System.Collections.Generic;
public abstract class BehaviourTree
{
    protected Node topNode;
    protected BlackBoard blackBoard;

    protected Dictionary<string, DataObject> bb = new Dictionary<string, DataObject>();

    public abstract void ConstructBehaviourTree();
    public void RunBehaviourTree() { topNode.Evaluate(); }
    public abstract void SetBlackBoard(BlackBoard bb);

    public BlackBoard GetBlackBoard() { return blackBoard; }

    public DataObject<T> GetBlackBoardValue<T>(string s) { return (DataObject<T>)bb[s]; }
}
