using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/ChaseState")]
public class EnemyChaseState : EnemyState
{
    [SerializeField] private float attackDistance;
    [SerializeField] private float lostTargetDistance;

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        AIController.Agent.SetDestination(AIController.Player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();

        if (!CanSeePlayer()) 
            stateMachine.Transition<EnemyAlertState>();
        else if (DistanceToPlayer() < attackDistance) //Maybe make a method for getting the distance between player and enemy
            stateMachine.Transition<EnemyAttackState>();
        else if (DistanceToPlayer() > lostTargetDistance)
            stateMachine.Transition<EnemyPatrolState>();
        else if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<EnemyStunState>();
    }
}
