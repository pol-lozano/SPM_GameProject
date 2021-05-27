using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ShootNode : Node
{

    public ShootNode(BehaviourTree tree) 
    { 
        this.tree = tree;
    }


    public override NODE_STATE Evaluate()
    {
        if (BlackBoard.IsCoolingDown == false)
        {
            //Debug.Log("Shoot");
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(BlackBoard.AttackAudio, BlackBoard.ThisAI.GetComponent<AudioSource>()));
            BlackBoard.Agent.speed = BlackBoard.AttackSpeed;
            GameObject g = ObjectPooler.instance.SpawnFromPool("shadowball");
            Projectile proj = g.GetComponent<Projectile>();
            proj.transform.position = BlackBoard.ThisAI.position + BlackBoard.ThisAI.forward;
            proj.transform.rotation = BlackBoard.ThisAI.rotation;
            proj.SetActive(true);
            proj.SetForce(BlackBoard.Target.position - proj.transform.position);
            //tree.GetBlackBoardValue<bool>("isCoolingDown").SetVariable(true);
            BlackBoard.RecentlyAttacked = true;
        }

        

        return NODE_STATE.SUCCESS;
    }
}
