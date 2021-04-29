using UnityEngine;
using UnityEngine.UI;

public class UIHealthBar : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private Image foregroundImage;
    [SerializeField] private Image backgroundImage;
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
            foregroundImage.enabled = !isBehind;
            backgroundImage.enabled = !isBehind;
        }

        transform.position = Camera.main.WorldToScreenPoint(target.position + offset);
    }

    public void SetHealthBarPercentage(float percentage)
    {
        float parentWidth = GetComponent<RectTransform>().rect.width;
        float width = parentWidth * percentage;
        foregroundImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, width);
    }

    public void Activate()
    {
        foregroundImage.enabled = true;
        backgroundImage.enabled = true;
    }

    public void Deactivate()
    {
        foregroundImage.enabled = false;
        backgroundImage.enabled = false;
    }
}
