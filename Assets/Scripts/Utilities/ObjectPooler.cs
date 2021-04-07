using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{

    public static ObjectPooler current;
    [SerializeField] private GameObject pooledObject;
    [SerializeField] private int poolAmount;
    [SerializeField] private bool willGrow;

    //private Queue<Projectile> activeObjects = new Queue<Projectile>();
    private Stack<GameObject> inactiveObjects = new Stack<GameObject>();
    private List<GameObject> pool = new List<GameObject>();

    
    // Start is called before the first frame update
    void Start()
    {
        
        current = this;
        for(int i = 0; i < poolAmount; i++)
        {
            GameObject obj = Instantiate(pooledObject);
            obj.SetActive(false);
            pool.Add(obj);
        }
    }
    

    public GameObject GetPooledObject()
    {
        foreach(GameObject g in pool)
        {
            if (!g.activeInHierarchy)
                return g;
        }
        

        return null;
    }

    
}
