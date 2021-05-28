using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExtraEnemies : MonoBehaviour
{
    [SerializeField] private GameObject enemies;

    private void Awake()
    {
        if(Checkpoint.currentCheckPoint.name == "Balcony")
        {
            enemies.SetActive(true);
        }
    }
}
