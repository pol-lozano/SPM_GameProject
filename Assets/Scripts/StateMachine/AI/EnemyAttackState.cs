using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/AttackState")]
public class EnemyAttackState : EnemyState
{
    // Attributes
    [SerializeField] private float chaseDistance;
    [SerializeField] private float cooldown;

    private float currentCool;

    // Methods
    public override void Enter()
    {
        base.Enter();
        currentCool = cooldown;
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        AIController.Agent.SetDestination(AIController.player.transform.position);
        Attack();
    }

    public override void EvaluateTransitions()
    {
        if (!CanSeePlayer())
            stateMachine.Transition<EnemyAlertState>();
        if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) > chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        //if (Input.GetKeyDown(KeyCode.Space))
            //stateMachine.Transition<EnemyFleeState>();
    }

    private void Attack()
    {
        currentCool -= Time.deltaTime;

        if (currentCool > 0)
            return;

        stateMachine.Transition<EnemyDeadState>();
        // Insert some attack logic here

        currentCool = cooldown;
    }
}
