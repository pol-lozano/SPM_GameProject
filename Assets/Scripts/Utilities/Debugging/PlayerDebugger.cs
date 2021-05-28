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
    [SerializeField] private TurnTowardsCameraDirection turnPlayer;


    public void GodMode()
    {
        playerController.enabled = !playerController.enabled;
        playerPhysics.enabled = !playerPhysics.enabled;
        godMode.enabled = !godMode.enabled;
    }

    public void TurnOffScripts()
    {
        playerController.enabled = false;
     //   playerPhysics.enabled = false;
        playerCombat.enabled = false;
        turnPlayer.enabled = false;
        Debug.Log("Turned off player scripts");
    }

    public void TurnOnScripts()
    {
        playerController.enabled = true;
 //       playerPhysics.enabled = true;
        playerCombat.enabled = true;
        turnPlayer.enabled = true;
        Debug.Log("Turned on player scripts");

    }
}
