using UnityEngine;

[CreateAssetMenu(menuName = "PlayerState/PlayerAirState/Falling")]
public class PlayerFallingState : PlayerAirState
{
    public override void Enter()
    {
        base.Enter();
        //Animator set fall trigger??
    }
}
