//Pol Lozano Llorens
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;

public class InputHandler : ScriptableObject, GameInput.IGameplayActions
{
    public event UnityAction<Vector2> moveEvent = delegate { };
    public event UnityAction jumpEvent = delegate { };
    public event UnityAction jumpCanceledEvent = delegate { };
    public event UnityAction<Vector2> cameraRotateEvent = delegate { };
    public event UnityAction<float> cameraZoomEvent = delegate { };

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

    //GAMEPLAY
    public void OnMove(InputAction.CallbackContext context)
    {
        moveEvent.Invoke(context.ReadValue<Vector2>());
    }

    public void OnJump(InputAction.CallbackContext context)
    {
        switch (context.phase)
        {
            case InputActionPhase.Started: jumpEvent.Invoke(); break;
            case InputActionPhase.Canceled: jumpCanceledEvent.Invoke(); break;
        }
    }

    public void OnCameraRotate(InputAction.CallbackContext context)
    {
        cameraRotateEvent.Invoke(context.ReadValue<Vector2>());
    }

    public void OnCameraZoom(InputAction.CallbackContext context)
    {
        cameraZoomEvent.Invoke(context.ReadValue<float>());
    }
}
