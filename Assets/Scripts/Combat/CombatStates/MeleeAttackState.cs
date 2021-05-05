//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Melee")]
public class MeleeAttackState : CombatState
{
    [SerializeField] private ShakeEventData shakeData;
    private float timeSinceLastAttack = 0;

    public override void Enter()
    {
        //Send time since last attack and trigger attack animation based on that
        Player.Animator.SetTrigger(attackTriggerHash);
    }

    public override void HandleUpdate()
    {
        Player.AttackInput = false;
        Player.ShootInput = false;
    }

    //Called by Animation Event in attack animation
    public override void OnAnimationStarted()
    {
        Player.Animator.SetBool(isAttackingBoolHash, true);
        timeSinceLastAttack = Time.time - timeSinceLastAttack;
        Debug.Log("Time since last attack: " + timeSinceLastAttack);

        //Play attack sound
        //Begin listening for hits
        Player.MeleeWeapon.Collider.enabled = true;

        if (shakeData != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(Player.gameObject, shakeData));
    }

    public override void OnAnimationEnded()
    {
        Player.Animator.SetBool(isAttackingBoolHash, false);
        Player.Animator.SetFloat(timeSinceLastAttackFloatHash, timeSinceLastAttack);

        //Stop listening for hits     
        Player.MeleeWeapon.Collider.enabled = false;

        timeSinceLastAttack = Time.time;
        stateMachine.Transition<IdleState>();
    }
}

