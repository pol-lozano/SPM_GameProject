using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{
    
    public override void ConstructBehaviourTree()
    {
        

        /*******Death Sequence*******/
        DieNode dieNode = new DieNode();
        IsDeadDecorator isDead = new IsDeadDecorator(this);
        Sequence dieSequence = new Sequence(new List<Node> { dieNode }, isDead);
        Inverter deathInvert = new Inverter(dieSequence);
        /*******Death Sequence*******/







        Sequence topSequence = new Sequence(new List<Node> { deathInvert /*Place all sequences here*/});
        topNode = new Selector(new List<Node> { topSequence });
        topNode.SetTree(this);

        #region LIKE_THIS
        /*
        HealthNode healthNode = new HealthNode(this, gameObject.GetComponent<HealthComponent>());
        WaitNode wait = new WaitNode(3);
        DieNode die = new DieNode(gameObject);

        Sequence checkHealthAndDieSequence = new Sequence(new List<Node> { healthNode, wait, die });

        topNode = new Selector(new List<Node> { checkHealthAndDieSequence });
        */
        #endregion
    }

    public override void SetBlackBoard(BlackBoard bb)
    {
        blackBoard = bb;
    }

    public override void RunBehaviourTree()
    {
        topNode.Evaluate();
    }
}
