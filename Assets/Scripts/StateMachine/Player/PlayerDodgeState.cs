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
        coolTimer = cooldown;

    }

    public override void HandleUpdate()
    {
        base.HandleUpdate();
        coolTimer -= Time.deltaTime;

        Dodge();
        
        Player.dodgeInput = false;

    }

    public override void EvaluateTransitions()
    {
        if(coolTimer < 0) stateMachine.Transition<PlayerGroundedState>();
        
    }

    private void Dodge()
    {
        Vector3 dir = Player.GetInput();
        if (input != Vector3.zero) Player.PhysicsComponent.Velocity += (Player.mainCamera.transform.right * input.x + Player.mainCamera.transform.forward * input.y) * dodgeForce;
        else Player.PhysicsComponent.Velocity += -Player.mainCamera.transform.forward * dodgeForce;
    }
}
