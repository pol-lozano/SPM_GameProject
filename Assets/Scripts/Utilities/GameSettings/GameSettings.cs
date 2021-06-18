//Main Author: Pol Lozano Llorens
//Secondary Author: Sajid A. Masoud

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameSettings : MonoBehaviour
{
    public Slider mouseSensitivitySlider;
    public Slider masterVolumeSlider;
    public Slider musicVolumeSlider;
    public Slider effectVolumeSlider;
    public void EnableCameraShake() => PlayerPrefs.SetInt("CameraShake", 1);
    public void DisableCameraShake() => PlayerPrefs.SetInt("CameraShake", 0);
    public void SetMouseSensitivity() => PlayerPrefs.SetFloat("MouseSensitivity", mouseSensitivitySlider.value);
    public void SetVsync(int value) => QualitySettings.vSyncCount = value;
    public void SetMasterVolume() => PlayerPrefs.SetFloat("MasterVolume", masterVolumeSlider.value);
    public void SetMusicVolume() => PlayerPrefs.SetFloat("MusicVolume", musicVolumeSlider.value);
    public void SetEffectVolume() => PlayerPrefs.SetFloat("EffectVolume", effectVolumeSlider.value);

}
