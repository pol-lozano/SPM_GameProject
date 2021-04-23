//Author: Rickard Lindgren
using UnityEngine;

public class Persistance 
{

    private Transform transform;
    private float hp;
    private bool isDead;

    public Transform Transform { get => transform; set => transform = value; }
    public float HP { get => hp; set => hp = value; }
    public bool IsDead { get => isDead; set => isDead = value; }

    public Persistance(Transform t, float x, bool dead)
    {
        transform = t;
        hp = x;
        isDead = dead;
    }

}
