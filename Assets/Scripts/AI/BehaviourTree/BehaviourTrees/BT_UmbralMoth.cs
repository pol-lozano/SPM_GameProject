//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralMoth : BehaviourTree
{

    public override void ConstructBehaviourTree()
    {
        /*
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

        Selector investigateSelector = new Selector(new List<Node> { targetLastSeenSequence, heardSomethingSequence }, new BaseDecorator());


        /*******Patrol Sequence******/
        MoveToPatrolPoint moveToPatrolPoint = new MoveToPatrolPoint(this);
        WaitNode patrolWait = new WaitNode(BlackBoard.WaitTime);
        SetNextPatrolPoint setNextPatrolPoint = new SetNextPatrolPoint(this);
        Sequence patrolSequence = new Sequence(new List<Node> { moveToPatrolPoint, patrolWait, setNextPatrolPoint }, new CanPatrolDecorator(this), "Patrol");


        /********Top Sequence********/
        Selector topSequence = new Selector(new List<Node> { 
            /*Place all sequences here in the order you want*/
            //dieSequence,
            stunSequence,
            goHomeSequence,
            chaseAndAttackSequence,
            investigateSelector,
            patrolSequence 
            }, new BaseDecorator());
        topNode = topSequence;
    }



    public override void SetBlackBoard(BlackBoard bb)
    {
        blackBoard = bb;
    }

}
