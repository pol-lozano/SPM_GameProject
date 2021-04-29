using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/StunState")]
public class EnemyStunState : EnemyState
{

    public override void Enter()
    {
        base.Enter();
        AIController.Animator.SetBool("Stunned", true);

    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
    }

    public override void OnAnimationEnded()
    {

        Debug.Log("WTF VI ÄR HÄR!=?");

        AIController.Animator.SetBool("Stunned", false);
        AIController.HealthComponent.IsStunned = false;
        stateMachine.Transition<EnemyPatrolState>();
    }
}
