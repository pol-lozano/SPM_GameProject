//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public static SceneController scenController;

    private int baseSceneIndex = 1;

    private void OnEnable()
    {
        EventHandler<LoadSceneEvent>.RegisterListener(LoadScene);
        EventHandler<UnloadSceneEvent>.RegisterListener(UnloadScene);
        EventHandler<DeathEvent>.RegisterListener(Restart);
    }
    private void OnDisable() 
    {
        EventHandler<LoadSceneEvent>.RegisterListener(LoadScene);
        EventHandler<UnloadSceneEvent>.RegisterListener(UnloadScene);
        EventHandler<DeathEvent>.UnregisterListener(Restart);
    }


    private void Restart(DeathEvent eve)
    {
        if(eve.Info.unit.tag == "DeathScreen")
        {
            //Hämta alla scener som är relevanta för checkpoint
            List<int> relevantScenes = Checkpoint.currentCheckPoint.ScenesOnCheckpoint;

            Scene[] activeScenes = SceneManager.GetAllScenes();

            //ifall relevanta scener inte innehåller någon av de aktiva scenera så laddas de av.
            foreach(Scene sc in activeScenes)
            {
                if (relevantScenes.Contains(sc.buildIndex) == false && sc.buildIndex != baseSceneIndex)
                    SceneManager.UnloadSceneAsync(sc.name);
            }
            //om det finns någon relevant scen som inte är laddad så laddas den in
            foreach(int s in relevantScenes)
            {
                if (SceneManager.GetSceneByBuildIndex(s).isLoaded == false)
                    StartCoroutine(ReloadScene(s));
            }

            EventHandler<ReloadEvent>.FireEvent(new ReloadEvent());
            
        }
        
    }

    public void LoadScene(LoadSceneEvent eve)
    {
        if(SceneManager.GetSceneByBuildIndex(eve.buildIndex).isLoaded == false)
            SceneManager.LoadSceneAsync(eve.buildIndex, LoadSceneMode.Additive);
    }

    public void UnloadScene(UnloadSceneEvent eve)
    {
        if(SceneManager.GetSceneByBuildIndex(eve.buildIndex).isLoaded == true)
            SceneManager.UnloadSceneAsync(eve.buildIndex);
    }

    IEnumerator ReloadScene(int index)
    {
        yield return null;

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index, LoadSceneMode.Additive);
        //Scriptet får gå vidare när scenen laddats färdigt
        asyncOperation.allowSceneActivation = true;
        
        //koden är fast här så länge scenen inte laddat klart (skriva ut nån progress??)
        while (asyncOperation.isDone == false)
        {
            yield return null;
        }
        
    }
}
