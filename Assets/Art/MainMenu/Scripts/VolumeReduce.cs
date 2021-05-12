//Author: Sajid A. Masoud
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VolumeReduce : MonoBehaviour
{
    public Slider slider;
    void Start()
    {
        slider.value = Random.Range(0.0f, 1f);

    }

    public void Mute()
    {
        slider.value = 0;
    }
}
