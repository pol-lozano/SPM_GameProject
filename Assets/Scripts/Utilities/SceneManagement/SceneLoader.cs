//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] private List<int> indexesToLoad = new List<int>();
    [SerializeField] private List<int> indexesToUnload = new List<int>();

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            UnloadScene();
            LoadScene();
        }
    }

    private void LoadScene()
    {
        for (int i = 0; i < indexesToLoad.Count; i++)
            EventHandler<LoadSceneEvent>.FireEvent(new LoadSceneEvent(indexesToLoad[i]));
    }

    private void UnloadScene()
    {
        for (int i = 0; i < indexesToUnload.Count; i++)
            EventHandler<UnloadSceneEvent>.FireEvent(new UnloadSceneEvent(indexesToUnload[i]));
    }

}

