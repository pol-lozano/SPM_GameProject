using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitBox : MonoBehaviour
{
    public HealthComponent health;

    public void OnGetHit(Collision collision, int dmg)
    {
        health.TakeDamage(dmg);
    }
}
