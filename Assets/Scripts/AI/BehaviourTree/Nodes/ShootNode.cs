using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ShootNode : Node
{

    UmbralMoth thisAI;
    Transform target;

    public ShootNode(BehaviourTree tree) 
    { 
        this.tree = tree;
        thisAI = tree.GetBlackBoardValue<UmbralMoth>("ThisAI").GetVariable();
        target = tree.GetBlackBoardValue<Transform>("Target").GetVariable();
    }


    public override NODE_STATE Evaluate()
    {
        tree.GetBlackBoardValue<NavMeshAgent>("Agent").GetVariable().speed = tree.GetBlackBoardValue<float>("AttackSpeed").GetVariable();

        GameObject g = ObjectPooler.instance.SpawnFromPool("shadowball");
        Projectile proj = g.GetComponent<Projectile>();
        proj.transform.position = thisAI.transform.position + thisAI.transform.forward;
        proj.transform.rotation = thisAI.transform.rotation;
        proj.SetActive(true);
        proj.SetForce(target.position - proj.transform.position);

        return NODE_STATE.SUCCESS;
    }
}
