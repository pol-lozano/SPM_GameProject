using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthNode : Node
{
    private EnemyAI ai;
    private HealthComponent health;

    public HealthNode(EnemyAI ai, HealthComponent hp)
    {
        this.ai = ai;
        health = hp;
    }

    public override NODE_STATE Evaluate()
    {
        return health.CurrentHealth < 2 ? NODE_STATE.SUCCESS : NODE_STATE.FAILURE;
    }
}
