using UnityEngine;
using UnityEngine.SceneManagement;

//Author: Pol Lozano Llorens
//Secondary author: Sajid A. Masoud

public class MenuLoader : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            LoadMenu();

        }
    }

    public void LoadMenu()
    {
        EnemyLoader.ResetEnemies();
        Time.timeScale = 1;
        Cursor.lockState = CursorLockMode.None;
        SceneManager.LoadSceneAsync(13, LoadSceneMode.Single);

    }
}
