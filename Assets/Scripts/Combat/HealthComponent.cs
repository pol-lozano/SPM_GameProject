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
    //bool is PLayer?

    public bool Invulnerable { get; set; }
    public float CurrentHealth { get => currentHealth; }

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
        //Check for stun. Maybe move somewhere else?
        if (info.damager.GetType() == typeof(Projectile) && IsOnLayer(info.damager.gameObject.layer))
            isStunned = true;

        //Ignore damage if invulnerable or already dead
        if (Invulnerable || currentHealth <= 0)
            return;

        SetInvulnerable();

        if (IsOnLayer(info.damager.gameObject.layer))
        {
            Debug.Log(gameObject.name + " got HURT");
            currentHealth -= info.amount;

            //TODO: INVOKE TAKE DAMAGE EVENT

            if (currentHealth <= 0)
            {
                //TODO: INVOKE DEATH EVENT

                DeathInfo deathInfo = new DeathInfo
                {
                    unit = gameObject,
                    killer = info.damager.gameObject,
                };
                DeathEvent de = new DeathEvent(this.gameObject, deathInfo);
                EventHandler<DeathEvent>.FireEvent(de);
            }
        }        
    }

    private bool IsOnLayer(int layer)
    {
        return damageLayer == (damageLayer | (1 << layer));
    }
}
