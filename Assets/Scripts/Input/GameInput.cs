// GENERATED AUTOMATICALLY FROM 'Assets/Settings/Input/GameInput.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @GameInput : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @GameInput()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""GameInput"",
    ""maps"": [
        {
            ""name"": ""Gameplay"",
            ""id"": ""94879b47-a749-49c1-bfd6-5191ac283800"",
            ""actions"": [
                {
                    ""name"": ""Move"",
                    ""type"": ""Value"",
                    ""id"": ""b7683748-9929-4ba7-82f5-60a24e06a0dd"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""CameraRotate"",
                    ""type"": ""Value"",
                    ""id"": ""be9850bb-0454-4c62-b4a2-cdfe9bcd2770"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""CameraZoom"",
                    ""type"": ""Value"",
                    ""id"": ""7f435a8d-6b82-4492-92c2-bdfa044b6cb6"",
                    ""expectedControlType"": ""Axis"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Aim"",
                    ""type"": ""Button"",
                    ""id"": ""7faeaac9-b353-46ba-87bd-809553f3c30c"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Shoot"",
                    ""type"": ""Button"",
                    ""id"": ""f53a1c47-b0db-4f02-a847-10b37b7351b5"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Attack"",
                    ""type"": ""Button"",
                    ""id"": ""b86de677-5052-43db-8459-ec8c6c6a550f"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Dodge"",
                    ""type"": ""Button"",
                    ""id"": ""727538d3-32fe-4a1d-a6e8-f7bc132eb940"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Debug"",
                    ""type"": ""Button"",
                    ""id"": ""9a2b6e03-ae5c-447e-b0d6-54e7818941b6"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Fly"",
                    ""type"": ""Button"",
                    ""id"": ""a9c99f2a-45b0-4ff6-89e6-9d5180b97be0"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Sink"",
                    ""type"": ""Button"",
                    ""id"": ""3d950dd8-204b-4d26-bccf-1f03a8cd439f"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Enter"",
                    ""type"": ""Button"",
                    ""id"": ""6d302d66-76b5-4414-9da5-7790df3fc1fe"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": ""Normalize(max=1)"",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""3506c470-c0e7-4c7b-b935-32e0261aad9f"",
                    ""path"": ""<Gamepad>/leftStick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Gamepad"",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""WASD"",
                    ""id"": ""dedea5df-1112-4368-9997-d0301517afe4"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""10d6b403-2369-4e2a-b282-9166ddcd5854"",
                    ""path"": ""<Keyboard>/w"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""d9550303-e8e0-49a6-a7ba-e19db8ec5efb"",
                    ""path"": ""<Keyboard>/s"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""5dcf2467-dda6-4374-a631-94c6e1e3db73"",
                    ""path"": ""<Keyboard>/a"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""d22969fd-7a0e-487b-91ac-71615da1671c"",
                    ""path"": ""<Keyboard>/d"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": """",
                    ""id"": ""efaa30b4-5803-4982-9ad5-47b04f8e0f6e"",
                    ""path"": ""<Gamepad>/rightStick"",
                    ""interactions"": """",
                    ""processors"": ""ScaleVector2(x=8,y=8)"",
                    ""groups"": ""Gamepad"",
                    ""action"": ""CameraRotate"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""45d827ea-b3be-4a43-a2e6-cef74187e8f4"",
                    ""path"": ""<Pointer>/delta"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""CameraRotate"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""0dc9aa46-5be6-4a38-9515-c1853f4448e8"",
                    ""path"": ""<Mouse>/scroll/y"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard;Gamepad"",
                    ""action"": ""CameraZoom"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""1707ec3a-6579-4308-8b81-cc6c699a74bc"",
                    ""path"": ""<Mouse>/rightButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Aim"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""0bf76e95-0746-4d8a-9088-89ac433d1b49"",
                    ""path"": ""<Gamepad>/leftTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Gamepad"",
                    ""action"": ""Aim"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""8f8710cd-7627-49bb-a70f-84cda23058db"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Shoot"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""3e22693c-d0d5-4e45-b2c9-8c82cdf2958a"",
                    ""path"": ""<Gamepad>/rightTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Gamepad"",
                    ""action"": ""Shoot"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""8efefb67-7c8d-43e2-b796-a32c00274fcb"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Attack"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""8eb9d8f9-6a17-406b-a7ef-72d50af33eae"",
                    ""path"": ""<Gamepad>/rightTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Gamepad"",
                    ""action"": ""Attack"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""9e4746a1-d391-49d3-83ce-b514aaee054c"",
                    ""path"": ""<Keyboard>/space"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Dodge"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""b1d34947-90d3-4746-a343-2067398cdce5"",
                    ""path"": ""<Gamepad>/buttonEast"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Gamepad"",
                    ""action"": ""Dodge"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""30d4e5ed-c2f4-4048-aefa-deb0610ec6b0"",
                    ""path"": ""<Keyboard>/rightCtrl"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Debug"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""77694ef5-64b0-408f-b010-c72ce47040eb"",
                    ""path"": ""<Keyboard>/e"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard"",
                    ""action"": ""Fly"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""a12d2e2e-9ba2-43af-877f-949e57a70c2b"",
                    ""path"": ""<Keyboard>/q"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Sink"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""f12e28a6-abc0-4ed3-8491-a718749bfa95"",
                    ""path"": ""<Keyboard>/enter"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Enter"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""Keyboard"",
            ""bindingGroup"": ""Keyboard"",
            ""devices"": []
        },
        {
            ""name"": ""Gamepad"",
            ""bindingGroup"": ""Gamepad"",
            ""devices"": []
        }
    ]
}");
        // Gameplay
        m_Gameplay = asset.FindActionMap("Gameplay", throwIfNotFound: true);
        m_Gameplay_Move = m_Gameplay.FindAction("Move", throwIfNotFound: true);
        m_Gameplay_CameraRotate = m_Gameplay.FindAction("CameraRotate", throwIfNotFound: true);
        m_Gameplay_CameraZoom = m_Gameplay.FindAction("CameraZoom", throwIfNotFound: true);
        m_Gameplay_Aim = m_Gameplay.FindAction("Aim", throwIfNotFound: true);
        m_Gameplay_Shoot = m_Gameplay.FindAction("Shoot", throwIfNotFound: true);
        m_Gameplay_Attack = m_Gameplay.FindAction("Attack", throwIfNotFound: true);
        m_Gameplay_Dodge = m_Gameplay.FindAction("Dodge", throwIfNotFound: true);
        m_Gameplay_Debug = m_Gameplay.FindAction("Debug", throwIfNotFound: true);
        m_Gameplay_Fly = m_Gameplay.FindAction("Fly", throwIfNotFound: true);
        m_Gameplay_Sink = m_Gameplay.FindAction("Sink", throwIfNotFound: true);
        m_Gameplay_Enter = m_Gameplay.FindAction("Enter", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // Gameplay
    private readonly InputActionMap m_Gameplay;
    private IGameplayActions m_GameplayActionsCallbackInterface;
    private readonly InputAction m_Gameplay_Move;
    private readonly InputAction m_Gameplay_CameraRotate;
    private readonly InputAction m_Gameplay_CameraZoom;
    private readonly InputAction m_Gameplay_Aim;
    private readonly InputAction m_Gameplay_Shoot;
    private readonly InputAction m_Gameplay_Attack;
    private readonly InputAction m_Gameplay_Dodge;
    private readonly InputAction m_Gameplay_Debug;
    private readonly InputAction m_Gameplay_Fly;
    private readonly InputAction m_Gameplay_Sink;
    private readonly InputAction m_Gameplay_Enter;
    public struct GameplayActions
    {
        private @GameInput m_Wrapper;
        public GameplayActions(@GameInput wrapper) { m_Wrapper = wrapper; }
        public InputAction @Move => m_Wrapper.m_Gameplay_Move;
        public InputAction @CameraRotate => m_Wrapper.m_Gameplay_CameraRotate;
        public InputAction @CameraZoom => m_Wrapper.m_Gameplay_CameraZoom;
        public InputAction @Aim => m_Wrapper.m_Gameplay_Aim;
        public InputAction @Shoot => m_Wrapper.m_Gameplay_Shoot;
        public InputAction @Attack => m_Wrapper.m_Gameplay_Attack;
        public InputAction @Dodge => m_Wrapper.m_Gameplay_Dodge;
        public InputAction @Debug => m_Wrapper.m_Gameplay_Debug;
        public InputAction @Fly => m_Wrapper.m_Gameplay_Fly;
        public InputAction @Sink => m_Wrapper.m_Gameplay_Sink;
        public InputAction @Enter => m_Wrapper.m_Gameplay_Enter;
        public InputActionMap Get() { return m_Wrapper.m_Gameplay; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(GameplayActions set) { return set.Get(); }
        public void SetCallbacks(IGameplayActions instance)
        {
            if (m_Wrapper.m_GameplayActionsCallbackInterface != null)
            {
                @Move.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @Move.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @Move.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @CameraRotate.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraRotate;
                @CameraRotate.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraRotate;
                @CameraRotate.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraRotate;
                @CameraZoom.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraZoom;
                @CameraZoom.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraZoom;
                @CameraZoom.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnCameraZoom;
                @Aim.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAim;
                @Aim.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAim;
                @Aim.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAim;
                @Shoot.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnShoot;
                @Shoot.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnShoot;
                @Shoot.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnShoot;
                @Attack.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAttack;
                @Attack.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAttack;
                @Attack.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnAttack;
                @Dodge.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDodge;
                @Dodge.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDodge;
                @Dodge.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDodge;
                @Debug.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDebug;
                @Debug.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDebug;
                @Debug.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDebug;
                @Fly.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnFly;
                @Fly.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnFly;
                @Fly.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnFly;
                @Sink.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSink;
                @Sink.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSink;
                @Sink.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSink;
                @Enter.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnEnter;
                @Enter.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnEnter;
                @Enter.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnEnter;
            }
            m_Wrapper.m_GameplayActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Move.started += instance.OnMove;
                @Move.performed += instance.OnMove;
                @Move.canceled += instance.OnMove;
                @CameraRotate.started += instance.OnCameraRotate;
                @CameraRotate.performed += instance.OnCameraRotate;
                @CameraRotate.canceled += instance.OnCameraRotate;
                @CameraZoom.started += instance.OnCameraZoom;
                @CameraZoom.performed += instance.OnCameraZoom;
                @CameraZoom.canceled += instance.OnCameraZoom;
                @Aim.started += instance.OnAim;
                @Aim.performed += instance.OnAim;
                @Aim.canceled += instance.OnAim;
                @Shoot.started += instance.OnShoot;
                @Shoot.performed += instance.OnShoot;
                @Shoot.canceled += instance.OnShoot;
                @Attack.started += instance.OnAttack;
                @Attack.performed += instance.OnAttack;
                @Attack.canceled += instance.OnAttack;
                @Dodge.started += instance.OnDodge;
                @Dodge.performed += instance.OnDodge;
                @Dodge.canceled += instance.OnDodge;
                @Debug.started += instance.OnDebug;
                @Debug.performed += instance.OnDebug;
                @Debug.canceled += instance.OnDebug;
                @Fly.started += instance.OnFly;
                @Fly.performed += instance.OnFly;
                @Fly.canceled += instance.OnFly;
                @Sink.started += instance.OnSink;
                @Sink.performed += instance.OnSink;
                @Sink.canceled += instance.OnSink;
                @Enter.started += instance.OnEnter;
                @Enter.performed += instance.OnEnter;
                @Enter.canceled += instance.OnEnter;
            }
        }
    }
    public GameplayActions @Gameplay => new GameplayActions(this);
    private int m_KeyboardSchemeIndex = -1;
    public InputControlScheme KeyboardScheme
    {
        get
        {
            if (m_KeyboardSchemeIndex == -1) m_KeyboardSchemeIndex = asset.FindControlSchemeIndex("Keyboard");
            return asset.controlSchemes[m_KeyboardSchemeIndex];
        }
    }
    private int m_GamepadSchemeIndex = -1;
    public InputControlScheme GamepadScheme
    {
        get
        {
            if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
            return asset.controlSchemes[m_GamepadSchemeIndex];
        }
    }
    public interface IGameplayActions
    {
        void OnMove(InputAction.CallbackContext context);
        void OnCameraRotate(InputAction.CallbackContext context);
        void OnCameraZoom(InputAction.CallbackContext context);
        void OnAim(InputAction.CallbackContext context);
        void OnShoot(InputAction.CallbackContext context);
        void OnAttack(InputAction.CallbackContext context);
        void OnDodge(InputAction.CallbackContext context);
        void OnDebug(InputAction.CallbackContext context);
        void OnFly(InputAction.CallbackContext context);
        void OnSink(InputAction.CallbackContext context);
        void OnEnter(InputAction.CallbackContext context);
    }
}
