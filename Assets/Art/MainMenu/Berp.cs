using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Berp : MonoBehaviour
{

    public float time;
    public GameObject objekt;

    void Update()
    {
        if (time<1)
        {
            transform.localScale = Vector3.one * Mathfx.Berp(0f, 1f, time);
            time += Time.deltaTime;
        } 
    }
 
    void OnDisable()
    {
        time = 0;
        transform.localScale = Vector3.one * Mathfx.Berp(0f, 0f, time); //den här är för att säkerställa att skalan
                                                                        //resettas till 0 så att den inte poppar abrupt innan berp animationen initieras
    }


}
