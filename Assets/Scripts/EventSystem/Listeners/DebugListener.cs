//Author: Pol Lozano Llorens
using UnityEngine;

public class DebugListener : MonoBehaviour
{
    public enum LoggingLevel
    {
        Nothing = -1,
        Info,
        Warning,
        Error,
        Fatal
    }

    [SerializeField] private LoggingLevel verboseLevel = LoggingLevel.Info;

    private void OnEnable() => EventHandler<DebugEvent>.RegisterListener(OnDebug);
    private void OnDisable() => EventHandler<DebugEvent>.UnregisterListener(OnDebug);

    void OnDebug(DebugEvent debugEvent)
    {       
        if(debugEvent.Info.verbosity <= (int)verboseLevel)
            Debug.Log("[" + (LoggingLevel)debugEvent.Info.verbosity + "] " + debugEvent.Info.obj.name + " " + debugEvent.Info.message);
    }
}