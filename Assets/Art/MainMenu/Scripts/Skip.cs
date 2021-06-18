
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Author: Sajid A. Masoud

public class Skip : MonoBehaviour
{

    [SerializeField] private InputHandler input;
    [SerializeField] private GameObject fadeout;
    [SerializeField] private GameObject thisObject;
    private bool activated = false;


    public void OnEnable()
    {
        if(activated == false)
        {
            input.dodgeEvent += NextScene;
        }
        else
        {
            Debug.Log("Activated");
        }
    }
    private void NextScene()
    {
        if(fadeout != null && thisObject != null)
        {
            fadeout.GetComponent<Animator>().SetTrigger("fadeOut");
            activated = true;
         }
    }

}