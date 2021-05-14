//Author: Rickard Lindgren

using System.Collections.Generic;
using UnityEngine;

public static class EnemyLoader
{
    private static Dictionary<int, Persistance> enemies = new Dictionary<int, Persistance>();

    public static void LoadEnemy(AIController ai)
    {
        //When enemies load for the first time. Creates KeyValueEntry and sets the objects startHP
        if (enemies.ContainsKey(ai.ID) == false)
        {
            Persistance p = new Persistance(ai.transform.position, ai.HealthComponent.CurrentHealth, ai.HealthComponent.MaxHealth, false);
            enemies.Add(ai.ID, p);
           // ai.HealthComponent.CurrentHealth = enemies[ai.ID].StartHP;
        }
        //if the enemy has been loaded before, it loads the objects past information
        else
        {
            ai.transform.position = enemies[ai.ID].Position;
           // ai.HealthComponent.CurrentHealth = enemies[ai.ID].HP;
        }
    }

    //When the scene with the object gets destroyed it saves its information
    public static void OnDestroy(AIController enemy)
    {
        if (enemies.ContainsKey(enemy.ID))
        {
            enemies[enemy.ID].Position = enemy.transform.position;
            enemies[enemy.ID].HP = enemy.HealthComponent.CurrentHealth;
            if (enemies[enemy.ID].HP <= 0)
                enemies[enemy.ID].IsDead = true;
        }
        
    }

    //On Reload we want to reset all enemy stats
    public static void ResetEnemies()
    {
        foreach(Persistance enemy in enemies.Values)
        {
            enemy.Position = enemy.StartingPosition;
            enemy.HP = enemy.StartHP;
            enemy.IsDead = false;
        }
    }

 

}
