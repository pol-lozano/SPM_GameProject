using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    public InputHandler input;
    public CombatState[] states;

    private StateMachine stateMachine;

    [SerializeField] private GameObject crosshair;
    private bool shootInput = false;
    private bool attackInput = false;
    private bool aimInput = false;

    public bool ShootInput { get => shootInput; set => shootInput = value; }
    public bool AttackInput { get => attackInput; set => attackInput = value; }
    public bool AimInput { get => aimInput; set => aimInput = value; }

    private void Awake()
    {
        stateMachine = new StateMachine(this, states);
    }

    private void Update() => stateMachine.HandleUpdate();

    private void OnEnable()
    {
        input.shootEvent += OnShoot;
        input.attackEvent += OnAttack;
        input.aimEvent += OnAim;
        input.aimEventCanceled += OnAimCanceled;
    }

    private void OnDisable()
    {
        input.shootEvent -= OnShoot;
        input.attackEvent -= OnAttack;
        input.aimEvent -= OnAim;
        input.aimEventCanceled -= OnAimCanceled;
    }

    private void OnShoot() => shootInput = true;
    private void OnAttack() => attackInput = true;
    private void OnAim() => aimInput = true;
    private void OnAimCanceled() => aimInput = false;

    public void TurnOffCrosshair()
    {
        crosshair.SetActive(false);
    }

    public void TurnOnCrosshair()
    {
        crosshair.SetActive(true);
    }


}
