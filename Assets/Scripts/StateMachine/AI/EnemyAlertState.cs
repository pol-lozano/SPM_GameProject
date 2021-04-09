using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/AlertState")]
public class EnemyAlertState : EnemyState
{
    // Attributes
    [SerializeField] private float chaseDistance;
    [SerializeField] private float patrolDistance;
    [SerializeField] private float alertTime;

    private float alertTimer;

    // Methods
    public override void Enter()
    {
        base.Enter();
        AIController.Agent.SetDestination(AIController.player.transform.position);
        alertTimer = alertTime;
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        alertTimer -= Time.deltaTime;
    }
    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        if (alertTimer < 0)
            stateMachine.Transition<EnemyPatrolState>();
        if (AIController.isStunned)
            stateMachine.Transition<EnemyStunState>();
    }
}
