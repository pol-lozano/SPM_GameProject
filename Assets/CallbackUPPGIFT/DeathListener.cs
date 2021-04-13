using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathListener : MonoBehaviour
{

    private void Start()
    {
        EventSystem.Current.RegisterListener<UnitDeath>(OnUnitDied);
    }

    void OnUnitDied(UnitDeath udi)
    {
        /*
        DebugEvent bug = new DebugEvent();
        bug.unit = udi.unit;
        */
        Destroy(udi.unit);
    }
}
