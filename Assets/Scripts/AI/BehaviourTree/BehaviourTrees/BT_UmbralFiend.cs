//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[System.Serializable]
public class BT_UmbralFiend : BehaviourTree
{



    public override void ConstructBehaviourTree()
    {

        /*
        DieNode die = new DieNode(this);
        IsDeadDecorator deadDec = new IsDeadDecorator(this);
        Sequence dieSequence = new Sequence(new List<Node> { die }, deadDec, "die");

        /*******Stun Sequence********/
        StunNode stun = new StunNode(this);
        CooldownNode stunWait = new CooldownNode(this, BlackBoard.StunLength);
        ExitStunNode exitStun = new ExitStunNode(this);
        IsStunnedDecorator stunDec = new IsStunnedDecorator(this);
        Sequence stunSequence = new Sequence(new List<Node> { stun, stunWait, exitStun }, stunDec, "Stun");

        /******Alarm Sequence*******/
        SendForHelp sendForHelp = new SendForHelp(this);
        WaitNode helpWait = new WaitNode(BlackBoard.WaitTime);
        Sequence alarmSequence = new Sequence(new List<Node> { sendForHelp, helpWait }, new NeedHelpDecorator(this), "Alarm");


        /*****Knock Back Sequence****/
        KnockBackNode knockBack = new KnockBackNode(this);
        WaitNode knockWait = new WaitNode(1.3f);
        Sequence knockBackSequence = new Sequence(new List<Node> { knockBack, knockWait }, new KnockBackDecorator(this), "Knock");

        /****Return Home Sequence****/
        GoHomeNode goHome = new GoHomeNode(this);
        TooFarFromHomeDecorator tooFarFromHomeDec = new TooFarFromHomeDecorator(this);
        Sequence goHomeSequence = new Sequence(new List<Node> { goHome }, tooFarFromHomeDec, "Return");


        /***Chase n Attack Sequence**/
        ChaseNode chase = new ChaseNode(this);
        AttackNode attack = new AttackNode(this);
        CooldownNode cooldown = new CooldownNode(this, BlackBoard.AttackCooldown);
        Sequence attackSequence = new Sequence(new List<Node> { attack, cooldown}, new BaseDecorator(), "Attack");
            
       
        Sequence chaseAndAttackSequence = new Sequence(new List<Node> { chase, attackSequence}, new ChasePlayerDecorator(this), "Chase");



        /*****Aid Ally Sequence*****/
        AidAlly aidAlly = new AidAlly(this);
        Sequence aidSequence = new Sequence(new List<Node> { aidAlly }, new AidAllyDecorator(this), "Aid Ally");


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
        Sequence patrolSequence = new Sequence(new List<Node> {  moveToPatrolPoint, patrolWait, setNextPatrolPoint }, new CanPatrolDecorator(this), "Patrol");


        /********Top Sequence********/
        Selector topSequence = new Selector(new List<Node> { 
            /*Place all sequences here in the order you want*/
            //dieSequence,
            stunSequence,
            alarmSequence, 
            knockBackSequence,
            goHomeSequence, 
            chaseAndAttackSequence,
            aidSequence,
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
