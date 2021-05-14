//Author: Rickard Lindgren
using UnityEngine;

public class Persistance 
{
    public Vector3 StartingPosition { get; set; }
    public Vector3 Position { get; set; }
    public float HP { get; set; }
    public float StartHP { get; set; }
    public bool IsDead { get; set; }

    public Persistance(Vector3 position, float hp, float starthp, bool isDead)
    {
        StartingPosition = position;
        Position = position;
        HP = hp;
        IsDead = isDead;
        StartHP = starthp;
    }



}
