//Author: Rickard Lindgren
//SecondaryAuthor: Pol Lozano Llorens

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/AttackState")]
public class EnemyAttackState : EnemyState
{
    // Attributes
    [SerializeField] private float chaseDistance;
    [SerializeField] private float cooldown;
    [SerializeField] private float attackDistance;

    private float currentCool;
    private bool attacking;

    private float rotationRate = 0.5f;
    private float rotationTimer;

    // Methods
    public override void Enter()
    {
        base.Enter();
        currentCool = cooldown;
        AIController.Animator.SetBool("Attacking", true);
        rotationTimer = rotationRate;
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        rotationTimer -= Time.deltaTime;
        if (rotationTimer < 0)
            Rotate();

        AIController.Agent.SetDestination(AIController.Player.transform.position);
        if(DistanceToPlayer() < attackDistance && attacking == false)
            Attack();
        if(attacking)
            HandleCooldown();

    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (!CanSeePlayer())
            stateMachine.Transition<EnemyAlertState>();
        if (Vector3.Distance(AIController.Player.transform.position, AIController.AttackPoint.position) > chaseDistance)
            stateMachine.Transition<EnemyChaseState>();
        if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<EnemyStunState>();
        //if (Input.GetKeyDown(KeyCode.Space))
        //stateMachine.Transition<EnemyFleeState>();
    }

    private void Attack()
    {
        attacking = true;
        

        //AIController.Animator.SetTrigger("attack");

    }

    private void HandleCooldown()
    {
        currentCool -= Time.deltaTime;
        if(currentCool < 0)
        {
            attacking = false;
            currentCool = cooldown;
        }
    }

    public override void OnAnimationStarted()
    {
        //Turn On AttackCollider
        base.OnAnimationStarted();
    }
    public override void OnAnimationEnded()
    {
        //Turn Off AttackCollider
        base.OnAnimationEnded();
    }

    void Rotate()
    {
        if (Vector3.Distance(AIController.AttackPoint.position, AIController.Player.transform.position) > 0.1f)
            AIController.transform.LookAt(
                new Vector3(AIController.Player.transform.position.x,
                AIController.transform.position.y,
                AIController.Player.transform.position.z));
    }

    public override void Exit()
    {
        AIController.Animator.SetBool("Attacking", false);
    }
}
