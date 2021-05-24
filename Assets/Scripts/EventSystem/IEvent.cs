//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
using UnityEngine;

public interface IEvent { }

#region DEBUG_EVENT
public struct DebugInfo
{
    public GameObject obj;
    public int verbosity;
    public string message;
}

public class DebugEvent : IEvent
{
    public DebugInfo Info { get; }
    public DebugEvent(DebugInfo info) => Info = info;
}
#endregion

#region HIT_EVENT
public struct HitInfo
{
    public HitComponent hitComponent;
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
    public HitEvent(HitInfo info) => Info = info;
}
#endregion

#region ATTACK_EVENTS
public class StartPlayerAttackEvent : IEvent { }

public class EndPlayerAttackEvent : IEvent { }
#endregion

#region DYING_EVENT
public struct DyingInfo
{
    public HitComponent hitComponent;
    public MonoBehaviour killer;
    public AudioClip sound;
    public ParticleSystem particleSystem;
}

public class DyingEvent : IEvent
{
    public DyingInfo Info { get; }
    public DyingEvent(DyingInfo info) => Info = info;
}
#endregion

#region DEATH_EVENT
public struct DeathInfo
{
    public HitComponent hitComponent;
    public GameObject killer;
    public AudioClip sound;
    public ParticleSystem particleSystem;
}

public class DeathEvent : IEvent
{
    public DeathInfo Info { get; }
    public DeathEvent(DeathInfo info) => Info = info;
}
#endregion

#region PUZZLE_EVENT
public class PuzzleEvent : IEvent{

    public int id;
    public PuzzleEvent(int id) => this.id = id;
}
#endregion

#region RELOAD_EVENT
public class ReloadEvent : IEvent { }
#endregion

#region SHAKE_EVENT
//SHAKE EVENT DATA IS A SCRIPTABLE OBJECT
[System.Serializable]
public class ShakeEvent : IEvent
{
    float timeRemaining;

    ShakeEventData data;

    public ShakeEventData.Target target => data.target;

    Vector3 noiseOffset;
    public Vector3 noise;

    public ShakeEvent(ShakeEventData data)
    {
        this.data = data;
        timeRemaining = data.duration;

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

        float agePercent = 1.0f - (timeRemaining / data.duration);
        noise *= data.blendOverLifetime.Evaluate(agePercent);
    }

    public bool IsAlive() => timeRemaining > 0.0f;
}
#endregion

#region LOAD_SCENE_EVENT
public class LoadSceneEvent : IEvent
{
    public int buildIndex;
    public LoadSceneEvent(int buildIndex) => this.buildIndex = buildIndex;
}
#endregion

#region UNLOAD_SCENE_EVENT
public class UnloadSceneEvent : IEvent
{
    public int buildIndex;
    public UnloadSceneEvent(int buildIndex) => this.buildIndex = buildIndex;
}
#endregion

#region SOUND_EVENT
public class SoundEvent : IEvent
{
    public AudioData Info { get; }
    public SoundEvent(AudioData info) => Info = info;
}
#endregion

#region ALARM_EVENT
public class AlarmEvent : IEvent
{
    public Vector3 Position { get; }
    public AlarmEvent(Vector3 pos) => Position = pos;
}
#endregion