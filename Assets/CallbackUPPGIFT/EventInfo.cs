using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class EventInfo
{
    public string EventDescription;
    public GameObject unit;

}

public class DebugEvent : EventInfo
{

}

public class UnitDying : EventInfo
{
    public Animator anim;
}

public class UnitDeath : EventInfo
{

}

public class UnitSpawn : EventInfo
{
    public Animator anim;
}
