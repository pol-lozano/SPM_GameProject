//Main Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    //TODO:: make it proper static not monobehaviour??
    #region SINGLETON
    public static ObjectPooler instance = null;

    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != this) Destroy(this);


        if (poolDictionary == null)
            PopulatePools();
    }
    #endregion

    [System.Serializable]
    public struct Pool
    {
        public string tag;
        public GameObject prefab;
        public int size;
    }

    [SerializeField] private List<Pool> pools;
    private Dictionary<string, Queue<GameObject>> poolDictionary;

    /// <summary>
    /// Populates objects for the pools specified in the inspector
    /// </summary>
    public void PopulatePools()
    {
        if (poolDictionary == null)
            poolDictionary = new Dictionary<string, Queue<GameObject>>();

        foreach (Pool p in pools)
        {
            GameObject parent = new GameObject(p.tag + " pool");
            parent.transform.SetParent(transform);

            Queue<GameObject> q = new Queue<GameObject>();
            for (int i = 0; i < p.size; i++)
            {
                GameObject obj = Instantiate(p.prefab);
                obj.transform.SetParent(parent.transform);
                obj.SetActive(false);
                q.Enqueue(obj);
            }

            poolDictionary.Add(p.tag, q);
        }
    }

    /// <summary>
    /// Spawns a gameobject from the pool queue
    /// </summary>
    /// <param name="tag">Tag for the pool of objects to spawn from</param>
    /// <returns>Object that was spawned</returns>
    public GameObject SpawnFromPool(string tag)
    {
        GameObject obj = poolDictionary[tag].Dequeue();
        poolDictionary[tag].Enqueue(obj);

        return obj;
    }
}
