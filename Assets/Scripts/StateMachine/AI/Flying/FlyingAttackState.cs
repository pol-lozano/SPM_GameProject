using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/AttackState")]
public class FlyingAttackState : EnemyState
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
        Attack();
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        AIController.Agent.SetDestination(AIController.player.transform.position);
        currentCool -= Time.deltaTime;
        if(currentCool < 0)
        {
            currentCool = cooldown;
            Attack();
        }
    }

    public override void EvaluateTransitions()
    {
        if (!CanSeePlayer())
            stateMachine.Transition<FlyingAlertState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.player.transform.position) > chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (AIController.isStunned)
            stateMachine.Transition<FlyingStunState>();
    }

    private void Attack()
    {
        
        //stateMachine.Transition<FlyingDeadState>();
        // Insert some attack logic here
        GameObject g = AIController.pooler.SpawnFromPool("shadowball");
        Projectile proj = g.GetComponent<Projectile>();
        proj.transform.position = AIController.transform.position + AIController.transform.forward;
        proj.transform.rotation = AIController.transform.rotation;
        proj.SetActive(true);
        //skjuter i fel jävla riktning och fattar inte varför
        proj.SetForce(AIController.player.transform.position - proj.transform.position);



        currentCool = cooldown;
    }
}
