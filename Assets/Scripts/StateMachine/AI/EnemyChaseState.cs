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
        AIController.Agent.SetDestination(AIController.player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        if (!CanSeePlayer()) 
            stateMachine.Transition<EnemyAlertState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) < attackDistance)
            stateMachine.Transition<EnemyAttackState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) > lostTargetDistance)
            stateMachine.Transition<EnemyPatrolState>();
    }
}
