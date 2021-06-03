using UnityEngine;

[CreateAssetMenu(menuName="BossState/TargetingState")]
public class BossTargetingState : BossState
{
    [SerializeField] private ShakeEventData stompShake;
    [SerializeField] private AudioData audioData;

    public override void Enter() => BossController.RigBuilder.layers[0].active = false;

    public override void HandleUpdate() => Rotate();

    public override void OnAnimationStarted()
    {
        //Play sound and effects of feet stomping
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(audioData, bossController.AudioSource));
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(stompShake));
    }

    public override void OnAnimationEnded()
    {
        BossController.RigBuilder.layers[0].active = true;
        stateMachine.Transition<BossChargeState>();
    }

    /// <summary>
    /// Rotate towards players rotation
    /// </summary>
    void Rotate()
    {
        BossController.transform.LookAt(
               new Vector3(BossController.Player.transform.position.x,
               BossController.transform.position.y,
               BossController.Player.transform.position.z));
    }
}

