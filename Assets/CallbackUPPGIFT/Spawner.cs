using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Spawner : MonoBehaviour
{
    [SerializeField] private GameObject prefab;
    [SerializeField] private InputHandler input;
    private bool spawnInput = false;
    
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        

        if (spawnInput)
        {
            Spawn();
            spawnInput = false;
        }
        
            
    }

    void Spawn()
    {
        GameObject go = Instantiate(prefab);
        
        UnitSpawn spawn = new UnitSpawn();
        spawn.unit = go;
        EventSystem.Current.FireEvent(spawn);
        
    }






    private void OnEnable() { input.aimEvent += OnAim; }
    private void OnDisable() { input.aimEvent -= OnAim; }

    private void OnAim() => spawnInput = true;
    
    
}
