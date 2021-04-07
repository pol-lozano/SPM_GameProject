using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "EnemyState/DeadState")]
public class EnemyDeadState : EnemyState
{
    public override void Enter()
    {
        base.Enter();
        AIController.ActivateRagdoll();
        //Play death sound and fx
    }
}
