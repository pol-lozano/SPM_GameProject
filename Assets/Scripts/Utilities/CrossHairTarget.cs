using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossHairTarget : MonoBehaviour
{
    [SerializeField,Tooltip("How far the player is able to aim")] private int viewLength;
    [SerializeField, Tooltip("What the player will aim at when it isn't looking at anything")] private Transform backupTarget;
    [SerializeField] LayerMask mask;
    
    Camera cam;
    Ray ray;
    RaycastHit hitInfo;
    void Start()
    {
        cam = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        ray.origin = cam.transform.position;
        ray.direction = cam.transform.forward;
        if (Physics.Raycast(ray, out hitInfo, viewLength, mask))
            transform.position = hitInfo.point;
        else
            transform.position = backupTarget.position;
        
        if(Vector3.Distance(ray.origin, hitInfo.point) < 2f)
        {
            transform.position = backupTarget.position;
        }
        
    }
}
