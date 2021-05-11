//Author: Rickard Lindgren
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
        AIController.Agent.SetDestination(AIController.Player.transform.position);
        currentCool -= Time.deltaTime;
        if(currentCool < 0)
        {
            currentCool = cooldown;
            Attack();
        }
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (!CanSeePlayer())
            stateMachine.Transition<FlyingAlertState>();
        else if (Vector3.Distance(AIController.transform.position, AIController.Player.transform.position) > chaseDistance)
            stateMachine.Transition<FlyingChaseState>();
        else if (AIController.HealthComponent.IsStunned)
            stateMachine.Transition<FlyingStunState>();
    }

    private void Attack()
    {
        
        //stateMachine.Transition<FlyingDeadState>();
        // Insert some attack logic here
        GameObject g = ObjectPooler.instance.SpawnFromPool("shadowball");
        Projectile proj = g.GetComponent<Projectile>();
        proj.transform.position = AIController.transform.position + AIController.transform.forward;
        proj.transform.rotation = AIController.transform.rotation;
        proj.SetActive(true);
        proj.SetForce(AIController.Player.transform.position - proj.transform.position);



        currentCool = cooldown;
    }

    public override void OnAnimationStarted()
    {
        base.OnAnimationStarted();
    }

    public override void OnAnimationEnded()
    {
        base.OnAnimationEnded();
    }
}
