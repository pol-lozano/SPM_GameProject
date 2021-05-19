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
        masterSlider.value = BackgroundMusic.volume;
        musicSlider.value = Selected.volume;
        effectSlider.value = Pressed.volume;
        }

    }


