//Author: Rickard Lindgren
//SecondaryAuthor: Pol Lozano Llorens

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/PatrolState")]
public class EnemyPatrolState : EnemyState
{
    [SerializeField] private float chaseDistance;
    [SerializeField] private float hearingRange;

    private Transform patrolPoint;
    private Vector3 aiObj;
    private Vector3 adjustedPoint;

    public override void Enter()
    {
        base.Enter();
        patrolPoint = AIController.GetPath().GetPath[0];
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        aiObj = AIController.transform.position;
        SetAdjustedPoint();
        AIController.Agent.SetDestination(adjustedPoint);
        if (Vector3.Distance(aiObj, adjustedPoint) < AIController.Agent.stoppingDistance + 0.1f)
            patrolPoint = AIController.GetPath().Next();




    }
    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();

        if (CanSeePlayer() && DistanceToPlayer() < chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        if (DistanceToPlayer() < hearingRange)
            stateMachine.Transition<EnemyAlertState>();
        if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<EnemyStunState>();
    }

    private void SetAdjustedPoint()
    {
        adjustedPoint = new Vector3(patrolPoint.position.x, aiObj.y, patrolPoint.position.z);
    }

    
}
