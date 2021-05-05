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
            StartCoroutine(LoadScene("Whitebox - 16April"));
            


            /*
             * unload all scenes
             * foreach(scene s i currentCheckpoint.relevantScenes)
             *  LoadAsync(s.name)
             *  
             */
        }
        
    }


    public void UnloadScene(/*nånting för att identifiera vilken scen, string eller buildindex?*/)
    {

    }

    IEnumerator LoadScene(string sceneName)
    {
        yield return null;

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
        //Scriptet får gå vidare när scenen laddats färdigt
        asyncOperation.allowSceneActivation = true;
        
        //koden är fast här så länge scenen inte laddat klart (skriva ut nån progress??)
        while (!asyncOperation.isDone)
        {
            yield return null;
        }
        EventHandler<ReloadEvent>.FireEvent(new ReloadEvent(gameObject));
    }
}
