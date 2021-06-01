using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbHitBox : HitBox
{
    public override void ApplyHit(HitInfo info)
    {
        base.ApplyHit(info);
        Destroy(gameObject); //Prob should play some particle effect too
    }
}
