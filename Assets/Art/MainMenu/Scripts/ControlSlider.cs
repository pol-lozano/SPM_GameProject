using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Author: Sajid A. Masoud

public class ControlSlider : MonoBehaviour
{
    public Slider sliderval;

    public void reduceValue()
    {
        sliderval.value -= (sliderval.value * 0.2f);
        Debug.Log("Reduce slider");
    }

    public void increaseValue()
    {
        sliderval.value = (sliderval.value * 0.2f) + sliderval.value;
        Debug.Log("Increase slider");

    }

}
