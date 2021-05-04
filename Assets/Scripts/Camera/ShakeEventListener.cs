using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class ShakeEventListener : MonoBehaviour
{
    List<ShakeEvent> shakeEvents = new List<ShakeEvent>();

    private void OnEnable() => EventHandler<ShakeEvent>.RegisterListener(AddShakeEvent);
    private void OnDisable() => EventHandler<ShakeEvent>.UnregisterListener(AddShakeEvent);

    public void AddShakeEvent(ShakeEvent data) => shakeEvents.Add(data);

    void LateUpdate() => HandleShakeEvents();

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
            }

            if (s.IsAlive() == false)
                shakeEvents.RemoveAt(i);

            transform.localPosition = positionOffset;
            transform.localEulerAngles = rotationOffset;
        }
    }
}
