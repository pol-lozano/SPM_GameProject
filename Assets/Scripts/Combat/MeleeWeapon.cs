using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeWeapon : MonoBehaviour
{
    public Collider Collider { get; private set; }
    [SerializeField] private int damageAmount;
    private AudioClip hitAudio;
    private AudioClip attackAudio;

    public bool attackEnded;

    private void Awake()
    {
        Collider = GetComponent<Collider>();
        Collider.enabled = false;
    }
    
    private void OnCollisionEnter(Collision collision)
    {
        CheckHit(collision.collider);
    }

    private bool CheckHit(Collider other)
    {
        HitBox h = other.GetComponent<HitBox>();

        if (h == null)
            return false;

        //Check if owner of health system

        HitInfo info = new HitInfo()
        {
            damager = this,
            amount = damageAmount,
            //ADD ALL INFO
        };

        h.ApplyHit(info);

        return true;
    }
}
