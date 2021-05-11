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
            LoadScene();
            UnloadScene();
        }
        
    }

    private void LoadScene()
    {
        if(indexesToLoad.Count != 0)
            foreach(int index in indexesToLoad)
            {
            EventHandler<LoadSceneEvent>.FireEvent(new LoadSceneEvent(gameObject, index));
            }

        
    }

    private void UnloadScene()
    {
        if(indexesToUnload.Count != 0)
            foreach (int index in indexesToUnload)
            {
            EventHandler<UnloadSceneEvent>.FireEvent(new UnloadSceneEvent(gameObject, index));
            }
    }

}
