//Author: Rickard Lindgren
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BlackBoard : MonoBehaviour
{
    /****************Values**************/
    [Header("Values")]
    [SerializeField] private float stunSpeed = 3;
    [SerializeField] private float stunLength = 3;
    [SerializeField] private float distanceToAttack = 1;
    [SerializeField] private float distanceToPointForSuccess = 1;
    [SerializeField] private float shotCooldown = 2;

    public float MoveSpeed { get; set; }
    public float StartHeight { get; set; }
    public float StunSpeed { get => stunSpeed; }
    public float StunLength { get => stunLength; }
    public float DistanceToAttack { get => distanceToAttack; }
    public float DistanceToPointForSuccess { get => distanceToPointForSuccess; }
    public float ShotCooldown { get => shotCooldown; }
    /****************Values**************/



    /****************References**************/
    [Header("References")]
    [SerializeField] private Transform target;
    [SerializeField] private Animator anim;
    [SerializeField] private AIPath path;
    [SerializeField] private EnemyAI thisAI;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private HealthComponent enemyHealth;
    [SerializeField] private List<Rigidbody> ragdoll;

    public Transform Target { get => target; }
    public HealthComponent EnemyHealth { get => enemyHealth; }
    public List<Rigidbody> Ragdoll { get => ragdoll; }
    public Animator Anim { get => anim; }
    public NavMeshAgent Agent { get => agent; }

    /****************References**************/

}
