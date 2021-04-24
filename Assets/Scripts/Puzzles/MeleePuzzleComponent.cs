//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleePuzzleComponent : HitComponent
{

    [SerializeField] private int puzzleID;

    public override void HandleHit(HitInfo info)
    {
        Debug.Log(info.damager.GetType());
        
        if (info.damager.GetType() == typeof(MeleeWeapon))
            Unlock(info);
    }

    private void Unlock(HitInfo info)
    {
        /*
         * Do some shit to unlock door or lower bridge not sure how we do this
         * start animation and have eventTriggers in animation for sound and particles?
         */
        /*
        PuzzleEvent p = new PuzzleEvent(info.damager.gameObject, puzzleID);
        EventHandler<PuzzleEvent>.FireEvent(p);
        */
        Destroy(gameObject);

    }
}
