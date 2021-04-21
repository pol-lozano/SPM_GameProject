using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/StunState")]
public class EnemyStunState : EnemyState
{
    [SerializeField] private float stunTime;
    //[SerializeField] private float stopTime;
    //[SerializeField] private int comeBackSpeed; /*Hastighet när fienden "vaknar upp igen". borde vara en lägre hastighet än andra moveSpeed.*/

    private float stopTimer;
    private float stunTimer;
    public override void Enter()
    {
        base.Enter();
        //stopTimer = stopTime;
        stunTimer = stunTime;

    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();

        //stopTimer -= Time.deltaTime;
        stunTimer -= Time.deltaTime;
        AIController.HealthComponent.IsStunned = false;

        /*
        if(stopTimer < 0)
        {
            moveSpeed = (stopTimer * -1) * Time.deltaTime;
        }
        */
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        //Här går den till patrol. Hade kanske velat ha stacken här istället.. men den kanske också ska tappa bort spelaren lite?
        if (stunTimer < 0) stateMachine.Transition<EnemyPatrolState>();
    }
}
