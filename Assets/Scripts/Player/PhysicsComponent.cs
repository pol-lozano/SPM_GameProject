//Author: Pol Lozano Llorens
using System;
using UnityEngine;
[RequireComponent(typeof(CapsuleCollider))]
public class PhysicsComponent : MonoBehaviour
{
    [Header("Movement Settings")]
    [SerializeField] private float gravity = 30f;
    [SerializeField] private PhysicMaterial physicsMaterial;
    [SerializeField, Range(0, 1.0f)] private float airResistance = 0.2f;
    [SerializeField] private float acceleration = 50f;

    [Header("Collision Settings")]
    [SerializeField] private LayerMask collisionMask;
    [SerializeField] private float skinWidth = 0.02f;
    [SerializeField] private float groundCheckDistance = 0.1f;
    [SerializeField] private Vector3 velocity;

    private RaycastHit groundHit;
    private CapsuleCollider col;

    //TODO: RENAME TO SOMETHING BETTER
    public Vector3 Top => transform.position + col.center + Vector3.up * (col.height / 2 - col.radius);
    public Vector3 Bottom => transform.position + col.center + Vector3.down * (col.height / 2 - col.radius);

    public void AddForce(Vector3 force) => velocity += force;
    public Vector3 Velocity { get => velocity; set => velocity = value; }
    public float VelocityX { get => velocity.x; set => velocity.x = value; }
    public float VelocityY { get => velocity.y; set => velocity.y = value; }
    public float VelocityZ { get => velocity.z; set => velocity.z = value; }

    public float Gravity { get => gravity; set => gravity = value; }
    public bool IsGrounded => Physics.CapsuleCast(Top, Bottom, col.radius * 0.95f, Vector3.down, out groundHit, groundCheckDistance + skinWidth, collisionMask);
    public RaycastHit GroundHit => groundHit; //TODO MAKE INTO ITS OWN METHOD?

    public void Awake()
    {
        col = GetComponent<CapsuleCollider>();
    }

    private void FixedUpdate() => UpdateVelocity();

    private void UpdateVelocity()
    {
        //Apply gravity 
        velocity += Vector3.down * gravity * Time.deltaTime;
        //Resolve collisions and update velocity
        HandleCollisions();
        //Apply air resistance
        velocity *= Mathf.Pow(airResistance, Time.deltaTime);
        //Perform actual movement
        transform.Translate(velocity * Time.deltaTime);
    }

    private void HandleCollisions()
    {
        /* //TODO: FIX, THIS MAKES CHARACTER SHAKY
         if (Physics.CapsuleCast(Point1, Point2, col.radius, velocity.normalized, out RaycastHit hit, velocity.magnitude * Time.deltaTime + skinWidth, collisionMask))
         {
             //Correct position
             Physics.CapsuleCast(Point1, Point2, col.radius, -hit.normal, out RaycastHit normalHit, velocity.magnitude * Time.deltaTime + skinWidth, collisionMask);
             transform.position += -normalHit.normal * (normalHit.distance - skinWidth);

             //Apply normal force and friction
             Vector3 normalForce = PhysicsHelper.CalculateNormalForce(velocity, normalHit.normal);
             velocity += normalForce;
             ApplyFriction(normalForce);
         }*/

        ResolveOverlaps();
    }

    private void ResolveOverlaps()
    {
        Collider[] hits = Physics.OverlapCapsule(Top, Bottom, col.radius + skinWidth, collisionMask);
        foreach (Collider hit in hits)
        {
            if (Physics.ComputePenetration(col, transform.position, transform.rotation, hit, hit.transform.position, hit.transform.rotation, out Vector3 direction, out float distance))
            {
                //Correct position
                Vector3 separationVector = direction * distance;
                transform.position += separationVector - separationVector.normalized * skinWidth;

                //Correct velocity
                Vector3 normalForce = PhysicsHelper.CalculateNormalForce(velocity, direction);
                velocity += normalForce;

                //Apply friction
                ApplyFriction(normalForce);
            }
        }
    }

    private void ApplyFriction(Vector2 normalForce)
    {
        if (velocity.magnitude < normalForce.magnitude * physicsMaterial.staticFriction) velocity = Vector2.zero;
        else velocity -= velocity.normalized * normalForce.magnitude * physicsMaterial.dynamicFriction;
    }

    public void Accelerate(Vector3 input, float speed)
    {
        velocity.x = Mathf.MoveTowards(velocity.x, input.x * speed, acceleration * Time.deltaTime);
        velocity.z = Mathf.MoveTowards(velocity.z, input.z * speed, acceleration * Time.deltaTime);
    }

    public void Decelerate()
    {
        velocity.x = Mathf.MoveTowards(velocity.x, 0, acceleration * Time.deltaTime);
        velocity.z = Mathf.MoveTowards(velocity.z, 0, acceleration * Time.deltaTime);
    }
}
