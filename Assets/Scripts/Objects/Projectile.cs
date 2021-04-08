using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] private LayerMask collisionLayer;
    [SerializeField] private float force;
    [SerializeField] private float lifetime;
    private Rigidbody rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        rb.constraints = RigidbodyConstraints.FreezeRotationX;
        rb.constraints = RigidbodyConstraints.FreezeRotationY;
        Invoke("Disable", lifetime);
        
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
        if (collision.gameObject.layer == 3)
        {
            rb.constraints = RigidbodyConstraints.FreezeAll;
            rb.velocity = Vector3.zero;
        }
        
        var hit = collision.gameObject.GetComponent<HitBox>();
        if (hit)
        {
            hit.OnGetHit(collision, 1);
        }
        
        var obj = collision.gameObject.GetComponentInParent<AIController>();
        if (obj)
        {
            print("STUN");
            obj.isStunned = true;
        }
    }


}
