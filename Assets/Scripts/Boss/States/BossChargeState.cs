using UnityEngine;

[CreateAssetMenu(menuName =("BossState/ChargeState"))]
public class BossChargeState : BossState
{
    [SerializeField] private float stoppingDistance = 5f;

    public override void Enter()
    {
        base.Enter();
        BossController.Agent.SetDestination(BossController.Player.transform.position);
        BossController.RigBuilder.layers[0].active = true;
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        BossController.Agent.SetDestination(BossController.Player.transform.position);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (BossController.Agent.remainingDistance <= stoppingDistance)
            stateMachine.Transition<BossAttackState>();
    }
}
