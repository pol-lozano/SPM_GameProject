using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Author: Sajid A. Masoud


public class VideoSettings : MonoBehaviour
{
    [SerializeField] private Button camShakeBtn, vSyncBtn;
    [SerializeField] private GameObject camera;
    [SerializeField] private Slider mouseSensitivity;
    private float vSync => QualitySettings.vSyncCount;

    void Start()
    {
        int myCamShake = PlayerPrefs.GetInt("CameraShake");
        mouseSensitivity.value = PlayerPrefs.GetFloat("MouseSensitivity");

        if (vSync == 0)
        {
            vSyncBtn.onClick.Invoke();
        }

        if(myCamShake == 0)
        {
            camShakeBtn.onClick.Invoke();
            camera.GetComponent<ShakeEventListener>().enabled = false;
        }


    }

    List<string> mode = new List<string>() { "FULLSCREEN", "BORDERLESS", "WINDOWED" };

    public void SetScreenMode(int index)
    {
        string currentMode = mode[index];
        

        if (currentMode.Equals("FULLSCREEN")) 
        {
            Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;
            Debug.Log("full");

        }
        if (currentMode.Equals("BORDERLESS")) 
        {
            Screen.fullScreenMode = FullScreenMode.MaximizedWindow;
            Debug.Log("bord");
        }
        if (currentMode.Equals("WINDOWED")) 
        {
            Screen.fullScreenMode = FullScreenMode.Windowed;
            Debug.Log("windowed");
        }
    }

    List<int> widths = new List<int>() { 1920, 1600, 1280, 1024 };
    List<int> heights = new List<int>() { 1080, 900, 720, 576 };

    public void SetScreenSize(int index)
    {
        bool fullscreen = Screen.fullScreen;
        int width = widths[index];
        int height = heights[index];
        Screen.SetResolution(width, height, fullscreen);
        Debug.Log("width: " + width + " height: " + height);
    }

    /*
    public void SetFullScreen(bool _fullscreen)
    {
        Screen.fullScreen = _fullscreen;

    }

    public void SetWindowed(bool _windowed)
    {
        Screen.fullScreenMode = FullScreenMode.Windowed;
    }

    public void SetBorderless(bool _borderless)
    {
        Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;

    }
    */

}
