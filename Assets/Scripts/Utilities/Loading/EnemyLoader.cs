//Author: Rickard Lindgren

using System.Collections.Generic;
using UnityEngine;

public static class EnemyLoader
{
    private static Dictionary<int, Persistance> enemies = new Dictionary<int, Persistance>();

    public static bool LoadEnemy(Enemy ai)
    {
        //When enemies load for the first time. Creates KeyValueEntry and sets the objects startHP
        if (enemies.ContainsKey(ai.ID) == false)
        {
            Persistance p = new Persistance(ai.transform.position, ai.Health.CurrentHealth, ai.Health.MaxHealth, false);
            enemies.Add(ai.ID, p);
            Debug.Log("ADDED NEW ENEMY");
            return true;
        }
        //The enemy exist but is dead
        else if (enemies[ai.ID].IsDead)
        {
            Debug.Log("LOAD DEAD ENEMY");
            return false;
        }
        //The enemy has been loaded before and is alive so it loads the objects past information
        else
        {
            Debug.Log("LOAD LIVE ENEMY");
            ai.transform.position = enemies[ai.ID].Position;
            ai.Health.CurrentHealth = enemies[ai.ID].HP;
            return true;
        }
    }

    //When the scene with the object gets destroyed it saves its information
    public static void OnDestroy(Enemy enemy)
    {
        if (enemies.ContainsKey(enemy.ID))
        {
            enemies[enemy.ID].Position = enemy.transform.position;
            enemies[enemy.ID].HP = enemy.Health.CurrentHealth;
            if (enemies[enemy.ID].HP <= 0)
                enemies[enemy.ID].IsDead = true;
        }
        
    }

    //On Reload we want to reset all enemy stats
    public static void ResetEnemies()
    {
        Debug.Log("RESET ALL ENEMIES");
        foreach(Persistance enemy in enemies.Values)
        {
            enemy.Position = enemy.StartingPosition;
            enemy.HP = enemy.StartHP;
            enemy.IsDead = false;
        }
    }

 

}
