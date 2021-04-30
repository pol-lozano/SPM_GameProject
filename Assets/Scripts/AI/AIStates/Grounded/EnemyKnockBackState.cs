using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/KnockBackState")]
public class EnemyKnockBackState : EnemyState
{
    [SerializeField] private float strength;
    [SerializeField] private float length;
    private float timer;

    public override void Enter()
    {
        Debug.Log("KNOCK");
        base.Enter();
        timer = length;
        AIController.Animator.SetBool("Hit", true);
        //AIController.transform.Translate(-AIController.transform.forward * (strength * Time.deltaTime));
    }
    public override void HandleUpdate()
    {
        timer -= Time.deltaTime;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (timer < 0)
            stateMachine.Transition<EnemyAlertState>();
    }

    public override void Exit()
    {
        AIController.Animator.SetBool("Hit", false);
    }
}
