using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class MeleeAttackState : CombatState
{
    [SerializeField] private float attackCooldown;
    [SerializeField] private float attackTimer;
    public override void Enter()
    {
        //Debug.Log("Attack");
        Attack();
        //logik för attack och animationer
        attackCooldown = attackTimer;
    }

    public override void HandleUpdate()
    {
        attackCooldown -= Time.deltaTime;
        Player.AttackInput = false;
        Player.ShootInput = false;
    }

    public override void EvaluateTransitions()
    {
        if (attackCooldown < 0) stateMachine.Transition<IdleState>();
    }

    //This should be redone and use a proper collider for the weapon instead
    private void Attack()
    {
        RaycastHit[] hits = Physics.BoxCastAll(Player.transform.position, Vector3.one * 2, Player.transform.forward);
        foreach(RaycastHit h in hits)
        {
            var hit = h.transform.GetComponent<HitBox>();
            if (hit)
            {
                hit.OnGetHit(1);
                UnityEngine.Debug.Log("HIT MELEE");
                break;
            }
        }
       
    }
}
