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
        AIController.Agent.SetDestination(AIController.Player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (!CanSeePlayer())
            stateMachine.Transition<FlyingAlertState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) < attackDistance)
            stateMachine.Transition<FlyingAttackState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) > lostTargetDistance)
            stateMachine.Transition<FlyingPatrolState>();
        else if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<FlyingStunState>();
    }
}
