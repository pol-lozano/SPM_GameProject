using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralFiend : BehaviourTree
{
    public override void ConstructBehaviourTree()
    {

        /*******Death Sequence*******/
        DieNode die = new DieNode(blackBoard, this);
        IsDeadDecorator deadDec = new IsDeadDecorator(blackBoard, this);
        Sequence dieSequence = new Sequence(new List<Node> { die }, deadDec, "die");



        /*******Stun Sequence********/
        SinkNode sink = new SinkNode(blackBoard, this);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(blackBoard, this);
        Sequence stunSequence = new Sequence(new List<Node> { sink }, stunDec, "Stun");


        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, "Return");


        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        ShootNode shoot = new ShootNode(this);
        CooldownNode cooldown = new CooldownNode(this, GetBlackBoardValue<float>("ShotCooldown").GetVariable());
        /*Dodge sequence*/
        SetRandomPoint setRandom = new SetRandomPoint(this);
        MoveToRandomPoint moveToRandom = new MoveToRandomPoint(this);
        Sequence dodgeSequence = new Sequence(new List<Node> { setRandom, moveToRandom, cooldown }, new BaseDecorator(), "Dodge");
        Asserter dodgeAsserter = new Asserter(dodgeSequence);
        Sequence attackSequence = new Sequence(new List<Node> { shoot, dodgeAsserter }, new AttackPlayerDecorator(this), "Attack");
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase, attackSequence }, new ChasePlayerDecorator(this), "Chase");

        /***Investigate Selector***/
        InvestigatePointNode investigatePoint = new InvestigatePointNode(this);
        WaitNode investigateWait = new WaitNode(GetBlackBoardValue<float>("WaitTime").GetVariable());
        GoHomeNode returnInvest = new GoHomeNode(this);
        Sequence heardSomethingSequence = new Sequence(new List<Node> { investigatePoint, investigateWait, returnInvest }, new InvestigateDecorator(this), "Investigate");

        MoveToTargetLastSeenPoint moveToTargetLastSeen = new MoveToTargetLastSeenPoint(this);
        WaitNode lastSeenWait = new WaitNode(GetBlackBoardValue<float>("WaitTime").GetVariable());
        Sequence targetLastSeenSequence = new Sequence(new List<Node> { moveToTargetLastSeen, lastSeenWait }, new SeenTargetDecorator(this), "To Target Last Seen");

        Selector investigateSelector = new Selector(new List<Node> { heardSomethingSequence, targetLastSeenSequence }, new BaseDecorator());


        /*******Patrol Sequence******/
        MoveToPatrolPoint moveToPatrolPoint = new MoveToPatrolPoint(this);
        WaitNode patrolWait = new WaitNode(GetBlackBoardValue<float>("WaitTime").GetVariable());
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
        topNode.SetBlackBoard(blackBoard);

    }

    public void SetBlackBoardValues(UmbralMoth fiend)
    {
        //VALUES
        bb.Add("PatrolSpeed", new DataObject<float>(fiend.PatrolSpeed));
        bb.Add("AttackSpeed", new DataObject<float>(fiend.AttackSpeed));
        bb.Add("ChaseSpeed", new DataObject<float>(fiend.ChaseSpeed));
        bb.Add("StunLength", new DataObject<float>(fiend.StunLength));
        bb.Add("DistanceToAttack", new DataObject<float>(fiend.DistanceToAttack));
        bb.Add("DistanceToChase", new DataObject<float>(fiend.DistanceToChase));
        bb.Add("DistanceToInvestigate", new DataObject<float>(fiend.DistanceToInvestigate));
        bb.Add("DistanceToPointForSuccess", new DataObject<float>(fiend.DistanceToPointForSuccess));
        bb.Add("AttackCooldown", new DataObject<float>(fiend.ShotCooldown)); ////////////////////////////////////////
        bb.Add("StartPoint", new DataObject<Vector3>(fiend.transform.position));
        bb.Add("StartHeight", new DataObject<float>(fiend.Agent.baseOffset)); ////////////////////////////////////////
        bb.Add("WaitTime", new DataObject<float>(fiend.WaitTime));
        bb.Add("MaxDistanceFromStartPoint", new DataObject<float>(fiend.MaxDistanceFromStartPoint));
        bb.Add("InvestigatePoint", new DataObject<Vector3>());
        bb.Add("RandomPoint", new DataObject<Vector3>());
        bb.Add("TargetLastSeenPoint", new DataObject<Vector3>());

        bb.Add("isCoolingDown", new DataObject<bool>(false));
        bb.Add("MovingToPoint", new DataObject<bool>(false));
        bb.Add("RecentlyFired", new DataObject<bool>(false));
        bb.Add("RecentlySawTarget", new DataObject<bool>(false));
        bb.Add("Investigating", new DataObject<bool>(false));

        bb.Add("LayersToIgnore", new DataObject<LayerMask>(fiend.LayersToIgnore));


        //REFERENCES
        bb.Add("Target", new DataObject<Transform>(fiend.Target));
        bb.Add("Anim", new DataObject<Animator>(fiend.Anim));
        bb.Add("Path", new DataObject<AIPath>(fiend.Path));
        bb.Add("ThisAI", new DataObject<UmbralMoth>(fiend));////////////////////////////////////////
        bb.Add("Agent", new DataObject<NavMeshAgent>(fiend.Agent));
        bb.Add("Health", new DataObject<HealthComponent>(fiend.Health));
        bb.Add("Ragdoll", new DataObject<List<Rigidbody>>(fiend.Ragdoll));
    }

    public override void SetBlackBoard(BlackBoard bb)
    {
        throw new System.NotImplementedException();
    }
}
