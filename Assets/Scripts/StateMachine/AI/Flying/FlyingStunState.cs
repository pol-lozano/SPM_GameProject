using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/StunState")]
public class FlyingStunState : EnemyState
{
    [SerializeField] private float sinkingSpeed;
    [SerializeField] private float stunTime;
    private float timer;
    
  

    public override void Enter()
    {
        AIController.Agent.SetDestination(AIController.transform.position);
        timer = stunTime;
    }

    public override void HandleUpdate()
    {
        timer -= Time.deltaTime;
        Sink();
    }

    void Sink()
    {
        if (AIController.Agent.baseOffset > 0.3)
            AIController.Agent.baseOffset -= sinkingSpeed * Time.deltaTime;
        else
            AIController.Agent.baseOffset = 0;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();

        if (timer < 0)
            stateMachine.Transition<FlyingRisingState>();
    }
}
