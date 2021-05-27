//Author: Rickard Lindgren
using UnityEngine;

public class ProjectilePuzzleComponent : HitComponent
{   
    [SerializeField] private int puzzleID;
    [SerializeField] private ShakeEventData pussleShake;
    public override void HandleHit(HitInfo info)
    {
        if (info.damager.GetType() == typeof(Projectile))
            Unlock(info);
    }

    private void Unlock(HitInfo info)
    {
        /*
         * Do some shit to unlock door or lower bridge not sure how we do this
         * start animation and have eventTriggers in animation for sound and particles?
         */
        GetComponent<Collider>().enabled = false;
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(pussleShake));
        PuzzleEvent p = new PuzzleEvent(puzzleID);
        EventHandler<PuzzleEvent>.FireEvent(p);
    }

}
