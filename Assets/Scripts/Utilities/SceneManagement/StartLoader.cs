//Author: Rickard Lindgren
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartLoader : MonoBehaviour
{

    [SerializeField] private Checkpoint startingCheckPoint;
    

    private void Awake()
    {
        Application.targetFrameRate = 300;
        Cursor.lockState = CursorLockMode.Locked;
        SceneManager.LoadSceneAsync(2, LoadSceneMode.Additive);
        Checkpoint.currentCheckPoint = startingCheckPoint;
        
    }
}
