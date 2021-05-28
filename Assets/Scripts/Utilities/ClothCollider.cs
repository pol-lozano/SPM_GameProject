using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClothCollider : MonoBehaviour
{

    [SerializeField] private Cloth cloth;
    [SerializeField] private CapsuleCollider[] colliders;

    private void Awake()
    {
        //colliders[1] = GameObject.FindGameObjectWithTag("Player").GetComponent<CapsuleCollider>();
        cloth.capsuleColliders = colliders;
    }
}
