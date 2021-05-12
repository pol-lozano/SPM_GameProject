//Author: Pol Lozano Llorens
using System.Collections.Generic;
using UnityEngine;
public class ShakeEventListener : MonoBehaviour
{
    List<ShakeEvent> shakeEvents = new List<ShakeEvent>();

    private void OnEnable() => EventHandler<ShakeEvent>.RegisterListener(AddShakeEvent);
    private void OnDisable() => EventHandler<ShakeEvent>.UnregisterListener(AddShakeEvent);

    /// <summary>
    /// Adds a shake event to the list of ongoing shake events
    /// </summary>
    /// <param name="data">Information about the shake</param>
    public void AddShakeEvent(ShakeEvent data)
    {
        if (data != null)
        {
            shakeEvents.Add(data);
        }
    }

    void LateUpdate() => HandleShakeEvents();

    /// <summary>
    /// Updates and processes all ongoing shake events, removes them when their lifetime expires.
    /// </summary>
    void HandleShakeEvents()
    {
        Vector3 positionOffset = Vector3.zero;
        Vector3 rotationOffset = Vector3.zero;

        for (int i = 0; i < shakeEvents.Count; i++)
        {
            ShakeEvent s = shakeEvents[i];

            s.Update();

            switch (s.target)
            {
                case ShakeEventData.Target.Position:
                    positionOffset += s.noise;
                    break;
                case ShakeEventData.Target.Rotation:
                    rotationOffset += s.noise;
                    break;
                case ShakeEventData.Target.Both:
                    positionOffset += s.noise;
                    rotationOffset += s.noise;
                    break;
            }

            if (s.IsAlive() == false)
                shakeEvents.RemoveAt(i);

            transform.localPosition = positionOffset;
            transform.localEulerAngles = rotationOffset;
        }
    }
}
