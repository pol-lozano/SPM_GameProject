//Author: Pol Lozano Llorens

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIText : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI text;
    [SerializeField] private Animator anim;


    private void OnEnable() => EventHandler<CheckPointEvent>.RegisterListener(ShowText);
    private void OnDisable() => EventHandler<CheckPointEvent>.UnregisterListener(ShowText);

    private void ShowText(CheckPointEvent eve)
    {
            text.text = eve.Text;
            anim.SetTrigger("ShowText");
    }
}
