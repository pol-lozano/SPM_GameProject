//Author: Pol Lozano Llorens
using UnityEngine;

[CreateAssetMenu(fileName = "Shake Camera Event", menuName = "Camera/Shake Camera Event")]
public class ShakeEventData : ScriptableObject
{
   public enum Target
    {
        Rotation,
        Position,
        Both
    }

    public Target target = Target.Position;

    public float amplitude = 1.0f;
    public float frequency = 1.0f;
    public float duration = 1.0f;

    public AnimationCurve blendOverLifetime = new AnimationCurve(
        new Keyframe(0.0f, 0.0f, Mathf.Deg2Rad * 0.0f, Mathf.Deg2Rad * 720.0f),
        new Keyframe(0.2f, 1.0f),
        new Keyframe(1.0f, 0.0f));

    public void Initialize(float amplitude, float frequency, float duration, AnimationCurve blendOverLifetime, Target target)
    {
        this.target = target;
        this.amplitude = amplitude;
        this.frequency = frequency;
        this.duration = duration;
        this.blendOverLifetime = blendOverLifetime;
    }
}
