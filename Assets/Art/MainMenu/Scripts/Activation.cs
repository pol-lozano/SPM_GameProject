using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Author: Sajid A. Masoud
public class Activation : MonoBehaviour
{
    [SerializeField] private GameObject defaultObj;

    void Start()
    {
        defaultObj.GetComponent<DefaultSettings>().DefaultValues();
    }
    
}
