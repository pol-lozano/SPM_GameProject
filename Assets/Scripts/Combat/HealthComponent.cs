//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
using UnityEngine;

public class HealthComponent : HitComponent
{
    [SerializeField] private ShakeEventData shakeData;

    [SerializeField] private float maxHealth = 1;
    [SerializeField] private float currentHealth = 1;
    [SerializeField] private float invulnerabilityTime = 1;
    [SerializeField] private LayerMask damageLayer;

    private float timeSinceLastHit = 0.0f;
    private System.Type lastTypeToHit;

    [SerializeField] private bool isPlayer;

    public bool IsPlayer => isPlayer;

    public bool Invulnerable { get; set; }
    public bool IsStunned { get; set; }
    public float MaxHealth => maxHealth;
    public float CurrentHealth => currentHealth;
    public System.Type LastType => lastTypeToHit;

    void Start() => ResetHealth();

    public void ResetHealth()
    {
        currentHealth = maxHealth;
        Invulnerable = false;
        timeSinceLastHit = 0;
    }

    public void Update()
    {       
        if (Invulnerable)
        {
            timeSinceLastHit += Time.deltaTime;
            if (timeSinceLastHit >= invulnerabilityTime)
                SetVulnerable();
        }
    }

    public void SetInvulnerable() //Maybe rename to something better?
    {
        Invulnerable = true;
        //FIRE BECOME INVULNERABLE EVENT
    }

    public void SetVulnerable()
    {
        Invulnerable = false;
        timeSinceLastHit = 0;
        //FIRE BECOME VULNERABLE EVENT
    }

    public override void HandleHit(HitInfo info)
    {
        if (IsOnLayer(info.damager.gameObject.layer) == false)
            return;

        //Ignore damage if invulnerable or already dead
        if (Invulnerable || currentHealth <= 0)
            return;

        TakeDamage(info);

        if (currentHealth <= 0)
            Die(info);
    }

    private void TakeDamage(HitInfo info)
    {
        SetInvulnerable();
        currentHealth -= info.amount;

        if (info.damager.GetType() == typeof(Projectile)) //Fix better
            IsStunned = true;
        //Check for stun. Maybe move somewhere else?

        EventHandler<HitEvent>.FireEvent(new HitEvent(info));
        EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));
    }

    private void Die(HitInfo info)
    {    
        if(IsPlayer)
        {
            DyingInfo playerDyingInfo = new DyingInfo
            {
                unit = gameObject,
                killer = info.damager.gameObject,
            };
            EventHandler<DyingEvent>.FireEvent(new DyingEvent(playerDyingInfo));
        }
        //ENEMIES borde också få dyingEvent men det har vi inte just nu
        else
        {
            DeathInfo deathInfo = new DeathInfo
            {
                unit = gameObject,
                killer = info.damager.gameObject,
            };
            EventHandler<DeathEvent>.FireEvent(new DeathEvent(deathInfo));
        }        
    }
   
    public bool IsOnLayer(int layer)
    {
        return damageLayer == (damageLayer | (1 << layer));
    }
}
