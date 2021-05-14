using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{

    public override void ConstructBehaviourTree()
    {

        /*******Death Sequence*******/
        DieNode dieNode = new DieNode(blackBoard);
        IsDeadDecorator deadDec = new IsDeadDecorator(blackBoard);
        Sequence dieSequence = new Sequence(new List<Node> { dieNode }, deadDec, 1);
        Inverter deathInvert = new Inverter(dieSequence);
        /*******Death Sequence*******/

        /*******Stun Sequence********/
        SinkNode sink = new SinkNode(blackBoard);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(blackBoard);
        Sequence stunSequence = new Sequence(new List<Node> { sink }, stunDec, 3);

        /*******Stun Sequence********/







        Sequence topSequence = new Sequence(new List<Node> { deathInvert, stunSequence /*Place all sequences here*/}, new BaseDecorator(), 2);
        topNode = new Selector(new List<Node> { topSequence });
        topNode.SetBlackBoard(blackBoard);

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


    public void SetBlackBoardValues()
    {

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
