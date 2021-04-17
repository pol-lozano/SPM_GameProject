using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="AttributeSystem/Attribute")]
public class Attribute : ScriptableObject
{
    public enum ATTRIBUTE_TYPE{
        health, 
        stamina
    }


    [SerializeField] private ATTRIBUTE_TYPE attributeType;
    [SerializeField] private float attributeValue;
    [SerializeField] private float minValue;
    [SerializeField] private float maxValue;

    private void OnEnable()
    {
        attributeValue = maxValue;
    }

    public float AttributeValue { 
        get => attributeValue; 
        set => attributeValue = attributeValue + value >= maxValue ? maxValue : attributeValue += value; 
    }

    public float MaxValue { get => maxValue;}

    public ATTRIBUTE_TYPE AttributeType { get => attributeType; }


}
