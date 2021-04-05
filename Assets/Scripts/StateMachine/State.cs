//Pol Lozano Llorens
using UnityEngine;

public abstract class State : ScriptableObject
{
    // Methods
    public virtual void Initialize(StateMachine owner) { }
    public virtual void Enter() { }
    public virtual void Exit() { }
    public virtual void HandleUpdate() { }
}
