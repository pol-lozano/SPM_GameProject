using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShootingState : EnemyState
{
    [SerializeField] private float chaseDistance;
    void Start()
    {
        Shoot();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (!CanSeePlayer())
            stateMachine.Transition<EnemyAlertState>();
        if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) > chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        if (AIController.isStunned)
            stateMachine.Transition<EnemyStunState>();
    }


    private void Shoot()
    {
        
    }
}
