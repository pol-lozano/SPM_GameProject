using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class ShootState : CombatState
{
    [SerializeField] private float shotCooldown;
    [SerializeField] private float shotTimer;
    public override void Enter()
    {
        Debug.Log("SKJUT");
        //logik för skott

        shotCooldown = shotTimer;
        
    }

    public override void HandleUpdate()
    {
        shotCooldown -= Time.deltaTime;
        Player.ShootInput = false;
        Player.AttackInput = false;

        if (shotCooldown < 0)
            stateMachine.Transition<BaseState>();
    }
}
