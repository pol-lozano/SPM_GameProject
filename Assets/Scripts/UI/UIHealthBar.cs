using System;
using UnityEngine;
using UnityEngine.UI;

public class UIHealthBar : MonoBehaviour
{
    [SerializeField] private bool movable = true;
    [SerializeField] private Transform target;
    [SerializeField] private Vector3 offset;

    [SerializeField] private GameObject UIElements;
    [SerializeField] private Image damageTakenImage;
    [SerializeField] private Image currentHealthImage;

    private bool activated;
    private float width;
    private RectTransform rectParent;

    private void Awake()
    {
        rectParent = GetComponent<RectTransform>();
        if (movable)
            Deactivate();
        else
            Activate();
    }

    void LateUpdate()
    {
        if (activated)
            UpdateUI();
    }

    private void UpdateUI()
    {
        if (movable)
            MoveHealthBar();

        float newWidth = Mathf.Lerp(damageTakenImage.rectTransform.rect.width, width, 1.5f * Time.deltaTime);
        damageTakenImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, newWidth);
    }

    private void MoveHealthBar()
    {
        transform.position = Camera.main.WorldToScreenPoint(target.position + offset);

        Vector3 direction = (target.position - Camera.main.transform.position).normalized;
        bool isBehind = Vector3.Dot(direction, Camera.main.transform.forward) <= 0.0f;
        UIElements.SetActive(!isBehind);
    }

    public void SetHealthBarPercentage(float percentage)
    {
        float parentWidth = rectParent.rect.width;
        width = parentWidth * percentage;
        currentHealthImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, width);
    }

    public void Activate()
    {
        activated = true;
        UIElements.SetActive(true);
    }

    public void Deactivate()
    {
        activated = false;
        UIElements.SetActive(false);
    }

    internal void DeactivateDelayed(int t)
    {
        CancelInvoke("Deactivate");
        Invoke("Deactivate", t);
    }
}
