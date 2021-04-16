using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class Attribute : ScriptableObject
{
    public enum ATTRIBUTE_TYPE{
        health, 
        stamina
    }


    [SerializeField] private ATTRIBUTE_TYPE attributeType;
    [SerializeField] private float attributeValue;


    public float AttributeValue { get => attributeValue; set => attributeValue -= value; }
    public ATTRIBUTE_TYPE AttributeType { get => attributeType; }


}
