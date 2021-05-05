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
    private bool isStunned;
    private System.Type lastTypeToHit;

    [SerializeField] private UIHealthBar healthBar;

    //bool is PLayer?

    public bool Invulnerable { get; set; }
    public float CurrentHealth { get => currentHealth; }
    public System.Type LastType { get => lastTypeToHit; }
    public bool IsStunned { get => isStunned; set => isStunned = value; }

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

        //TODO: INVOKE TAKE DAMAGE EVENT

        if (currentHealth <= 0)
            Die(info);
    }

    private void TakeDamage(HitInfo info)
    {
        lastTypeToHit = info.damager.GetType();

        if (lastTypeToHit == typeof(Projectile))
            isStunned = true;
        //Check for stun. Maybe move somewhere else?

        SetInvulnerable();
        currentHealth -= info.amount;

        if(gameObject.tag != "Player")
        {
            healthBar?.Activate();
            healthBar?.DeactivateDelayed(7);
        }
        healthBar?.SetHealthBarPercentage(CurrentHealth / maxHealth);

        EventHandler<HitEvent>.FireEvent(new HitEvent(gameObject, info));

        if(shakeData != null)
            EventHandler<ShakeEvent>.FireEvent(new ShakeEvent(gameObject, shakeData));
    }

    private void Die(HitInfo info)
    {
        if (healthBar != null)
            Invoke("DeactivateHealthBar", 2);

        if(gameObject.tag == "Player")
        {
            DyingInfo playerDyingInfo = new DyingInfo
            {
                unit = gameObject,
                killer = info.damager.gameObject,
            };
            EventHandler<DyingEvent>.FireEvent(new DyingEvent(gameObject, playerDyingInfo));
        }
        //ENEMIES borde också få dyingEvent men det har vi inte just nu
        else
        {
            DeathInfo deathInfo = new DeathInfo
            {
                unit = gameObject,
                killer = info.damager.gameObject,
            };
            EventHandler<DeathEvent>.FireEvent(new DeathEvent(gameObject, deathInfo));
        }        
    }

    private void DeactivateHealthBar()
    {
        healthBar?.gameObject.SetActive(false);
    }
   
    public bool IsOnLayer(int layer)
    {
        return damageLayer == (damageLayer | (1 << layer));
    }
}
