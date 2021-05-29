using UnityEngine;

[CreateAssetMenu(menuName="BossState/TargetingState")]
public class BossTargetingState : BossState
{
    [SerializeField] private float targetingTime = 3f;
    private float timer;

    public override void Enter()
    {
        base.Enter();
        BossController.Animator.SetBool("Targeting", true);
        timer = targetingTime;
    }

    public override void HandleUpdate()
    {
        Rotate();
        timer -= Time.deltaTime;
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (timer <= 0)
            stateMachine.Transition<BossChargeState>();
    }

    /// <summary>
    /// Rotate towards players rotation
    /// </summary>
    void Rotate()
    {
        BossController.transform.LookAt(
               new Vector3(BossController.Player.transform.position.x,
               BossController.transform.position.y,
               BossController.Player.transform.position.z));
    }

    public override void Exit()
    {
        base.Exit();
        BossController.Animator.SetBool("Targeting", false);
    }
}

