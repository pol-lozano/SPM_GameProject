using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/ChaseState")]
public class FlyingChaseState : EnemyState
{
    [SerializeField] private float attackDistance;
    [SerializeField] private float lostTargetDistance;

    public override void Enter()
    {

    }
    public override void HandleUpdate()
    {
        base.HandleUpdate();
        AIController.Agent.SetDestination(AIController.player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        if (!CanSeePlayer()) 
            stateMachine.Transition<FlyingAlertState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < attackDistance)
            stateMachine.Transition<FlyingAttackState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) > lostTargetDistance)
            stateMachine.Transition<FlyingPatrolState>();
    }
}
