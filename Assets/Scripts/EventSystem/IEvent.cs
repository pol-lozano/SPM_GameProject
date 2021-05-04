//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
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
    public string tag;
    public int amount;
    public Vector3 hitPosition;
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

#region ATTACK_EVENTS

public class StartPlayerAttackEvent : IEvent
{
    public GameObject GameObject { get; }

    public StartPlayerAttackEvent(GameObject obj)
    {
        GameObject = obj;
    }
}

public class EndPlayerAttackEvent : IEvent

{
    public GameObject GameObject { get; }

    public EndPlayerAttackEvent(GameObject obj)
    {
        GameObject = obj;
    }
}

#endregion

#region DYING_EVENT
public struct DyingInfo
{
    public GameObject unit;
    public GameObject killer;
    public AudioClip sound;
    public ParticleSystem particleSystem;

}
public class DyingEvent : IEvent
{
    
    public DyingInfo Info { get; }
    public GameObject GameObject { get; }

    public DyingEvent(GameObject obj, DyingInfo info)
    {
        GameObject = obj;
        Info = info;
    }
}



#endregion

#region DEATH_EVENT
public struct DeathInfo
{
    public GameObject unit;
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

#region PUZZLE_EVENT
public class PuzzleEvent : IEvent{

    public int id;

    public GameObject GameObject { get; }

    public PuzzleEvent(GameObject obj, int id)
    {
        GameObject = obj;
        this.id = id;
    }
}
#endregion

#region RELOAD_EVENT

public class ReloadEvent : IEvent
{
    public GameObject GameObject { get; }

    public ReloadEvent(GameObject obj)
    {
        GameObject = obj;
    }
}
#endregion

#region SHAKE_EVENT
//SHAKE EVENT DATA IS A SCRIPTABLE OBJECT
[System.Serializable]
public class ShakeEvent : IEvent
{
    public GameObject GameObject { get; }

    float duration;
    float timeRemaining;

    ShakeEventData data;

    public ShakeEventData.Target target
    {
        get
        {
            return data.target;
        }
    }

    Vector3 noiseOffset;
    public Vector3 noise;

    public ShakeEvent(GameObject obj, ShakeEventData data)
    {
        GameObject = obj;
        this.data = data;
        duration = data.duration;
        timeRemaining = duration;

        float rand = 32.0f;

        noiseOffset = new Vector3(
            Random.Range(0, rand),
            Random.Range(0, rand),
            Random.Range(0, rand));
    }

    public void Update()
    {
        timeRemaining -= Time.deltaTime;
        float noiseOffsetDelta = Time.deltaTime * data.frequency;

        noiseOffset.x += noiseOffsetDelta;
        noiseOffset.y += noiseOffsetDelta;
        noiseOffset.z += noiseOffsetDelta;

        noise = new Vector3(
            Mathf.PerlinNoise(noiseOffset.x, 0),
            Mathf.PerlinNoise(noiseOffset.y, 1),
            Mathf.PerlinNoise(noiseOffset.x, 2));

        noise -= Vector3.one * 0.5f;
        noise *= data.amplitude;

        float agePercent = 1.0f - (timeRemaining / duration);
        noise *= data.blendOverLifetime.Evaluate(agePercent);
    }

    public bool IsAlive() => timeRemaining > 0.0f;
}
#endregion