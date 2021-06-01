using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Enemy : MonoBehaviour
{
    protected int Id;



    protected HealthComponent healthComponent;

    public HealthComponent Health { get => healthComponent; }
    public int ID { get => Id; }

    private void OnEnable() => EventHandler<ReloadEnemiesEvent>.RegisterListener(Reload);
    private void OnDisable() => EventHandler<ReloadEnemiesEvent>.UnregisterListener(Reload);


 

    public void Reload(ReloadEnemiesEvent eve)
    {
        EnemyLoader.LoadEnemy(this);
    }
}
