//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDebugger : MonoBehaviour
{

    [SerializeField] private CharacterController3D playerController;
    [SerializeField] private PhysicsComponent playerPhysics;
    [SerializeField] private PlayerCombat playerCombat;
    [SerializeField] private GodMode godMode;
   


    public void GodMode()
    {
        playerController.enabled = !playerController.enabled;
        playerPhysics.enabled = !playerPhysics.enabled;
        godMode.enabled = !godMode.enabled;
    }
}
