using UnityEngine;

public abstract class EnemyState : State
{
    [SerializeField] protected float moveSpeed;

    private AIController aiController;
    public AIController AIController => aiController = aiController != null ? aiController : (AIController)owner;

    public override void Enter()
    {
       AIController.Agent.speed = moveSpeed;
       
    }
    public override void HandleUpdate()
    {
        AIController.Animator.SetFloat("Speed", AIController.Agent.velocity.magnitude);
    }

    protected bool CanSeePlayer()
    {
        //TODO Fix better line of sight
        return !Physics.Linecast(aiController.transform.position, aiController.player.transform.position, aiController.visionMask);
    }
}
