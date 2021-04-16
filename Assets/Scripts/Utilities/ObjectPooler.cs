using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    //TODO:: make it proper static not monobehaviour??
    public static ObjectPooler instance = null;

    private void Awake()
    {
        if (instance == null) instance = this;
        else if (instance != this) Destroy(this);
        DontDestroyOnLoad(this);

        if (poolDictionary == null)
            PopulatePools();
    }

    [System.Serializable]
    public struct Pool
    {
        public string tag;
        public GameObject prefab;
        public int size;
    }

    [SerializeField] private List<Pool> pools;
    private Dictionary<string, Queue<GameObject>> poolDictionary;

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

    public GameObject SpawnFromPool(string tag)
    {
        GameObject obj = poolDictionary[tag].Dequeue();
        poolDictionary[tag].Enqueue(obj);

        return obj;
    }
}
