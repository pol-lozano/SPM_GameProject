//Pol Lozano Llorens
using System;
using System.Collections.Generic;
using UnityEngine;

public class StateMachine
{
    //Fields
    private Stack<Type> states = new Stack<Type>();
    private readonly Dictionary<Type, State> stateDictionary = new Dictionary<Type, State>();

    //Properties
    public State CurrentState => stateDictionary[states.Peek()];

    // Methods
    public StateMachine(object owner, State[] states)
    {
        Debug.Assert(states.Length > 0);
        foreach (State state in states)
        {
            State instance = UnityEngine.Object.Instantiate(state);
            instance.Initialize(this, owner);
            stateDictionary.Add(instance.GetType(), instance);
            if (this.states.Count == 0) this.states.Push(instance.GetType());
        }
        CurrentState.Enter();
    }

    public void Push<T>(object param = null) where T : State
    {
        //CurrentState.Exit();
        
        states.Push(typeof(T));
        Debug.Log(" entering state: " + CurrentState.GetType());
        CurrentState.Enter();
    }

    public void Pop()
    {
        if (states.Count > 1)
        {
            Debug.Log(" exiting state: " + CurrentState.GetType());
            states.Pop();
        }
    }

    //State machine should Either use transition or pop from exit
    public void Transition<T>() where T : State
    {
        CurrentState.Exit();
        //Ignore transition if it doesn't exist
        if (stateDictionary.ContainsKey(typeof(T)))
        {
            Pop();
            Push<T>();
        }        
    }

    public void HandleUpdate()
    {
        CurrentState?.EvaluateTransitions();
        CurrentState?.HandleUpdate();
    }
}
