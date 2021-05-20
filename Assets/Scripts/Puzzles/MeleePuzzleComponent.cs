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
        /*
         * Do some shit to unlock door or lower bridge not sure how we do this
         * start animation and have eventTriggers in animation for sound and particles?
         */
        isUnlocked = true;

        PuzzleEvent p = new PuzzleEvent(puzzleID);

        EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));
        EventHandler<PuzzleEvent>.FireEvent(p);
        
        //saker borde hända via animationsevent istället. där kan man animera och säga till den att byta mesh och förstöra när vi vill
       // Destroy(gameObject);

    }
}
