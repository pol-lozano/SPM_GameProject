using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralFiend : BehaviourTree
{

    public override void ConstructBehaviourTree()
    {

        /*******Death Sequence*******/
        DieNode die = new DieNode(this);
        IsDeadDecorator deadDec = new IsDeadDecorator(this);
        Sequence dieSequence = new Sequence(new List<Node> { die }, deadDec, "die");



        /*******Stun Sequence********/
        StunNode stun = new StunNode(this);
        WaitNode stunWait = new WaitNode(BlackBoard.StunLength);
        ExitStunNode exitStun = new ExitStunNode(this);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(this);
        Sequence stunSequence = new Sequence(new List<Node> { stun, stunWait, exitStun }, stunDec, "Stun");


        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, "Return");


        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        
        CooldownNode cooldown = new CooldownNode(this, BlackBoard.AttackCooldown);
        
        Sequence attackSequence = new Sequence(new List<Node> { }, new AttackPlayerDecorator(this), "Attack");
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase, attackSequence }, new ChasePlayerDecorator(this), "Chase");

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

    }

    public void SetBlackBoardValues(UmbralFiend fiend)
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
        bb.Add("AttackCooldown", new DataObject<float>(fiend.AttackCooldown));
        bb.Add("StartPoint", new DataObject<Vector3>(fiend.transform.position));
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
        bb.Add("ThisAI", new DataObject<UmbralFiend>(fiend));
        bb.Add("Agent", new DataObject<NavMeshAgent>(fiend.Agent));
        bb.Add("Health", new DataObject<HealthComponent>(fiend.Health));
        bb.Add("Ragdoll", new DataObject<List<Rigidbody>>(fiend.Ragdoll));
    }

    public override void SetBlackBoard(BlackBoard bb)
    {
        throw new System.NotImplementedException();
    }
}
