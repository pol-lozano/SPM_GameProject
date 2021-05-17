//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{

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

        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        ShootNode shoot = new ShootNode(this);
        DodgeNode dodge = new DodgeNode(this);
        WaitNode cooldown = new WaitNode(GetBlackBoardValue<float>("ShotCooldown").GetVariable());
        Sequence attackSequence = new Sequence(new List<Node> { shoot, dodge, cooldown }, new AttackPlayerDecorator(this), 5);
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase, attackSequence}, new ChasePlayerDecorator(this), 4);
        Inverter attackInvert = new Inverter(chaseAndAttackSequence);



        /*******Patrol Sequence******/
        MoveToDestinationNode moveToDestination = new MoveToDestinationNode(this);
        WaitNode patrolWait = new WaitNode(GetBlackBoardValue<float>("WaitTime").GetVariable());
        SetNextDestinationNode setNextDestination = new SetNextDestinationNode(this);
        Sequence patrolSequence = new Sequence(new List<Node> { moveToDestination, patrolWait, setNextDestination }, new BaseDecorator(), 6);


        /********Top Sequence********/
        Sequence topSequence = new Sequence(new List<Node> { 
            /*Place all sequences here in the order you want*/
            deathInvert, 
            stunInvert, 
            goHomeInvert,
            attackInvert,
            patrolSequence 
            }, new BaseDecorator(), 0);
        topNode = new Selector(new List<Node> { topSequence });
        topNode.SetBlackBoard(blackBoard);

    }


    public void SetBlackBoardValues(UmbralMoth moth)
    {
        //VALUES
        bb.Add("PatrolSpeed", new DataObject<float>(moth.PatrolSpeed));
        bb.Add("AttackSpeed", new DataObject<float>(moth.AttackSpeed));
        bb.Add("ChaseSpeed", new DataObject<float>(moth.ChaseSpeed));
        bb.Add("SinkSpeed", new DataObject<float>(moth.SinkSpeed));
        bb.Add("StunLength", new DataObject<float>(moth.StunLength));
        bb.Add("DistanceToAttack", new DataObject<float>(moth.DistanceToAttack));
        bb.Add("DistanceToChase", new DataObject<float>(moth.DistanceToChase));
        bb.Add("DistanceToPointForSuccess", new DataObject<float>(moth.DistanceToPointForSuccess));
        bb.Add("ShotCooldown", new DataObject<float>(moth.ShotCooldown));
        bb.Add("StartPoint", new DataObject<Vector3>(moth.transform.position));
        bb.Add("StartHeight", new DataObject<float>(moth.Agent.baseOffset));
        bb.Add("WaitTime", new DataObject<float>(moth.WaitTime));
        bb.Add("MaxDistanceFromStartPoint", new DataObject<float>(moth.MaxDistanceFromStartPoint));
        bb.Add("InvestigatePoint", new DataObject<Vector3>());
        bb.Add("isCoolingDown", new DataObject<bool>(false));


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

}
