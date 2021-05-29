using UnityEngine;

public class BossState : State
{
    [SerializeField] protected float moveSpeed;

    private BossController bossController;
    public BossController BossController => bossController = bossController != null ? bossController : (BossController)owner;

    public override void Enter()
    {
        BossController.Agent.speed = moveSpeed;
    }

    public override void HandleUpdate()
    {
        BossController.Animator.SetFloat("Speed", BossController.Agent.velocity.magnitude);
    }

    public override void EvaluateTransitions()
    {
        if (BossController.HealthComponent.CurrentHealth <= 0)
            stateMachine.Transition<BossDeathState>();
    }
}