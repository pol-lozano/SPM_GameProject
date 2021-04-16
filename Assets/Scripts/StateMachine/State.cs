//Author: Pol Lozano Llorens
using UnityEngine;

public abstract class State : ScriptableObject
{
    protected StateMachine stateMachine;
    protected object owner;

    public virtual void Initialize(StateMachine stateMachine, object owner)
    {
        this.stateMachine = stateMachine;
        this.owner = owner;
    }

    public virtual void Enter() { }
    public virtual void HandleUpdate() { }
    public virtual void HandleFixedUpdate() { }
    public virtual void EvaluateTransitions() { }
    public virtual void Exit() { }
}
