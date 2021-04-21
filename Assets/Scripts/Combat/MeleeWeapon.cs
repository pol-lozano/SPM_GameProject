using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeWeapon : MonoBehaviour
{
    private Collider col;
    [SerializeField] private int damageAmount;
    private AudioClip hitAudio;
    private AudioClip attackAudio;

    public bool attackEnded;

    private void Awake()
    {
        col = GetComponent<Collider>();
        col.enabled = false;
    }

    private void TurnOnCollider() { col.enabled = true; }
    private void TurnOffCollider() { col.enabled = false; }

    private void OnTriggerEnter(Collider other)
    {
        
        CheckHit(other);
    }

    private bool CheckHit(Collider other)
    {
        HitBox h = other.GetComponent<HitBox>();

        if (h == null)
            return false;
        Debug.Log(h.gameObject.name);

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
