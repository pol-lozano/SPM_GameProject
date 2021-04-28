using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeNode : Node
{
    private float rangeThreshold;
    private Transform target;
    private Transform origin;


    public RangeNode(float r, Transform t, Transform o)
    {
        rangeThreshold = r;
        target = t;
        origin = o;
    }

    public override NODE_STATE Evaluate()
    {
        float distance = Vector3.Distance(target.position, origin.position);
        return distance >= rangeThreshold ? NODE_STATE.SUCCESS : NODE_STATE.FAILURE;
    }
}
