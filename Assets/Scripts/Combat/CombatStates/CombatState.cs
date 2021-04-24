//Author: Pol Lozano Llorens
using UnityEngine;

public abstract class CombatState : State
{
    private PlayerCombat player;
    public PlayerCombat Player => player = player != null ? player : (PlayerCombat)owner;

    protected int attackTriggerHash;
    protected int timeSinceLastAttackFloatHash;
    protected int isAimingBoolHash;
    protected int isAttackingBoolHash;

    public override void Initialize(StateMachine stateMachine, object owner)
    {
        base.Initialize(stateMachine, owner);
        InitializeAnimatorHashes();
    }

    private void InitializeAnimatorHashes()
    {
        attackTriggerHash = Animator.StringToHash("Attack");
        timeSinceLastAttackFloatHash = Animator.StringToHash("TimeSinceLastAttack");
        isAimingBoolHash = Animator.StringToHash("IsAiming");
        isAttackingBoolHash = Animator.StringToHash("IsAttacking");
    }
}
