using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Shake Camera Event",menuName = "Camera/Shake Camera Event")]
public class CameraShakeEvent : ScriptableObject
{
   public enum Target
    {
        Rotation,
        Position
    }
    public Target target = Target.Position;
    public float amplitude = 1.0f;
    public float frequency = 1.0f;

    public float duration = 1.0f;
}
