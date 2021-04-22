using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StarterScene : MonoBehaviour
{
    private void Awake()
    {
        SceneManager.LoadSceneAsync("TestScenLaddning", LoadSceneMode.Additive);
    }
}
