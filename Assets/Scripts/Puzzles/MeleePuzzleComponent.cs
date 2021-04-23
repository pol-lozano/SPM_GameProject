using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleePuzzleComponent : HitComponent
{
    


    public override void HandleHit(HitInfo info)
    {

        if (info.damager.GetType() == typeof(MeleeWeapon))
            Unlock(info);
    }

    private void Unlock(HitInfo info)
    {
        /*
         * Do some shit to unlock door or lower bridge not sure how we do this
         * start animation and have eventTriggers in animation for sound and particles?
         */

        PuzzleEvent p = new PuzzleEvent(info.damager.gameObject, info.damager.gameObject.name);
        EventHandler<PuzzleEvent>.FireEvent(p);

        Destroy(this);

    }
}
