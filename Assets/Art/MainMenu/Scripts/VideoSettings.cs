using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

//Author: Sajid A. Masoud


public class VideoSettings : MonoBehaviour
{
    [SerializeField] private Button camShakeBtn, vSyncBtn;
    [SerializeField] private GameObject camera;
    [SerializeField] private Slider mouseSensitivity;

    [SerializeField] private TMP_Dropdown screenModeDropdown;
    [SerializeField] private TMP_Dropdown resolutionDropdown;

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
    public void SetScreenMode(int index)
    {        
        if (index == 0) 
        {
            resolutionDropdown.value = 0;
            Screen.SetResolution(1920, 1080, FullScreenMode.ExclusiveFullScreen);
            Debug.Log("Fullscreen");
        }
        if (index == 1) 
        {
            resolutionDropdown.value = 0;
            Screen.SetResolution(1920, 1080, FullScreenMode.MaximizedWindow);
            Debug.Log("Borderless");
        }
        if (index == 2) 
        {
            Screen.fullScreenMode = FullScreenMode.Windowed;
            Debug.Log("Windowed");
        }
    }

    List<int> widths = new List<int>() { 1920, 1600, 1280, 1024 };
    List<int> heights = new List<int>() { 1080, 900, 720, 576 };
    public void SetScreenSize(int index)
    {
        int width = widths[index];
        int height = heights[index];

        if(index != 0)
        {
            screenModeDropdown.value = 2;
            Screen.SetResolution(width, height, FullScreenMode.Windowed);
            Debug.Log("Mode: Windowed - Width: " + width + " height: " + height);        }

        if(index == 0)
        {
            Debug.Log("1920x1080p initiated -> check for ScreenMode");
        }
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
