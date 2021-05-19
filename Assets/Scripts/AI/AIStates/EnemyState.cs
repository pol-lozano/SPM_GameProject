//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren

using UnityEngine;

public abstract class EnemyState : State
{
    [SerializeField] protected float moveSpeed;
    [SerializeField] protected float baseOffset;

    private AIController aiController;
    public AIController AIController => aiController = aiController != null ? aiController : (AIController)owner;

    public override void Enter()
    {
        AIController.Agent.speed = 0.3f;
        //Debug.Log("ENTER: " + stateMachine.CurrentState + "   " + AIController.transform.position);
    }
    public override void HandleUpdate()
    {
        AIController.Animator.SetFloat("Speed", AIController.Agent.velocity.magnitude); 
    }

    public override void EvaluateTransitions()
    {
        if (AIController.HealthComponent.Invulnerable 
            && AIController.HealthComponent.LastType != typeof(Projectile) 
            && AIController.HealthComponent.IsStunned == false)
            stateMachine.Transition<EnemyKnockBackState>();
        if(AIController.HealthComponent.CurrentHealth <= 0) 
                stateMachine.Transition<EnemyDeadState>(); 
    }

    protected bool CanSeePlayer()
    {
        //TODO Fix better line of sight
        return !Physics.Linecast(aiController.transform.position, aiController.Player.transform.position, aiController.VisionMask);
    }

    protected float DistanceToPlayer()
    {
        return Vector3.Distance(AIController.transform.position, aiController.Player.transform.position);
    }

    protected float DistanceToPoint(Vector3 point)
    {
        return Vector3.Distance(AIController.transform.position, point);
    }

}
