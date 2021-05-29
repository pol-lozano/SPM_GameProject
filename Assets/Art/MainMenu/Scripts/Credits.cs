using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Credits : MonoBehaviour
{
    public GameObject creditsBtn;

    public void deactivate()
    {
        creditsBtn.SetActive(false);
    }
}
