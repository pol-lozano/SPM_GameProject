//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleePuzzleComponent : HitComponent
{   
    [SerializeField] private int puzzleID;
    private bool isUnlocked;

    public override void HandleHit(HitInfo info)
    {

        if (isUnlocked == false && info.damager.GetType() == typeof(MeleeWeapon))
            Unlock(info);
            
    }

    private void Unlock(HitInfo info)
    {

        isUnlocked = true;

        PuzzleEvent p = new PuzzleEvent(puzzleID);
        if (shakeData != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));
        if(hitSounds != null)
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));

        EventHandler<PuzzleEvent>.FireEvent(p);


    }
}
