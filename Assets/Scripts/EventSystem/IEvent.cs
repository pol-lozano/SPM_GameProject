//Author: Pol Lozano Llorens
using UnityEngine;

public interface IEvent
{
    GameObject GameObject { get; }
}

#region DEBUG_EVENT
public struct DebugInfo
{
    public int verbosity;
    public string message;
}

public class DebugEvent : IEvent
{
    public DebugInfo Info { get; }
    public GameObject GameObject { get; }

    public DebugEvent(GameObject obj, DebugInfo info)
    {
        GameObject = obj;
        Info = info;
    }
}
#endregion

#region HIT_EVENT
public struct HitInfo
{
    public MonoBehaviour damager;
    public int amount;
    public Vector3 direction;
    public AudioClip sound;
    public ParticleSystem particleSystem;
}

public class HitEvent : IEvent
{
    public HitInfo Info { get; }
    public GameObject GameObject { get; }

    public HitEvent(GameObject obj, HitInfo info)
    {
        GameObject = obj;
        Info = info;
    }
}
#endregion

#region DEATH_EVENT
public struct DeathInfo
{
    public GameObject killer;
    public AudioClip sound;
    public ParticleSystem particleSystem;
}

public class DeathEvent : IEvent
{
    public DeathInfo Info { get; }
    public GameObject GameObject { get; }

    public DeathEvent(GameObject obj, DeathInfo info)
    {
        GameObject = obj;
        Info = info;
    }
}
#endregion
