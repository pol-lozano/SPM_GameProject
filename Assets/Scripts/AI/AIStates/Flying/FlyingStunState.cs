using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/StunState")]
public class FlyingStunState : EnemyState
{
    [SerializeField] private float sinkingSpeed;
    [SerializeField] private float stunTime;
    [SerializeField] private float riseSpeed;
    public float timer;


    public override void Enter()
    {
        AIController.Agent.SetDestination(AIController.transform.position);
        AIController.HealthComponent.IsStunned = false;
        timer = stunTime;
        Debug.Log("STUN");
        base.Enter();
        baseOffset = AIController.Agent.baseOffset;
        Debug.Log(baseOffset);
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        timer -= Time.deltaTime;
        if (timer > 0)
            Sink();
        else
            Rise();
    }

    void Sink()
    {
        if (AIController.Agent.baseOffset > 1.3f)
            AIController.Agent.baseOffset -= sinkingSpeed * Time.deltaTime;
        else
            AIController.Agent.baseOffset = 1.2f;
    }

    void Rise()
    {
        Debug.Log(baseOffset);
        if (AIController.Agent.baseOffset <= baseOffset)
            AIController.Agent.baseOffset += riseSpeed * Time.deltaTime;
        else
            stateMachine.Transition<FlyingPatrolState>();
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
    }
}
