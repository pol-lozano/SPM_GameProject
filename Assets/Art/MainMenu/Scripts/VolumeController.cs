//Author: Sajid A. Masoud
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VolumeController : MonoBehaviour
{
    public Slider masterSlider;
    public Slider musicSlider;
    public Slider effectSlider;
    public AudioSource BackgroundMusic;
    public AudioSource Selected;
    public AudioSource Pressed;


    void Start()
    {
        masterSlider.value = 0.85f;
        musicSlider.value = 0.41f;
        effectSlider.value = 0.85f;
        Cursor.lockState = CursorLockMode.None;

    }


}


