using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIText : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI text;
    [SerializeField] private Animator anim;


    private void OnEnable() => EventHandler<UITriggerEvent>.RegisterListener(ShowText);
    private void OnDisable() => EventHandler<UITriggerEvent>.UnregisterListener(ShowText);

    private void ShowText(UITriggerEvent eve)
    {
        text.text = eve.Text;
        anim.SetTrigger("ShowText");
    }
}
