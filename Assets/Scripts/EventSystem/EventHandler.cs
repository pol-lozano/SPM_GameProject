//Author: Pol Lozano Llorens
using System;
using System.Collections.Generic;

public static class EventHandler<TEvent> where TEvent : IEvent
{
    private static Dictionary<Type, Action<TEvent>> typeEventListeners;

    /// <summary>
    /// Registers Event Types to a dictionary
    /// </summary>
    private static void RegisterType()
    {
        if (typeEventListeners == null)
            typeEventListeners = new Dictionary<Type, Action<TEvent>>();

        if (typeEventListeners.ContainsKey(typeof(TEvent)) == false)
            typeEventListeners.Add(typeof(TEvent), null);
    }

    /// <summary>
    /// Adds a listener to the specified Event Type
    /// </summary>
    /// <param name="listener">Listener to register</param>
    public static void RegisterListener(Action<TEvent> listener)
    {
        RegisterType();
        typeEventListeners[typeof(TEvent)] += listener;
    }

    /// <summary>
    /// Removes a listener from the specified Event Type
    /// </summary>
    /// <param name="listener">Listener to unregister</param>
    public static void UnregisterListener(Action<TEvent> listener)
    {
        RegisterType();
        typeEventListeners[typeof(TEvent)] -= listener;
    }

    /// <summary>
    /// Invokes all registered callbacks for the specified Event Type
    /// </summary>
    /// <param name="e">Event Type to Invoke callbacks for </param>
    public static void FireEvent(TEvent e)
    {
        RegisterType();
        typeEventListeners[typeof(TEvent)]?.Invoke(e);
    }
}
