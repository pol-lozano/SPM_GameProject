using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{

    [SerializeField] private float force;
    [SerializeField] private GameObject parent;
    private Rigidbody rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    void Start()
    {
        rb.AddForce(parent.transform.forward * force);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
