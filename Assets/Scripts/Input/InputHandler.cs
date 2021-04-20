//Pol Lozano Llorens
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;

public class InputHandler : ScriptableObject, GameInput.IGameplayActions
{
    public event UnityAction<Vector2> moveEvent = delegate { };
    public event UnityAction<Vector2> cameraRotateEvent = delegate { };
    public event UnityAction<float> cameraZoomEvent = delegate { };

    public event UnityAction shootEvent = delegate { };
    public event UnityAction aimEvent = delegate { };
    public event UnityAction aimEventCanceled = delegate { };
    public event UnityAction attackEvent = delegate { };
    public event UnityAction dodgeEvent = delegate { };

    /*DEBUG CONTROLS*/
    //------------------------------
    public event UnityAction debugEvent = delegate { };
    public event UnityAction flyEvent = delegate { };
    public event UnityAction flyEventCanceled = delegate { };
    public event UnityAction sinkEvent = delegate { };
    public event UnityAction sinkEventCanceled = delegate { };
    public event UnityAction enterEvent = delegate { };
    //------------------------------
    private GameInput gameInput;

    private void OnEnable()
    {
        if(gameInput == null)
        {
            gameInput = new GameInput();
            gameInput.Gameplay.SetCallbacks(this);
        }
        EnableGameplayInput();
    }

    private void OnDisable()
    {
        DisableAllInput();
    }

    public void EnableGameplayInput()
    {
        gameInput.Gameplay.Enable();
    }

    private void DisableAllInput()
    {
        gameInput.Gameplay.Disable();
    }

    #region GAMEPLAY
    public void OnMove(InputAction.CallbackContext context)
    {
        moveEvent.Invoke(context.ReadValue<Vector2>());
    }

    public void OnCameraRotate(InputAction.CallbackContext context)
    {
        cameraRotateEvent.Invoke(context.ReadValue<Vector2>());
    }

    public void OnCameraZoom(InputAction.CallbackContext context)
    {
        cameraZoomEvent.Invoke(context.ReadValue<float>());
    }

    public void OnAim(InputAction.CallbackContext context)
    {
        switch (context.phase)
        {
            case InputActionPhase.Started: aimEvent.Invoke(); break;
            case InputActionPhase.Canceled: aimEventCanceled.Invoke(); break;
        }
    }

    public void OnShoot(InputAction.CallbackContext context)
    {
        shootEvent.Invoke();
    }

    public void OnAttack(InputAction.CallbackContext context)
    {
        attackEvent.Invoke();
    }

    public void OnDodge(InputAction.CallbackContext context)
    {
        dodgeEvent.Invoke();
    }
    #endregion

    #region DEBUG

    public void OnDebug(InputAction.CallbackContext context)
    {
        debugEvent.Invoke();
    }
    public void OnFly(InputAction.CallbackContext context)
    {
        switch (context.phase)
        {
            case InputActionPhase.Started: flyEvent.Invoke(); break;
            case InputActionPhase.Canceled: flyEventCanceled.Invoke(); break;
        }
    }
    public void OnSink(InputAction.CallbackContext context)
    {
        switch (context.phase)
        {
            case InputActionPhase.Started: sinkEvent.Invoke(); break;
            case InputActionPhase.Canceled: sinkEventCanceled.Invoke(); break;
        }
    }

    public void OnEnter(InputAction.CallbackContext context)
    {
        enterEvent.Invoke();
    }

    #endregion
}
