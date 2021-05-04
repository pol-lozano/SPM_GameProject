//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuzzleListener : MonoBehaviour
{

    [SerializeField] private int id;
    [SerializeField] private Animator anim;

    private void OnEnable() => EventHandler<PuzzleEvent>.RegisterListener(UnlockPuzzle);
    private void OnDisable() => EventHandler<PuzzleEvent>.UnregisterListener(UnlockPuzzle);

    private void UnlockPuzzle(PuzzleEvent pe)
    {
        if (pe.id == id)
        {
            anim.SetTrigger("unlock");
        }
    }  
}
