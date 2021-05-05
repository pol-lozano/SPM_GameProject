//Author: Rickard Lindgren
//Secondary Author: Sajid Massoud
using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/Death")]
public class PlayerDeath : PlayerState
{
    public override void Enter()
    {
        Player.Animator.SetBool("Death", true);
    }

    public override void Exit()
    {
        Player.Animator.SetBool("Death", false);
    }

    public override void EvaluateTransitions()
    {
        if (Player.GetComponent<HealthComponent>().CurrentHealth > 0)
            stateMachine.Transition<PlayerGroundedState>();
    }
}


