//Author: Rickard Lindgren
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
        DieNode die = new DieNode(blackBoard, this);
        IsDeadDecorator deadDec = new IsDeadDecorator(blackBoard, this);
        Sequence dieSequence = new Sequence(new List<Node> { die }, deadDec, 1);
        Inverter deathInvert = new Inverter(dieSequence);


        /*******Stun Sequence********/
        SinkNode sink = new SinkNode(blackBoard, this);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(blackBoard, this);
        Sequence stunSequence = new Sequence(new List<Node> { sink }, stunDec, 2);
        Inverter stunInvert = new Inverter(stunSequence);

        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, 3);
        Inverter goHomeInvert = new Inverter(goHomeSequence);


        /*******Patrol Sequence******/
        MoveToDestinationNode moveToDestination = new MoveToDestinationNode(this);
        WaitNode patrolWait = new WaitNode(this);
        SetNextDestinationNode setNextDestination = new SetNextDestinationNode(this);
        Sequence patrolSequence = new Sequence(new List<Node> { moveToDestination, patrolWait, setNextDestination }, new BaseDecorator(), 4);


        /********Top Sequence********/
        Sequence topSequence = new Sequence(new List<Node> { 
            /*Place all sequences here in the order you want*/
            deathInvert, 
            stunInvert, 
            goHomeInvert,
            patrolSequence 
            }, new BaseDecorator(), 0);
        topNode = new Selector(new List<Node> { topSequence });
        topNode.SetBlackBoard(blackBoard);

    }


    public void SetBlackBoardValues(UmbralMoth moth)
    {
        //VALUES
        bb.Add("MoveSpeed", new DataObject<float>(moth.MoveSpeed));
        bb.Add("SinkSpeed", new DataObject<float>(moth.SinkSpeed));
        bb.Add("StunLength", new DataObject<float>(moth.StunLength));
        bb.Add("DistanceToAttack", new DataObject<float>(moth.DistanceToAttack));
        bb.Add("DistanceToPointForSuccess", new DataObject<float>(moth.DistanceToPointForSuccess));
        bb.Add("ShotCooldown", new DataObject<float>(moth.ShotCooldown));
        bb.Add("StartPoint", new DataObject<Vector3>(moth.transform.position));
        bb.Add("StartHeight", new DataObject<float>(moth.Agent.baseOffset));
        bb.Add("WaitTime", new DataObject<float>(moth.WaitTime));
        bb.Add("MaxDistanceFromStartPoint", new DataObject<float>(moth.MaxDistanceFromStartPoint));


        //REFERENCES
        bb.Add("Target", new DataObject<Transform>(moth.Target));
        bb.Add("Anim", new DataObject<Animator>(moth.Anim));
        bb.Add("Path", new DataObject<AIPath>(moth.Path));
        bb.Add("ThisAI", new DataObject<UmbralMoth>(moth));
        bb.Add("Agent", new DataObject<NavMeshAgent>(moth.Agent));
        bb.Add("Health", new DataObject<HealthComponent>(moth.Health));
        bb.Add("Ragdoll", new DataObject<List<Rigidbody>>(moth.Ragdoll));
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
