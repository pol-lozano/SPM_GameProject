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
            Cursor.lockState = CursorLockMode.None;
            SceneManager.LoadSceneAsync(12, LoadSceneMode.Single);

        }
    }
}
