// Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class HitComponent : MonoBehaviour
{
    public abstract void HandleHit(HitInfo info);
}
