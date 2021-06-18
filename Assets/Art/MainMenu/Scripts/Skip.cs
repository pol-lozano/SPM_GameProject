
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Author: Sajid A. Masoud

public class Skip : MonoBehaviour
{

    [SerializeField] private InputHandler input;
    [SerializeField] private GameObject fadeout;
    [SerializeField] private GameObject thisObject;


    public void OnEnable()
    {
        input.dodgeEvent += NextScene;
    }
    public void NextScene()
    {
        fadeout.GetComponent<Animator>().SetTrigger("fadeOut");
        thisObject.SetActive(false);
    }
}
