using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkipScene : MonoBehaviour
{

    [SerializeField] private InputHandler input;
    [SerializeField] private GameObject fadeout;

    public void OnEnable()
    {
        input.dodgeEvent += NextScene;
    }
    public void NextScene()
    {
        fadeout.GetComponent<Animator>().SetTrigger("fadeOut");
    }
}
