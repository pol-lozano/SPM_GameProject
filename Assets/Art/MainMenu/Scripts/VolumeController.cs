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
    public AudioSource BossMusic;
    public AudioSource Selected;
    public AudioSource Pressed;

    void Start()
    {
        masterSlider.value = PlayerPrefs.GetFloat("MasterVolume", masterSlider.value);
        musicSlider.value = PlayerPrefs.GetFloat("MusicVolume", musicSlider.value);
        effectSlider.value = PlayerPrefs.GetFloat("EffectVolume", effectSlider.value);

        Cursor.lockState = CursorLockMode.None;
    }

    public void SettEffectvolume()
    {
        Selected.volume = effectSlider.value * masterSlider.value; 
        Pressed.volume = effectSlider.value * masterSlider.value;
    }

    public void SetMusicVolume()
    {
        BackgroundMusic.volume = musicSlider.value * masterSlider.value;
        if(BossMusic != null)
        BossMusic.volume = musicSlider.value * masterSlider.value * 0.15f;
    }

    public void SetMasterVolume()
    {
        BackgroundMusic.volume = masterSlider.value * musicSlider.value;
        Selected.volume = masterSlider.value * effectSlider.value;
        Pressed.volume = masterSlider.value * effectSlider.value;
    }
}


