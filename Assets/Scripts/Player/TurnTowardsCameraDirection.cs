//Author: Pol Lozano Llorens
using UnityEngine;

public class TurnTowardsCameraDirection : MonoBehaviour
{
    [SerializeField, Tooltip("How fast to turn towards camera direction")] private float turnSpeed = 15f;

    void Update() => Rotate();

    /// <summary>
    /// Rotate towards camera rotation
    /// </summary>
    void Rotate()
    {
        //Rotate towards camera rotation
        float cameraYaw = Camera.main.transform.rotation.eulerAngles.y;
        Quaternion rotation = Quaternion.Euler(0, cameraYaw, 0);
        transform.rotation = Quaternion.Slerp(transform.rotation, rotation, turnSpeed * Time.deltaTime);
    }
}
