using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/PatrolState")]
public class FlyingPatrolState : EnemyState
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
        if (Vector3.Distance(aiObj, adjustedPoint) < AIController.Agent.stoppingDistance + 1)
            patrolPoint = AIController.GetPath().Next();

            
        
    }
    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) < chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) < hearingRange)
            stateMachine.Transition<FlyingAlertState>();
        else if (AIController.isStunned)
            stateMachine.Transition<FlyingStunState>();
    }

    private void SetAdjustedPoint()
    {
        adjustedPoint = new Vector3(patrolPoint.position.x, aiObj.y, patrolPoint.position.z);
    }

    /*
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
    */
}
