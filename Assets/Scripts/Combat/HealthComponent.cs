//Author: Pol Lozano Llorens
//Secondary Author: Rickard Lindgren
using UnityEngine;

public class HealthComponent : HitComponent
{
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
        if (info.damager.GetType() == typeof(Projectile) && IsOnLayer(info.damager.gameObject.layer))
            isStunned = true;

        lastTypeToHit = info.damager.GetType();
        //Check for stun. Maybe move somewhere else?
        

        //Ignore damage if invulnerable or already dead
        if (Invulnerable || currentHealth <= 0)
            return;

        if(IsOnLayer(info.damager.gameObject.layer))
            SetInvulnerable();

        if (IsOnLayer(info.damager.gameObject.layer))
        {
            Debug.Log(gameObject.name + " got HURT");
            currentHealth -= info.amount;

            healthBar?.Activate();
            healthBar?.DeactivateDelayed(7);
            healthBar?.SetHealthBarPercentage(CurrentHealth / maxHealth);

            //TODO: INVOKE TAKE DAMAGE EVENT

            if (currentHealth <= 0)
            {
                if (healthBar != null)
                    Invoke("DeactivateHealthBar", 2);

                DeathInfo deathInfo = new DeathInfo
                {
                    unit = gameObject,
                    killer = info.damager.gameObject,
                };

                DeathEvent de = new DeathEvent(gameObject, deathInfo);
                EventHandler<DeathEvent>.FireEvent(de);
            }
        }        
    }

    private void DeactivateHealthBar()
    {
        healthBar?.gameObject.SetActive(false);
    }

    private bool IsOnLayer(int layer)
    {
        return damageLayer == (damageLayer | (1 << layer));
    }
}
