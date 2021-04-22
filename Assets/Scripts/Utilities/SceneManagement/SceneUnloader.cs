using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneUnloader : MonoBehaviour
{

    [SerializeField] private string sceneToUnload;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Debug.Log("Unload SCENE");
            SceneManager.UnloadSceneAsync(sceneToUnload, UnloadSceneOptions.None);
        }
        
    }
}
