//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] private LayerMask collisionLayer;
    [SerializeField] private float force;
    [SerializeField] private float lifetime;
    [SerializeField] private BoxCollider coll;
    [SerializeField] private int damage;

    private string owner = "";
    private Rigidbody rb;

    public string Owner { get => owner; set => owner = value; }
    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        coll.enabled = true;
        rb.constraints = RigidbodyConstraints.FreezeRotationX;
        rb.constraints = RigidbodyConstraints.FreezeRotationY;
        Invoke(nameof(Disable), lifetime);    
    }

    public void SetForce(Vector3 dir)
    {
        rb.AddForce(dir * force);
    }

    public void SetActive(bool b)
    {
        gameObject.SetActive(b);
    }
    
    private void Disable()
    {
        gameObject.SetActive(false);     
    }

    private void OnDisable()
    {
        rb.velocity = Vector3.zero;
    }

    private void OnCollisionEnter(Collision collision)
    {
        CheckHit(collision);
    }

    private bool CheckHit(Collision collision)
    {
        HitBox h = collision.collider.GetComponent<HitBox>();

        if (h == null)
            return false;

        //Check if owner of health system

        HitInfo info = new HitInfo()
        {
            damager = this,
            tag = owner,
            amount = damage, //Have weapon damage
            //ADD ALL INFO
        };

        h.ApplyHit(info);

        return true;
    }


}
