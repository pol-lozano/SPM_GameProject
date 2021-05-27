//Author: Rickard Lindgren
using UnityEngine;

public class ProjectilePuzzleComponent : HitComponent
{   
    [SerializeField] private int puzzleID;
    [SerializeField] private ShakeEventData puzzleShake;
    public override void HandleHit(HitInfo info)
    {
        if (info.damager.GetType() == typeof(Projectile))
            Unlock(info);
    }

    private void Unlock(HitInfo info)
    {   
        GetComponent<Collider>().enabled = false;
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));

        if(puzzleShake != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(puzzleShake));

        PuzzleEvent p = new PuzzleEvent(puzzleID);
        EventHandler<PuzzleEvent>.FireEvent(p);
    }

}
