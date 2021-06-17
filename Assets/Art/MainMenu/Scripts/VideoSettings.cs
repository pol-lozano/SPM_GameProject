using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VideoSettings : MonoBehaviour
{
    void Start()
    {
        SetScreenSize(0);
        SetFullScreen(true);
    }


    List<int> widths = new List<int>() { 1920, 1600, 1280 };
    List<int> heights = new List<int>() { 1080, 900, 720 };

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
}
