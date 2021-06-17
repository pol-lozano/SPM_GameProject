using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkipScene : MonoBehaviour
{
    public void skipScene()
    {
        if(Input.GetButtonDown("Fire1"))
        {
            Debug.Log("Hej");
        }
    }
}
