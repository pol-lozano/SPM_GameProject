//Author: Pol Lozano Llorens
using UnityEngine;

public static class PhysicsHelper
{
    public static Vector3 CalculateNormalForce(Vector3 velocity, Vector3 normal)
    {
        float dotProduct = Vector3.Dot(velocity, normal);
        Vector3 projection = dotProduct * normal;
        return (dotProduct > 0) ? Vector3.zero : -projection;
    }

    /// <summary>
    /// Calculates initial velocity needed to reach jumpHeight with current gravity
    /// </summary>
    /// <param name="jumpHeight">Desired jump height</param>
    /// <param name="gravity">Current gravity</param>
    /// <returns>Initial velocity required to reach jumpHeight</returns>
    public static float CalculateJumpVelocity(float jumpHeight, float gravity)
    {
        return Mathf.Sqrt(2f * jumpHeight * Mathf.Abs(gravity));
    }
}
