using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{

    #region BLACKBOARD
    /*
     * Blackboard Should contain:
     * 
     * ___________VALUES___________
     * MoveSpeed
     * StunSpeed
     * StunLength
     * DistanceToAttack
     * DistanceToPointForSuccess
     * ShotCooldown
     * 
     * 
     * 
     *__________REFERENCES_________
     * Target (Transform)
     * Anim
     * Path
     * ThisAI
     * Agent
     * Health
     * Ragdoll
     * 
     */
    #endregion

    public override void ConstructBehaviourTree()
    {

        /*******Death Sequence*******/
        DieNode dieNode = new DieNode(blackBoard, this);
        IsDeadDecorator deadDec = new IsDeadDecorator(blackBoard, this);
        Sequence dieSequence = new Sequence(new List<Node> { dieNode }, deadDec, 1);
        Inverter deathInvert = new Inverter(dieSequence);
        /*******Death Sequence*******/


        /*******Stun Sequence********/
        SinkNode sink = new SinkNode(blackBoard, this);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(blackBoard, this);
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


    public void SetBlackBoardValues(
        Transform target,
        Animator anim,
        AIPath path,
        UmbralMoth thisAI,
        NavMeshAgent agent,
        HealthComponent enemyHealth,
        List<Rigidbody> ragdoll)
    {
        //VALUES
        bb.Add("MoveSpeed", new DataObject<float>(1));
        bb.Add("SinkAndRiseSpeed", new DataObject<float>(3));
        bb.Add("StunLength", new DataObject<float>(3));
        bb.Add("DistanceToAttack", new DataObject<float>(10));
        bb.Add("DistanceToPointForSucces", new DataObject<float>(0.5f));
        bb.Add("ShotCooldown", new DataObject<float>(1));
        bb.Add("StartPosition", new DataObject<Vector3>(thisAI.transform.position));
        bb.Add("StartHeight", new DataObject<float>(agent.baseOffset));


        //REFERENCES
        bb.Add("Target", new DataObject<Transform>(target));
        bb.Add("Anim", new DataObject<Animator>(anim));
        bb.Add("Path", new DataObject<AIPath>(path));
        bb.Add("ThisAI", new DataObject<UmbralMoth>(thisAI));
        bb.Add("Agent", new DataObject<NavMeshAgent>(agent));
        bb.Add("Health", new DataObject<HealthComponent>(enemyHealth));
        bb.Add("Ragdoll", new DataObject<List<Rigidbody>>(ragdoll));
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
