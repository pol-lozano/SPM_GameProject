using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitBox : MonoBehaviour
{
    public HitComponent hitComponent;

    public void ApplyDamage(HitInfo info)
    {
        hitComponent.HandleHit(info);
    }
}
