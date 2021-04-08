using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossHairTarget : MonoBehaviour
{
    public LayerMask visionLayer;
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
        Physics.Raycast(ray, out hitInfo, visionLayer);
        transform.position = hitInfo.point;
    }
}
