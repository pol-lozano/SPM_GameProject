//Author: Rickard lIndgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCollider : MonoBehaviour
{

    [SerializeField] private MeleeWeapon attack;

    public void EnableCollider() { attack.Collider.enabled = true; }
    public void DisableCollider() { attack.Collider.enabled = false; }
}
