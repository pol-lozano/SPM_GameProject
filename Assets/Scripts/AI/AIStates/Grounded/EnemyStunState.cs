using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/StunState")]
public class EnemyStunState : EnemyState
{

    [SerializeField] private float stunLength;

    private float timer;

    public override void Enter()
    {
        base.Enter();
        AIController.Animator.SetBool("Stunned", true);
        timer = stunLength;

    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        timer -= Time.deltaTime;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if(timer < 0)
            stateMachine.Transition<EnemyAlertState>();
    }

    public override void Exit()
    {
        AIController.HealthComponent.IsStunned = false;
        AIController.Animator.SetBool("Stunned", false);
    }
}
