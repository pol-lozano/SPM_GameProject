using UnityEngine;
using System.Collections;

public class DataObject{}

public class DataObject<T> : DataObject
{
    T variable;

    public DataObject(T v) { variable = v; }
    public DataObject() { variable = default(T); }

    public T GetVariable() { return variable; }

    public void SetVariable(T value) { variable = value; }
}