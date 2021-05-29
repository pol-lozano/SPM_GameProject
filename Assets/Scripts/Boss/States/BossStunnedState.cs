using UnityEngine;

[CreateAssetMenu(menuName = ("BossState/StunnedState"))]
public class BossStunnedState : BossState
{
    [SerializeField] private float stunLength = 3f;
    private float timer;

    public override void Enter()
    {
        base.Enter();
        BossController.HealthComponent.Invulnerable = false;
        BossController.Animator.SetBool("Stunned", true);
        timer = stunLength;
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        timer -= Time.deltaTime;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (timer <= 0)
            stateMachine.Transition<BossTargetingState>();
    }

    public override void Exit()
    {
        BossController.HealthComponent.Invulnerable = true;
        BossController.Animator.SetBool("Stunned", false);
    }
}
