using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartLoader : MonoBehaviour
{

    [SerializeField] private Checkpoint startingCheckPoint;
    

    private void Awake()
    {
        Cursor.lockState = CursorLockMode.Locked;
        SceneManager.LoadSceneAsync(2, LoadSceneMode.Additive);
        Checkpoint.currentCheckPoint = startingCheckPoint;
        
    }
}
