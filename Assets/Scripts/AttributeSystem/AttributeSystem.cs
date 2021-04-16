using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttributeSystem : MonoBehaviour
{
    
    [SerializeField] private List<Attribute> activeAttributes = new List<Attribute>();
    
    public void ApplyChanges(Attribute.ATTRIBUTE_TYPE type, float value)
    {
        foreach(Attribute a in activeAttributes)
        {
            if (a.AttributeType == type)
                a.AttributeValue -= value;
        }
    }
}
