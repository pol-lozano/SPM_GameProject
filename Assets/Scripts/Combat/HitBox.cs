//Author: Pol Lozano Llorens
using UnityEngine;

public class HitBox : MonoBehaviour
{
    public HitComponent hitComponent;

    public void ApplyHit(HitInfo info)
    {
        hitComponent.HandleHit(info);
    }
}
