using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/AlertState")]
public class FlyingAlertState : EnemyState
{
    // Attributes
    [SerializeField] private float chaseDistance;

    // Methods
    public override void Enter()
    {
        base.Enter();
        AIController.Agent.SetDestination(AIController.player.transform.position);
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (AIController.Agent.remainingDistance < 1)
            stateMachine.Transition<FlyingPatrolState>();
        else if (AIController.isStunned)
            stateMachine.Transition<FlyingStunState>();
    }
}
