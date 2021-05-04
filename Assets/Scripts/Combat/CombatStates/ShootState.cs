//Author: Rickard Lindgren
using UnityEngine;

[CreateAssetMenu()]
public class ShootState : AimState
{
    [SerializeField] private ShakeEventData shakeData;
    [SerializeField] private float shotTimer;
    private float shotCooldown;

    private Ray ray;
    private RaycastHit hitInfo;

    //-------------------------
    private float fireRate = 1;
    private float accumulatedTime;
    //-------------------------
    public override void Enter()
    {
        Player.Animator.SetTrigger("Attack");
        Player.Animator.SetBool("IsAiming", true);
        StartShooting();
        shotCooldown = shotTimer;   
    }

    public override void Exit()
    {
        base.Exit();
        Player.Animator.SetBool("IsAiming", false);
    }

    public override void HandleUpdate()
    {
        //UpdateShooting(Time.deltaTime);
        shotCooldown -= Time.deltaTime;
        Player.ShootInput = false;
        Player.AttackInput = false;
    }

    private void StartShooting()
    {
        accumulatedTime = 0.0f;
        Shoot();
    }

    private void UpdateShooting(float deltatime)
    {
        accumulatedTime += deltatime;
        float fireInterval = 1.0f / fireRate;
        while(accumulatedTime >= 0.0f)
        {
            Shoot();
            accumulatedTime -= fireInterval;
        }
    }

    private void Shoot()
    {
        //DETTA är start på¨ett raybaseratskott istället
       /* 
        Player.FirePoint.rotation = Player.GetCamera().transform.rotation;
        ray.origin = Player.FirePoint.position;
        ray.direction = Player.GetCrossHairTarget() - Player.FirePoint.position;

        if(Physics.Raycast(ray, out hitInfo))
        {
            Debug.DrawLine(ray.origin, hitInfo.point, Color.red, 1);
        }
        */
        
        GameObject g = ObjectPooler.instance.SpawnFromPool("arrow");
        Projectile arrow = g.GetComponent<Projectile>();
        arrow.transform.position = Player.FirePoint.position;
        arrow.transform.LookAt(Player.CrossHair.transform.position);
        arrow.SetActive(true);
        arrow.SetForce((Player.CrossHair.transform.position - arrow.transform.position).normalized);

        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(arrow.gameObject, shakeData));

    }
    public override void EvaluateTransitions()
    {
        if (shotCooldown < 0)
        {
            if (Player.AimInput)
                stateMachine.Transition<AimState>();
            else
                stateMachine.Transition<IdleState>();
        }
    }
}
