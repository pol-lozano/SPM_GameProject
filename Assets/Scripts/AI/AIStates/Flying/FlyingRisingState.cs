using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/RiseState")]
public class FlyingRisingState : EnemyState
{
    [SerializeField] private float riseSpeed;
    [SerializeField] private float stunTime;
    [SerializeField] private float height;
    private float timer;
    
  

    public override void Enter()
    {
        AIController.Agent.SetDestination(AIController.transform.position);
        timer = stunTime;
        Debug.Log("STUN");
    }

    public override void HandleUpdate()
    {
        timer -= Time.deltaTime;

    }

    

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (timer < 0)
            stateMachine.Transition<FlyingPatrolState>();
    }
}
