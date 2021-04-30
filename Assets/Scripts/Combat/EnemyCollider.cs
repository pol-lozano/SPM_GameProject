using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCollider : MonoBehaviour
{

    [SerializeField] private EnemyMeleeAttack attack;

    public void EnableCollider() { attack.Coll.enabled = true; }
    public void DisableCollider() { attack.Coll.enabled = false; }
}
