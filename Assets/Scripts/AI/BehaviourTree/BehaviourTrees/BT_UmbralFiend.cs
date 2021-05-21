using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BT_UmbralFiend : BehaviourTree
{

    private void OnEnable()
    {
        
    }

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

        /*****Aid Ally Sequence*****/
        
        
        /******Alarm Sequence*******/



        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, "Return");


        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        
        CooldownNode cooldown = new CooldownNode(this, BlackBoard.AttackCooldown);
        
       
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase}, new ChasePlayerDecorator(this), "Chase");

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
