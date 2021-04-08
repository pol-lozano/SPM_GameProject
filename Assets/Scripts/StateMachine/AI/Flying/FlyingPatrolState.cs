using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/PatrolState")]
public class FlyingPatrolState : EnemyState
{ 
    [SerializeField] private Vector3[] patrolPoints;
    [SerializeField] private float chaseDistance;
    [SerializeField] private float hearingRange;

    private int currentPoint = 0;

    // Methods
    public override void Enter()
    {
        base.Enter();
        ChooseClosest();
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        AIController.Agent.SetDestination(patrolPoints[currentPoint]);
        if (Vector3.Distance(AIController.transform.position, patrolPoints[currentPoint]) < AIController.Agent.stoppingDistance + 1)
            currentPoint = (currentPoint + 1) % patrolPoints.Length;
        
    }
    public override void EvaluateTransitions()
    {
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < hearingRange)
            stateMachine.Transition<FlyingAlertState>();
        else if (AIController.isStunned)
            stateMachine.Transition<FlyingStunState>();
    }

    private void ChooseClosest()
    {
        int closest = 0;
        for (int i = 0; i < patrolPoints.Length; i++)
        {
            float dist = Vector3.Distance(AIController.transform.position, patrolPoints[i]);
            if (dist < Vector3.Distance(AIController.transform.position, patrolPoints[closest]))
                closest = i;
        }
        currentPoint = closest;
    }
}
