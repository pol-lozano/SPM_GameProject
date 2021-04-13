using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/RiseState")]
public class FlyingRisingState : EnemyState
{
    [SerializeField] private float riseSpeed;
    [SerializeField] private float stunTime;
    private float timer;
    
  

    public override void Enter()
    {
        AIController.Agent.SetDestination(AIController.transform.position);
        timer = stunTime;
        UnityEngine.Debug.Log("STUN");
    }

    public override void HandleUpdate()
    {
        timer -= Time.deltaTime;
        Rise();
    }

    void Rise()
    {
        if (AIController.Agent.baseOffset < 5.3)
            AIController.Agent.baseOffset += riseSpeed * Time.deltaTime;
        else
            AIController.Agent.baseOffset = 5.5f;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (timer < 0)
            stateMachine.Transition<FlyingPatrolState>();
    }
}
