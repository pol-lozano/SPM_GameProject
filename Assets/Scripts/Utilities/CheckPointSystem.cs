using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class CheckPointSystem
{
    //maybe a checkpoint object that is interactive instead of transform
    static private Transform checkpoint;
    public static void SetCurrentCheckPoint(Transform t)
    {
        checkpoint = t;
    }
    public static Transform GetCurrentCheckPoint()
    {
        return checkpoint;
    }
}
