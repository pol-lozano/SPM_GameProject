using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthDecorator : Decorator
{

    private HealthComponent health;

    public HealthDecorator(HealthComponent h)
    {
        health = h;
    }

    public override bool Condition()
    {
        return health.CurrentHealth > 4;
    }
}
