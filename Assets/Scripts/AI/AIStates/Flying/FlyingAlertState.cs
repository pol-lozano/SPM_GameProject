//Author: Rickard Lindgren


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/AlertState")]
public class FlyingAlertState : EnemyState
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
        AIController.Agent.SetDestination(AIController.Player.transform.position);
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
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) < chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        //skulle också kunna baseras på avstånd från startpunkten?
        else if (alertTimer < 0)
            stateMachine.Transition<FlyingPatrolState>();
        else if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<FlyingStunState>();
    }
}
