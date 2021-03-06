//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
using UnityEngine;

public class HitBox : MonoBehaviour
{
    public HitComponent hitComponent;

    public virtual void ApplyHit(HitInfo info)
    {
        hitComponent.HandleHit(info);
    }
}
