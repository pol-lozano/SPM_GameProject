//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{

    public override void ConstructBehaviourTree()
    {
        /*******Death Sequence*******/
        DieNode die = new DieNode(this);
        IsDeadDecorator deadDec = new IsDeadDecorator(this);
        Sequence dieSequence = new Sequence(new List<Node> { die }, deadDec, "die");



        /*******Stun Sequence********/
        SinkNode sink = new SinkNode(this);
        CooldownNode stunWait = new CooldownNode(this, BlackBoard.StunLength);
        RiseNode rise = new RiseNode(this);

        Sequence waitSequence = new Sequence(new List<Node> { stunWait }, new IsRisingDecorator(this), "WaitStun");
        Asserter waitInvert = new Asserter(waitSequence);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(this);
        Sequence stunSequence = new Sequence(new List<Node> { sink, waitInvert, rise }, stunDec, "Stun");


        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, "Return");


        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        ShootNode shoot = new ShootNode(this);
            /*Dodge sequence*/
            SetRandomPoint setRandom = new SetRandomPoint(this);
            MoveToRandomPoint moveToRandom = new MoveToRandomPoint(this);
            CooldownNode cooldown = new CooldownNode(this, BlackBoard.AttackCooldown);
            Sequence dodgeSequence = new Sequence(new List<Node> { setRandom, moveToRandom, cooldown }, new BaseDecorator(), "Dodge");
            Asserter dodgeAsserter = new Asserter(dodgeSequence);
        Sequence attackSequence = new Sequence(new List<Node> { shoot, dodgeAsserter}, new AttackPlayerDecorator(this), "Attack");
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase, attackSequence}, new ChasePlayerDecorator(this), "Chase");

        /***Investigate Selector***/
        InvestigatePointNode investigatePoint = new InvestigatePointNode(this);
        WaitNode investigateWait = new WaitNode(BlackBoard.WaitTime);
        GoHomeNode returnInvest = new GoHomeNode(this);
        Sequence heardSomethingSequence = new Sequence(new List<Node> { investigatePoint, investigateWait, returnInvest }, new InvestigateDecorator(this), "Investigate");

        MoveToTargetLastSeenPoint moveToTargetLastSeen = new MoveToTargetLastSeenPoint(this);
        WaitNode lastSeenWait = new WaitNode(BlackBoard.WaitTime);
        Sequence targetLastSeenSequence = new Sequence(new List<Node> { moveToTargetLastSeen, lastSeenWait }, new SeenTargetDecorator(this), "To Target Last Seen");

        Selector investigateSelector = new Selector(new List<Node> { heardSomethingSequence, targetLastSeenSequence }, new BaseDecorator());

        /*******Patrol Sequence******/
        MoveToPatrolPoint moveToPatrolPoint = new MoveToPatrolPoint(this);
        WaitNode patrolWait = new WaitNode(BlackBoard.WaitTime);
        SetNextPatrolPoint setNextPatrolPoint = new SetNextPatrolPoint(this);
        Sequence patrolSequence = new Sequence(new List<Node> { moveToPatrolPoint, patrolWait, setNextPatrolPoint }, new CanPatrolDecorator(this), "Patrol");

        /********Top Sequence********/
        Selector topSequence = new Selector(new List<Node> { 
            /*Place all sequences here in the order you want*/
            dieSequence,
            stunSequence,
            goHomeSequence,
            chaseAndAttackSequence,
            investigateSelector,
            patrolSequence 
            }, new BaseDecorator());
        topNode = topSequence;
        Debug.Log("tree DONE");
    }


    public void SetBlackBoardValues(UmbralMoth moth)
    {
        /*
        //VALUES
        bb.Add("PatrolSpeed", new DataObject<float>(moth.PatrolSpeed));
        bb.Add("AttackSpeed", new DataObject<float>(moth.AttackSpeed));
        bb.Add("ChaseSpeed", new DataObject<float>(moth.ChaseSpeed));
        bb.Add("SinkSpeed", new DataObject<float>(moth.SinkSpeed));
        bb.Add("StunLength", new DataObject<float>(moth.StunLength));
        bb.Add("DistanceToAttack", new DataObject<float>(moth.DistanceToAttack));
        bb.Add("DistanceToChase", new DataObject<float>(moth.DistanceToChase));
        bb.Add("DistanceToInvestigate", new DataObject<float>(moth.DistanceToInvestigate));
        bb.Add("DistanceToPointForSuccess", new DataObject<float>(moth.DistanceToPointForSuccess));
        bb.Add("ShotCooldown", new DataObject<float>(moth.ShotCooldown));
        bb.Add("StartPoint", new DataObject<Vector3>(moth.transform.position));
        bb.Add("StartHeight", new DataObject<float>(moth.Agent.baseOffset));
        bb.Add("WaitTime", new DataObject<float>(moth.WaitTime));
        bb.Add("MaxDistanceFromStartPoint", new DataObject<float>(moth.MaxDistanceFromStartPoint));
        bb.Add("InvestigatePoint", new DataObject<Vector3>());
        bb.Add("RandomPoint", new DataObject<Vector3>());
        bb.Add("TargetLastSeenPoint", new DataObject<Vector3>());

        bb.Add("isCoolingDown", new DataObject<bool>(false));
        bb.Add("MovingToPoint", new DataObject<bool>(false));
        bb.Add("RecentlyFired", new DataObject<bool>(false));
        bb.Add("RecentlySawTarget", new DataObject<bool>(false));
        bb.Add("Investigating", new DataObject<bool>(false));
        bb.Add("Rising", new DataObject<bool>(false));

        bb.Add("LayersToIgnore", new DataObject<LayerMask>(moth.LayersToIgnore));


        //REFERENCES
        bb.Add("Target", new DataObject<Transform>(moth.Target));
        bb.Add("Anim", new DataObject<Animator>(moth.Anim));
        bb.Add("Path", new DataObject<AIPath>(moth.Path));
        bb.Add("ThisAI", new DataObject<UmbralMoth>(moth));
        bb.Add("Agent", new DataObject<NavMeshAgent>(moth.Agent));
        bb.Add("Health", new DataObject<HealthComponent>(moth.Health));
        bb.Add("Ragdoll", new DataObject<List<Rigidbody>>(moth.Ragdoll));
        */
    }


    public override void SetBlackBoard(BlackBoard bb)
    {
        blackBoard = bb;
    }

}
