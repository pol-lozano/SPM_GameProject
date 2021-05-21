using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlSlider : MonoBehaviour
{
    public Slider sliderval;

    public void reduceValue()
    {
        sliderval.value -= 0.2f;
    }

    public void increaseValue()
    {
        sliderval.value += 0.2f;
    }

}
