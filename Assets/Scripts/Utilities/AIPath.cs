using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIPath : MonoBehaviour
{
    [SerializeField] private List<Transform> path;
    private int current = 0;
    
    public List<Transform> GetPath { get => path; }
    public Transform Next()
    {
        current += 1;
        if (current >= path.Count)
            current = 0;
        return path[current];
    }

    
    private void OnDrawGizmos()
    {
        if (!Application.isPlaying) return;
        Gizmos.color = Color.black;
        Vector3 prevCorner = path[0].position;
        foreach (var corner in path)
        {
            Gizmos.DrawLine(prevCorner, corner.position);
            Gizmos.DrawSphere(corner.position, .2f);
            prevCorner = corner.position;
        }
    }
    
}
