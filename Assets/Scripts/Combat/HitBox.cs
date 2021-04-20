using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitBox : MonoBehaviour
{
    public HealthComponent health;

    public void ApplyDamage(HitInfo info)
    {
        health.ApplyDamage(info);
    }
}
