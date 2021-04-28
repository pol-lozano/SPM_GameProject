using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(HealthComponent))]
public class EnemyAI : MonoBehaviour
{

    [SerializeField] private float chasingDistance;
    [SerializeField] private float attackDistance;
    [SerializeField] private Transform target;

    private Node topNode;


    // Start is called before the first frame update
    void Awake()
    {
        ConstructBehaviourTree();
    }


    private void ConstructBehaviourTree()
    {
        HealthNode healthNode = new HealthNode(this, gameObject.GetComponent<HealthComponent>());
        WaitNode wait = new WaitNode(3);
        DieNode die = new DieNode(gameObject);

        Sequence checkHealthAndDieSequence = new Sequence(new List<Node> { healthNode, wait, die });

        HealthDecorator healthDecorator = new HealthDecorator(gameObject.GetComponent<HealthComponent>());

        topNode = new Selector(new List<Node> { checkHealthAndDieSequence }, healthDecorator);
    }


    // Update is called once per frame
    void Update()
    {
        topNode.Evaluate();
    }
}
