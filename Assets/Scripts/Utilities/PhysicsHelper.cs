//Pol Lozano Llorens
using UnityEngine;

public static class PhysicsHelper
{
    public static Vector3 CalculateNormalForce(Vector3 velocity, Vector3 normal)
    {
        float dotProduct = Vector3.Dot(velocity, normal);
        Vector3 projection = dotProduct * normal;
        return (dotProduct > 0) ? Vector3.zero : -projection;
    }

    public static float CalculateJumpVelocity(float jumpHeight, float gravity)
    {
        return Mathf.Sqrt(2f * jumpHeight * Mathf.Abs(gravity));
    }
}
