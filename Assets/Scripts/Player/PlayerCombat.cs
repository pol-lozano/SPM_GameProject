using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    public InputHandler input;
    public CombatState[] states;
    public LayerMask visionLayer;
    public bool invertY;

    private StateMachine stateMachine;
    
    [SerializeField] private ObjectPooler pool;
    [SerializeField] private GameObject crosshair;
    [SerializeField] private Transform aimTarget;
    [SerializeField] private OrbitCamera cam;
    [SerializeField] private Transform firePoint;
    private bool shootInput = false;
    private bool attackInput = false;
    private bool aimInput = false;

    private Vector3 crossHairTarget;
    private Ray chRay;
    private RaycastHit chHitInfo;
    public Vector2 cameraInput;
    

    public bool ShootInput { get => shootInput; set => shootInput = value; }
    public bool AttackInput { get => attackInput; set => attackInput = value; }
    public bool AimInput { get => aimInput; set => aimInput = value; }

    public ObjectPooler GetObjectPooler() { return pool; }
    public Transform FirePoint { get => firePoint; set => firePoint = value; }
    public OrbitCamera GetCamera() { return cam; }
        
    public Transform GetCrossHairTarget() { return aimTarget; }

    private void Awake()
    {
        stateMachine = new StateMachine(this, states);
    }

    private void Update()
    {
        stateMachine.HandleUpdate();
      
    }

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

    private void OnCameraRotate(Vector2 rotation)
    {
        cameraInput = new Vector2(invertY ? rotation.y : -rotation.y, rotation.x);
    }

    public void SetCrosshair(bool b)
    {
        crosshair.SetActive(b);
    }
    /*
    private void SetCrossHairTarget()
    {
        float aimDistance = 75;
        chRay.origin = cam.transform.position;
        chRay.direction = cam.transform.forward;

        

        if (Physics.Raycast(chRay, out chHitInfo, aimDistance, visionLayer))
        {
            //Debug.DrawLine(transform.position, chHitInfo.point, Color.blue, 0.5f);
            crossHairTarget = chHitInfo.point;
        }
        else
        {
            //VART SÄTTER JAG CROSSHAIR OM JAG INTE SIKTAR PÅ NÅGOT?
            crossHairTarget = cam.transform.forward * aimDistance;
            Debug.DrawLine(transform.position, cam.transform.forward * aimDistance, Color.green, 0.5f);
        }
    }
    */


}
