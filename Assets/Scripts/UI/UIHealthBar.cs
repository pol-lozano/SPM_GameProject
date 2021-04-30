using System;
using UnityEngine;
using UnityEngine.UI;

public class UIHealthBar : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private Image damageTakenImage;
    [SerializeField] private Image currentHealthImage;
    [SerializeField] private Image backgroundImage;
    [SerializeField] private Image backgroundMarginImage;

    [SerializeField] private Vector3 offset;
    private bool activated;

    private void Awake()
    {
        activated = false;
        Deactivate();
    }

    void LateUpdate()
    {
        Vector3 direction = (target.position - Camera.main.transform.position).normalized;

        if (activated)
        {
            bool isBehind = Vector3.Dot(direction, Camera.main.transform.forward) <= 0.0f;
            backgroundMarginImage.enabled = !isBehind;
            backgroundImage.enabled = !isBehind;
            damageTakenImage.enabled = !isBehind;
            currentHealthImage.enabled = !isBehind;
        }

        transform.position = Camera.main.WorldToScreenPoint(target.position + offset);
    }
    float width;
    public void SetHealthBarPercentage(float percentage)
    {
        float parentWidth = GetComponent<RectTransform>().rect.width;
        width = parentWidth * percentage;
        currentHealthImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, width);
    }

    private void Update()
    {
        damageTakenImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, Mathf.Lerp(damageTakenImage.rectTransform.rect.width, width, 1.5f * Time.deltaTime));
    }

    public void Activate()
    {
        backgroundMarginImage.enabled = true;
        backgroundImage.enabled = true;
        damageTakenImage.enabled = true;
        currentHealthImage.enabled = true;
    }

    public void Deactivate()
    {
        backgroundMarginImage.enabled = false;
        backgroundImage.enabled = false;
        damageTakenImage.enabled = false;
        currentHealthImage.enabled = false;
    }

    internal void DeactivateDelayed(int t)
    {
        CancelInvoke("Deactivate");
        Invoke("Deactivate", t);
    }
}
