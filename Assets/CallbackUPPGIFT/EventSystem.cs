using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventSystem : MonoBehaviour
{

    delegate void EventListener(EventInfo e);
    private Dictionary<System.Type, List<EventListener>> eventListeners;

    static private EventSystem _Current;
    static public EventSystem Current
    {
        get
        {
            if(_Current == null)
            {
                _Current = GameObject.FindObjectOfType<EventSystem>();
            }
            return _Current;
        }
    }

    public void RegisterListener<T>(System.Action<T> listener) where T : EventInfo
    {
        System.Type type = typeof(T);
        if(eventListeners == null)
        {
            eventListeners = new Dictionary<System.Type, List<EventListener>>();
        }
        if(!eventListeners.ContainsKey(type) || eventListeners[type] == null)
        {
            eventListeners[type] = new List<EventListener>();
        }

        EventListener wrapper = (ei) => { listener((T)ei); };
        eventListeners[type].Add(wrapper);
    }

    public void UnRegisterListener<T>(System.Action<T> listener) where T : EventInfo
    {
        //TODO
    }

    public void FireEvent(EventInfo ei)
    {


        System.Type trueEventType = ei.GetType();
        if (eventListeners == null || eventListeners[trueEventType] == null)
            return;

        foreach(EventListener el in eventListeners[trueEventType])
        {
            el(ei);
        }
        Debug.Log(trueEventType);
    }



}
