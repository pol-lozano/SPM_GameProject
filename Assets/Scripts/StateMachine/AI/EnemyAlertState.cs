using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/AlertState")]
public class EnemyAlertState : EnemyState
{
    // Attributes
    [SerializeField] private float chaseDistance;

    // Methods
    public override void Enter()
    {
        base.Enter();
        AIController.Agent.SetDestination(AIController.player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        if (AIController.Agent.remainingDistance < 1)
            stateMachine.Transition<EnemyPatrolState>();
    }
}
