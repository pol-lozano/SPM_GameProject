using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImpactListener : MonoBehaviour
{

    [SerializeField] private float freezeLength;

    private void OnEnable() => EventHandler<ImpactEvent>.RegisterListener(Pause);
    private void OnDisable() => EventHandler<ImpactEvent>.UnregisterListener(Pause);

    private void Pause(ImpactEvent eve)
    {
        if (eve.IsPlayer == false)
            StartCoroutine(PauseTime(freezeLength));
    }

    private IEnumerator PauseTime(float p)
    {
        Time.timeScale = 0.1f;
        float pauseEndTime = Time.realtimeSinceStartup + p;
        while (Time.realtimeSinceStartup < pauseEndTime)
        {
            yield return 0;
        }
        Time.timeScale = 1;
    }
}
