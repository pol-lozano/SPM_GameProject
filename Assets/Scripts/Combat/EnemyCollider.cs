//Author: Rickard lIndgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCollider : MonoBehaviour
{

    [SerializeField] private MeleeWeapon attack;

    private HealthComponent hp;

    private void Awake()
    {
        hp = GetComponent<HealthComponent>();
    }

    private void Update()
    {
        if(hp.CurrentHealth <= 0)
        {
            DisableCollider();
        }
    }

    public void EnableCollider() { attack.Collider.enabled = true; }
    public void DisableCollider() { attack.Collider.enabled = false; }
}
