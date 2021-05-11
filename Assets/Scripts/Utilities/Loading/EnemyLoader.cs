//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyLoader
{

    private Dictionary<string, Persistance> enemies = new Dictionary<string, Persistance>();

    public bool LoadEnemy(AIController ai)
    {
        if (!enemies.ContainsKey(ai.gameObject.name))
        {
            Persistance p = new Persistance(ai.transform, ai.HealthComponent.CurrentHealth, false);
            enemies.Add(ai.gameObject.name, p);
            return true;
        }
        else
        {
            if (enemies[ai.gameObject.name].IsDead == false)
            {

                ai.transform.position = enemies[ai.gameObject.name].Transform.position;
                //ai.HealthComponent.CurrentHealth = enemies[ai.gameObject.name].HP;
                return true;
            }
            else
                return false;
        }
    }

    public void ResetEnemies()
    {

    }

}
