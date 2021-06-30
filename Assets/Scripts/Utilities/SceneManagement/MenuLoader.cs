using UnityEngine;
using UnityEngine.SceneManagement;

//Author: Pol Lozano Llorens
//Secondary author: Sajid A. Masoud

public class MenuLoader : MonoBehaviour
{
    private void Start()
    {
        SceneManager.LoadSceneAsync(1, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(2, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(3, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(4, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(5, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(6, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(7, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(8, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync(9, LoadSceneMode.Additive);


    }

    public void LoadMenu()
    {
        EnemyLoader.ResetEnemies();
        Time.timeScale = 1;
        Cursor.lockState = CursorLockMode.None;
        SceneManager.LoadSceneAsync(13, LoadSceneMode.Single);

    }
}
