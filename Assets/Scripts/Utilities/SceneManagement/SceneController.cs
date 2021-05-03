using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    private void OnEnable() => EventHandler<DeathEvent>.RegisterListener(Restart);
    private void OnDisable() => EventHandler<DeathEvent>.UnregisterListener(Restart);

    private void Restart(DeathEvent eve)
    {
        if(eve.Info.unit.tag == "DeathScreen")
        {
            SceneManager.UnloadSceneAsync("Whitebox - 16April");
            SceneManager.LoadSceneAsync("Whitebox - 16April", LoadSceneMode.Additive);
            EventHandler<ReloadEvent>.FireEvent(new ReloadEvent(gameObject));
        }
        
    }
}
