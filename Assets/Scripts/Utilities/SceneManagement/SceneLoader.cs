using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;

public class SceneLoader : MonoBehaviour
{

    [SerializeField] private string sceneToLoad;
    
    

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            //sceneTrigger.Invoke();
            Debug.Log("Load SCENE");
            SceneManager.LoadSceneAsync(sceneToLoad, LoadSceneMode.Additive);
        }
    }


}
