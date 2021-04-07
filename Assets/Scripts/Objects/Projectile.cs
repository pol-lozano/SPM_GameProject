using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] private LayerMask collisionLayer;
    [SerializeField] private float force;
    [SerializeField] private float lifetime;
    [SerializeField] private GameObject parent;
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
        rb.AddForce(transform.forward * force);
    }

    private void Update()
    {
        
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
    }


}
