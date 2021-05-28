//Author: Rickard Lindgren
using UnityEngine;

public class ProjectilePuzzleComponent : HitComponent
{   
    [SerializeField] private int puzzleID;
    public override void HandleHit(HitInfo info)
    {
        if (info.damager.GetType() == typeof(Projectile))
            Unlock(info);
    }

    private void Unlock(HitInfo info)
    {   
        GetComponent<Collider>().enabled = false;
        if(hitSounds != null)
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));

        if(shakeData != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));

        PuzzleEvent p = new PuzzleEvent(puzzleID);
        EventHandler<PuzzleEvent>.FireEvent(p);
    }

}
