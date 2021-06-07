using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Author: Sajid A. Masoud

public class Credits : MonoBehaviour
{
    public GameObject creditsBtn;

    public void deactivate()
    {
        creditsBtn.SetActive(false);
    }
}
