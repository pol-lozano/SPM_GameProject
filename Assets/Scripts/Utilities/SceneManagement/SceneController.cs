using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public static SceneController scenController;

    private void OnEnable() => EventHandler<DeathEvent>.RegisterListener(Restart);
    private void OnDisable() => EventHandler<DeathEvent>.UnregisterListener(Restart);

    private void Restart(DeathEvent eve)
    {
        if(eve.Info.unit.tag == "DeathScreen")
        {
            SceneManager.UnloadSceneAsync("Whitebox - 16April");
            SceneManager.LoadSceneAsync("Whitebox - 16April", LoadSceneMode.Additive);
            EventHandler<ReloadEvent>.FireEvent(new ReloadEvent(gameObject));

            /*
             * unload all scenes
             * foreach(scene s i currentCheckpoint.relevantScenes)
             *  LoadAsync(s, LoadsceneMode.Additive)
             *  
             */
        }
        
    }

    public void LoadScene(/*nånting för att identifiera vilken scen, string eller buildindex?*/)
    {

    }

    public void UnloadScene(/*nånting för att identifiera vilken scen, string eller buildindex?*/)
    {

    }
}
