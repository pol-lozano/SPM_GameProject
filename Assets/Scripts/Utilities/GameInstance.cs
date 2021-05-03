using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameInstance : MonoBehaviour
{
    private void OnEnable() => EventHandler<ReloadEvent>.RegisterListener(Reload);
    private void OnDisable() => EventHandler<ReloadEvent>.UnregisterListener(Reload);

    private void Reload(ReloadEvent eve)
    {
        CharacterController3D.Player.transform.position = Checkpoint.currentCheckPoint.transform.position;
    }


}
