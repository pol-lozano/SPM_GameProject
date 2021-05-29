using UnityEngine;

[CreateAssetMenu(menuName =("BossState/ChargeState"))]
public class BossChargeState : BossState
{
    [SerializeField] private float stoppingDistance = 5f;
    public override void Enter()
    {
        base.Enter();
        BossController.Agent.SetDestination((BossController.Player.transform.position - BossController.transform.position).normalized * 100);
    }

    public override void EvaluateTransitions()
    {
        base.EvaluateTransitions();
        if (BossController.Agent.remainingDistance <= stoppingDistance)
            stateMachine.Transition<BossStunnedState>();
    }
}
