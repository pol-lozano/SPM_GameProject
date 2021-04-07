using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/Flying/DeadState")]
public class FlyingDeadState : EnemyState
{
    public override void Enter()
    {
        Debug.Log("DEAD");
        //AIController.ActivateRagdoll();
        //Play death sound and fx
    }
}
