//Author: Pol Lozano Llorens
using System;
using System.Collections.Generic;

public class StateMachine
{
    private Dictionary<Type, State> stateDictionary = new Dictionary<Type, State>();
    private State currentState;

    /// <summary>
    /// Instantiates states and initializes statemachine
    /// </summary>
    /// <param name="owner">Owner of statemachine</param>
    /// <param name="states">States that the statemachine can use</param>
    public StateMachine(object owner, State[] states)
    {
        UnityEngine.Debug.Assert(states.Length > 0);
        for(int i = 0; i < states.Length; i++)
        {
            State instance = UnityEngine.Object.Instantiate(states[i]);
            instance.Initialize(this, owner);
            stateDictionary.Add(instance.GetType(), instance);
            if (currentState == null)
                currentState = instance;
        }
        currentState.Enter();
    }

    /// <summary>
    /// Transitions from current state to state specified
    /// </summary>
    /// <typeparam name="T">State type to transition to</typeparam>
    public void Transition<T>() where T : State
    {   
        //Ignore transition if it doesn't exist
        if (stateDictionary.ContainsKey(typeof(T)))
        {
            currentState.Exit();
            currentState = stateDictionary[typeof(T)];
            currentState.Enter();
        }        
    }

    /// <summary>
    /// Handles Update() loop for current state after transitions are evaluated
    /// </summary>
    public void HandleUpdate()
    {
        currentState?.EvaluateTransitions();
        currentState?.HandleUpdate();
    }

    /// <summary>
    /// Handles FixedUpdate() loop for current state
    /// </summary>
    public void HandleFixedUpdate()
    {
        currentState?.HandleFixedUpdate();
    }

    /// <summary>
    /// Handles Animation Event (Start) callback for current state
    /// </summary>
    public void OnAnimationStarted()
    {
        currentState?.OnAnimationStarted();
    }

    /// <summary>
    /// Handles Animation Event (End) callback for current state
    /// </summary>
    public void OnAnimationEnded()
    {
        currentState?.OnAnimationEnded();
    }
}