using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationListener : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        EventSystem.Current.RegisterListener<UnitDying>(OnUnitDying);
        EventSystem.Current.RegisterListener<UnitSpawn>(OnUnitSpawn);
    }

    void OnUnitDying(UnitDying udi)
    {
        udi.anim.SetBool("dying", true);
        //animator play dying animation
    }

    void OnUnitSpawn(UnitSpawn spawn)
    {
        
    }
}
