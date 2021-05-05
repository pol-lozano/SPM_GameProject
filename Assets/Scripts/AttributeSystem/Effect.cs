//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu( menuName = "AttributeSystem/Effect")]
public class Effect : ScriptableObject
{
    public enum EFFECT_DURATION_TYPE
    {
        instant,
        overtime,
        permanent
    }

    public enum EFFECT_TAG
    {
        none,
        stun
    }

    [SerializeField] private EFFECT_TAG effectTag;
    [SerializeField] private EFFECT_DURATION_TYPE durationType;
    [SerializeField] private Attribute.ATTRIBUTE_TYPE attributeType;
    [SerializeField] private float attributeValue;
    [SerializeField] private float duration;
    [SerializeField] private float startDuration;

    private void OnEnable()
    {
        Reset();   
    }

    public float AttributeValue { get => attributeValue; set => attributeValue -= value; }
    public float Duration { get => duration; set => duration = value; }
    public EFFECT_DURATION_TYPE DurationType { get => durationType; }
    public EFFECT_TAG EffectTag { get => effectTag; }
    public Attribute.ATTRIBUTE_TYPE AttributeType { get => attributeType; }
    
    public void Reset()
    {
        duration = startDuration;
    }
    

}
