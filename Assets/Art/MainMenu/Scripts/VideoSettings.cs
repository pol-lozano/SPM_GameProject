using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Author: Sajid A. Masoud


public class VideoSettings : MonoBehaviour
{
    void Start()
    {

    }

    List<string> mode = new List<string>() { "FULLSCREEN", "BORDERLESS", "WINDOWED" };

    public void SetScreenMode(int index)
    {
        string currentMode = mode[index];
        

        if (currentMode.Equals("FULLSCREEN")) 
        {
            SetFullScreen(true);
            Debug.Log("full");

        }
        if (currentMode.Equals("BORDERLESS")) 
        {
            Screen.fullScreenMode = FullScreenMode.ExclusiveFullScreen;
            Debug.Log("bord");
        }
        if (currentMode.Equals("WINDOWED")) 
        {
            SetWindowed(true);
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
   
    public void SetVSync(int index)
    {
        if(index == 1)
        {
            QualitySettings.vSyncCount = 1;
            Debug.Log("VSync on");
        } 
        else
        {
            QualitySettings.vSyncCount = 0;
            Debug.Log("VSync off");

        }
    }
}
