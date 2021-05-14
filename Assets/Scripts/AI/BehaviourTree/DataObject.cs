using UnityEngine;
using System.Collections;

public class DataObject{}

public class DataObject<T> : DataObject
{
    T variable;

    public DataObject(T v) { variable = v; }

    public T GetVariabel() { return variable; }
    public void SetVariabel(T value) { variable = value; }
}