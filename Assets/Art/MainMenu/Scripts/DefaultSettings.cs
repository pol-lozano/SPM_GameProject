using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Author: Sajid A. Masoud
public class DefaultSettings : MonoBehaviour
{
    [SerializeField] private Button cameraShakeBtn;
    [SerializeField] private Button verticalSyncBtn;

    [SerializeField] private Slider MouseSlider;

    [SerializeField] private Slider MasterSlider;
    [SerializeField] private Slider MusicSlider;
    [SerializeField] private Slider EffectSlider;

    [SerializeField] private AudioSource music;
    [SerializeField] private AudioSource selected;
    [SerializeField] private AudioSource pressed;
    public void DefaultValues()
    {
        PlayerPrefs.SetFloat("MasterVolume", 0.95f);
        PlayerPrefs.SetFloat("MusicVolume", 0.85f);
        PlayerPrefs.SetFloat("EffectVolume", 0.92f);
        PlayerPrefs.SetFloat("MouseSensitivity", 10f);
        QualitySettings.vSyncCount = 1;
        PlayerPrefs.SetInt("CameraShake", 1);
        Screen.SetResolution(1920, 1080, FullScreenMode.ExclusiveFullScreen);

        cameraShakeBtn.onClick.Invoke();
        verticalSyncBtn.onClick.Invoke();
        MouseSlider.value = 13f;
        MasterSlider.value = 0.95f;
        MusicSlider.value = 0.85f;
        EffectSlider.value = 0.92f;

        music.volume = 0.85f;
        selected.volume = 0.92f;
        pressed.volume = 0.92f;

        Debug.Log("DefaultValuesInitiated"); 
    }
}
