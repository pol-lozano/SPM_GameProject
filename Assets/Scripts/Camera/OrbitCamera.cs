//Author: Pol Lozano Llorens
using UnityEngine;

public class OrbitCamera : MonoBehaviour
{
    private static OrbitCamera cam;
    private bool activated = true;
    public static OrbitCamera Camera
    {
        get
        {
            if (cam == null)
            {
                cam = FindObjectOfType<OrbitCamera>();
            }
            return cam;
        }
    }

    public bool Activated { get => activated; set => activated = value; }

    [Header("Input")]
    public InputHandler input;

    [Header("Camera Settings")]
    [SerializeField, Tooltip("The target that the camera will follow")] private Transform target;
    [SerializeField, Tooltip("The offset the camera will have in relation to the target")] private Vector3 cameraOffset;
    [SerializeField, Tooltip("Allow to zoom in the camera in and out")] private bool cameraZoomEnabled = false;
    [SerializeField, Range(0, 100), Tooltip("Speed of the rotation of the camera in degrees per second")] private float turnSpeed = 10f;
    [SerializeField, Range(-89, 89), Tooltip("Minimum and maximum vertical angle")] private float minViewAngle = -89f, maxViewAngle = 45f;
    [SerializeField, Range(0, 100), Tooltip("Minimum and maximum vertical angle")] private float minDistance = 1f, maxDistance = 10f;
    [SerializeField, Tooltip("If y axis will be inverted or not")] private bool invertY = false;

    [Header("Collision Settings")]
    [SerializeField, Tooltip("What layers the camera will check for collision")] private LayerMask collisionMask;
    [SerializeField, Tooltip("How far the camera will push away from the collision point if it collides")] private float collisionRadius;

    private Vector2 cameraInput;
    private Vector2 cameraRotation;

    /// <summary> Validates that the fields in the inspector are ok to use, if not changes them </summary>
    private void OnValidate()
    {
        //Do not allow maxViewAngle to be lower than minViewAngle
        if (maxViewAngle < minViewAngle)
            maxViewAngle = minViewAngle;

        if (maxDistance < minDistance)
            maxDistance = minDistance;
    }

    private void OnEnable()
    {
        input.cameraRotateEvent += OnCameraRotate;
        input.cameraZoomEvent += OnCameraZoom;
    }

    private void OnDisable()
    {
        input.cameraRotateEvent -= OnCameraRotate;
        input.cameraZoomEvent -= OnCameraZoom;
    }

    // EVENT LISTENERS
    private void OnCameraRotate(Vector2 rotation)
    {
        cameraInput = new Vector2(invertY ? rotation.y : -rotation.y, rotation.x);
    }

    private void OnCameraZoom(float zoom)
    {
        if (cameraZoomEnabled)
            cameraOffset.z -= zoom * Time.deltaTime;
    }

    private void LateUpdate()
    {
        if (activated)
        {
            TurnCamera();
            MoveCamera();
        }
    }

    /// <summary> 
    /// Rotates the camera around based on input and turn speed. 
    /// </summary>
    void TurnCamera()
    {
        if (cameraInput.magnitude > float.Epsilon)
            cameraRotation += PlayerPrefs.GetFloat("MouseSensitivity", turnSpeed) * Time.unscaledDeltaTime * cameraInput;

        UpdateConstraints();
        transform.rotation = Quaternion.Euler(cameraRotation);
    }

    /// <summary> 
    /// Updates positional and rotational constraints for the camera.
    /// </summary>
    void UpdateConstraints()
    {
        cameraRotation.x = Mathf.Clamp(cameraRotation.x, minViewAngle, maxViewAngle);
        cameraOffset.z = Mathf.Clamp(cameraOffset.z, minDistance, maxDistance);
        cameraRotation.y %= 360; //Wrap around camera rotation
    }

    /// <summary> 
    /// Moves the camera to offset position, resolves collisions if there are any. 
    /// </summary>
    private void MoveCamera()
    {
        Vector3 offset = transform.rotation * cameraOffset;
        Vector3 newCameraPosition = target.position - offset;

        if (Physics.SphereCast(target.position, collisionRadius, -offset.normalized, out RaycastHit hit, cameraOffset.z, collisionMask))
            newCameraPosition = target.position - (offset.normalized * hit.distance);

        transform.position = newCameraPosition;
    }

    /// <summary> 
    /// Draws gizmos for the cameras collision sphere and position for debugging in scene mode.
    /// </summary>
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, collisionRadius);
        Gizmos.DrawLine(transform.position, target.position);
    }
}