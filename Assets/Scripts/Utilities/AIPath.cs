using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIPath : MonoBehaviour
{
    public List<Transform> path;
    public int current = 0;
    

    public Transform Next()
    {
        current += 1;
        if (current >= path.Count)
            current = 0;
        return path[current];
    }
}
