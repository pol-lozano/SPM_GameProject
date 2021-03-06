using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

//Author: Pol Lozano Llorens
//Secondary author: Sajid A. Masoud
public class PauseListener : MonoBehaviour
{

    [SerializeField] private InputHandler input;
    [SerializeField] private bool paused;
    [SerializeField] private GameObject pauseMenu;
    [SerializeField] private Button exitButton;

    public void OnEnable() => input.pauseEvent += TogglePause;
    public void OnDisable() => input.pauseEvent -= TogglePause;

    public void TogglePause()
    {
        paused ^= true;

         if(paused == true)
        {
            Cursor.lockState = CursorLockMode.None;
            pauseMenu.SetActive(true);
            Time.timeScale = 0;
            OrbitCamera.Camera.Activated = false;
            exitButton.onClick.Invoke();


        } else
        {
            pauseMenu.SetActive(false);
            Cursor.lockState = CursorLockMode.Locked;
            Time.timeScale = 1;
            OrbitCamera.Camera.Activated = true;
        }
    }

    public void Exit()
    {
        Cursor.lockState = CursorLockMode.None;
        Time.timeScale = 1;
        SceneManager.LoadScene("MainMenu");

        for (int i = 0; i < SceneManager.sceneCount; i++)
            {
                if (SceneManager.GetSceneAt(i).buildIndex != 12)
                {
                    SceneManager.UnloadSceneAsync(SceneManager.GetSceneAt(i).buildIndex);
                }
            }
        }
    }

