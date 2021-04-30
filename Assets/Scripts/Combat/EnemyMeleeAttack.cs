using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMeleeAttack : MonoBehaviour
{

    private CapsuleCollider attackCollider;
    [SerializeField] private int damageAmount;


    private void Awake()
    {
        attackCollider = GetComponent<CapsuleCollider>();
        attackCollider.enabled = false;
    }

    public CapsuleCollider Coll { get => attackCollider; }


    private void OnCollisionEnter(Collision collision)
    {
        CheckHit(collision.collider);
    }


    private bool CheckHit(Collider other)
    {
        Debug.Log("träffa nått");
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
