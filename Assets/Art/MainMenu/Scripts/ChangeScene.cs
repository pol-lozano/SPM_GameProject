
using UnityEngine;
using UnityEngine.SceneManagement;

//Author: Sajid A. Masoud
public class ChangeScene : MonoBehaviour

{
    public void btn_change_scene(string scene_name)
    {
        SceneManager.LoadScene(scene_name);
    }

    public void doExitGame()
    {
        Application.Quit();
        Debug.Log("Exited");
    }

    void OnTriggerEnter(Collider other)
    {
        SceneManager.LoadScene(0);
    }

    public void fadeOut()
    {
        GetComponent<Animator>().SetTrigger("fadeOut");
    }
}
