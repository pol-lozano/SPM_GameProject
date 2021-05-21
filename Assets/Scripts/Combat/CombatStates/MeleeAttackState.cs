//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(menuName = "CombatState/Melee")]

public class MeleeAttackState : CombatState
{
    [SerializeField] private ShakeEventData shakeData;
    [SerializeField] private AudioData attackSound;

    private float timeSinceLastAttack = 0;

    public override void Enter()
    {
        //Send time since last attack and trigger attack animation based on that
        Player.Animator.SetTrigger(attackTriggerHash);
        Player.Animator.SetBool(isAttackingBoolHash, true);

    }

    public override void HandleUpdate()
    {
        Player.AttackInput = false;
        Player.ShootInput = false;
    }

    //Called by Animation Event in attack animation
    public override void OnAnimationStarted()
    {
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(attackSound, Player.MeleeWeapon.AudioSource));

        timeSinceLastAttack = Time.time - timeSinceLastAttack;
        Debug.Log("Time since last attack: " + timeSinceLastAttack);

        //Play attack sound
        //Begin listening for hits
        Player.MeleeWeapon.Collider.enabled = true;

        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));
    //    EventHandler<AudioEvent>.FireEvent(new AudioEvent(attackSoundData));
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

