using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class ShootState : AimState
{
    [SerializeField] private float shotCooldown;
    [SerializeField] private float shotTimer;

    private Ray ray;
    private RaycastHit hitInfo;

    //-------------------------
    private float fireRate = 1;
    private float accumulatedTime;
    //-------------------------
    public override void Enter()
    {
        
        //Debug.Log("SKJUT");
        //logik för skott

        StartShooting();

        shotCooldown = shotTimer;
        
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
        //DETTA KAN ÄNDRAS NÄR KARAKTÄREN ROTERAS PÅ RÄTT SÄTT
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
        arrow.Owner = "player";
        arrow.transform.position = Player.FirePoint.position;
        arrow.transform.LookAt(Player.CrossHair.transform.position);
        arrow.SetActive(true);
        arrow.SetForce((Player.CrossHair.transform.position - arrow.transform.position).normalized);
    }
    public override void EvaluateTransitions()
    {
        if (shotCooldown < 0) stateMachine.Transition<AimState>();
    }
}
