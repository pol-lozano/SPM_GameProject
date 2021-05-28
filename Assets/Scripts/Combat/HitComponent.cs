// Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class HitComponent : MonoBehaviour
{
    [SerializeField] protected AudioSource audioSource;
    [SerializeField] protected AudioData hitSounds;
    [SerializeField] protected ShakeEventData shakeData;
    public abstract void HandleHit(HitInfo info);
}
