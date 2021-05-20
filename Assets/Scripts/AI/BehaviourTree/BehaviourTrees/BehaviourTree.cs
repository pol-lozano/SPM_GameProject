//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.AI;
using System.Collections.Generic;
public abstract class BehaviourTree : MonoBehaviour
{
    protected Node topNode;
    protected BlackBoard blackBoard;

    protected Dictionary<string, DataObject> bb = new Dictionary<string, DataObject>();

    private void Awake()
    {
        blackBoard = GetComponent<BlackBoard>();
        ConstructBehaviourTree();
    }
    public abstract void ConstructBehaviourTree();
    public void RunBehaviourTree() { topNode.Evaluate(); }
    public abstract void SetBlackBoard(BlackBoard bb);

    public BlackBoard BlackBoard{ get => blackBoard; }
}
