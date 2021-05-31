using System;
using UnityEngine;
using UnityEngine.UI;

public class UIHealthBar : MonoBehaviour
{
    [SerializeField] private HealthComponent owner;

    [SerializeField] private bool movable = true;
    [SerializeField] private float deactivateTimer = 7;
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
        if (owner.IsPlayer) 
            Activate();
        else 
            Deactivate();
    }

    private void OnEnable()
    {
        EventHandler<HitEvent>.RegisterListener(SetHealth);
        EventHandler<CheckPointEvent>.RegisterListener(ResetHealth);
        EventHandler<ReloadEvent>.RegisterListener(ResetHealth);
        EventHandler<DyingEvent>.RegisterListener(DeactivateHealthBar);
    }

    private void OnDisable()
    {
        EventHandler<HitEvent>.UnregisterListener(SetHealth);
        EventHandler<CheckPointEvent>.UnregisterListener(ResetHealth);
        EventHandler<ReloadEvent>.UnregisterListener(ResetHealth);
        EventHandler<DyingEvent>.UnregisterListener(DeactivateHealthBar);
    }

    private void DeactivateHealthBar(DyingEvent data)
    {
        if (data.Info.hitComponent != owner) 
            return;

        if(owner.IsPlayer == false)
            Invoke(nameof(DeactivateDelayed), 2);
    }

    private void SetHealth(HitEvent data)
    {
        if (data.Info.hitComponent != owner)
            return;

        if (owner.IsPlayer == false)
        {
            Activate();
            DeactivateDelayed(deactivateTimer);
        }

        SetHealthBarPercentage(owner.CurrentHealth / owner.MaxHealth);
    }

    private void ResetHealth(CheckPointEvent data)
    {
        if(owner.IsPlayer == true)
        {
            SetHealthBarPercentage(1);
        }
    }
    private void ResetHealth(ReloadEvent data)
    {
        if (owner.IsPlayer == true)
        {
            SetHealthBarPercentage(1);
        }
    }

    private void LateUpdate()
    {
        if (activated)
            UpdateUI();
    }

    private void UpdateUI()
    {
        float newWidth = Mathf.Lerp(damageTakenImage.rectTransform.rect.width, width, 1.5f * Time.deltaTime);
        damageTakenImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, newWidth);

        if (movable)
            MoveHealthBar();
    }

    private void MoveHealthBar()
    {
        transform.position = Camera.main.WorldToScreenPoint(target.position + offset);

        Vector3 direction = (target.position - Camera.main.transform.position).normalized;
        bool isBehind = Vector3.Dot(direction, Camera.main.transform.forward) <= 0.0f;
        UIElements.SetActive(!isBehind);
    }

    private void SetHealthBarPercentage(float percentage)
    {
        float parentWidth = rectParent.rect.width;
        width = parentWidth * percentage;
        currentHealthImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, width);
    }

    private void Activate()
    {
        activated = true;
        UIElements.SetActive(true);
    }

    private void Deactivate()
    {
        activated = false;
        UIElements.SetActive(false);
    }

    private void DeactivateDelayed(float t)
    {
        CancelInvoke(nameof(Deactivate));
        Invoke(nameof(Deactivate), t);
    }
}
