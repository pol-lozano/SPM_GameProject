//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
using System;
using UnityEngine;

public class HealthComponent : HitComponent
{
    [SerializeField] private ShakeEventData shakeData;
    [SerializeField] private float maxHealth = 1;
    [SerializeField] private float currentHealth = 1;
    [SerializeField] private float invulnerabilityTime = 1;
    [SerializeField] private LayerMask damageLayer;
    [SerializeField] private AudioData deathSound;

    private float timeSinceLastHit = 0.0f;
    [SerializeField] private bool isPlayer;

    public bool IsPlayer => isPlayer;

    public bool Invulnerable { get; set; }
    public bool IsStunned { get; set; }
    public float MaxHealth => maxHealth;
    public float CurrentHealth => currentHealth;
    public Type LastType { get; private set; }

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
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(hitSounds, audioSource));

        LastType = info.damager.GetType();
        if (LastType == typeof(Projectile)) //Fix better
            IsStunned = true;

        EventHandler<HitEvent>.FireEvent(new HitEvent(info));
        if(shakeData != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(shakeData));    
    }

    private void Die(HitInfo info)
    {
        DyingInfo deathInfo = new DyingInfo
        {
            hitComponent = this,
            killer = info.damager
        };
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(deathSound, audioSource));
        EventHandler<DyingEvent>.FireEvent(new DyingEvent(deathInfo));
    }
   
    public bool IsOnLayer(int layer)
    {
        return damageLayer == (damageLayer | (1 << layer));
    }
}
