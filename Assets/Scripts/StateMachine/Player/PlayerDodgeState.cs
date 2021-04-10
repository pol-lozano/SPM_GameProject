using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Dodge")]
public class PlayerDodgeState : PlayerState
{
    [SerializeField] private float cooldown;
    [SerializeField] private float dodgeForce;

    //Man borde ha en timer som säger typ hur långt man dodgar och sen som säger när man lämnar statet
    private float coolTimer;
    public override void Enter()
    {
        Player.dodgeInput = false;
        coolTimer = cooldown;
        Dodge();
    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        coolTimer -= Time.deltaTime;        
    }

    public override void EvaluateTransitions()
    {
        if(coolTimer < 0) stateMachine.Transition<PlayerGroundedState>();
    }

    private void Dodge()
    {
        Player.PhysicsComponent.Velocity += Player.GetInput().normalized * dodgeForce;      
    }
}
