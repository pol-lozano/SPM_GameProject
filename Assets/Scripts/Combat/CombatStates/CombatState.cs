using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CombatState : State
{
    private PlayerCombat player;
    public PlayerCombat Player => player = player != null ? player : (PlayerCombat)owner;
    //TODO: Have everything that is really important to the player as a property here
}
