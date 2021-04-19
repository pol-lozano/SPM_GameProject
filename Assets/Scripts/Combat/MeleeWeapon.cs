using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeWeapon : MonoBehaviour
{
    private Collider col;
    private int damageAmount;
    private AudioClip hitAudio;
    private AudioClip attackAudio;
    
    private void Awake()
    {
        col = GetComponent<Collider>();
    }

    private void OnTriggerEnter(Collider other)
    {
        CheckHit(other);
    }

    private bool CheckHit(Collider other)
    {
        HitBox h = other.GetComponent<HitBox>();

        if (h == null)
            return false;

        //Check if owner of health system

        HitInfo info = new HitInfo()
        {
            amount = damageAmount,
            //ADD ALL INFO
        };

        h.ApplyDamage(info);

        return true;
    }
}
