using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlyingStunState : EnemyState
{
    // Start is called before the first frame update
    void Start()
    {
        AIController.Agent.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
