using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/PatrolState")]
public class FlyingPatrolState : EnemyState
{ 
    [SerializeField] private Vector3[] patrolPoints;
    [SerializeField] private float chaseDistance;
    [SerializeField] private float hearingRange;

    private Transform currentPoint;

    public override void Enter()
    {
        base.Enter();
        //ChooseClosest();
        currentPoint = AIController.GetPath().path[0];
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        
        
        Debug.Log(Vector3.Distance(AIController.transform.localPosition, currentPoint.position));
        Debug.DrawLine(AIController.transform.position, currentPoint.position, Color.cyan, 0.2f);
        AIController.Agent.SetDestination(currentPoint.position);
        if (Vector3.Distance(AIController.transform.position, currentPoint.position) < AIController.Agent.stoppingDistance + 1)
        {
            Debug.Log("next point");
            currentPoint = AIController.GetPath().Next();
        }
            
        
    }
    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (CanSeePlayer() && Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < hearingRange)
            stateMachine.Transition<FlyingAlertState>();
        else if (AIController.isStunned)
            stateMachine.Transition<FlyingStunState>();
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
