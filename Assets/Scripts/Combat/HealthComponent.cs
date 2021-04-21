//Pol Lozano Llorens
using UnityEngine;

public class HealthComponent : HitComponent
{
    [SerializeField] private float maxHealth = 1;
    [SerializeField] private float invulnerabilityTime = 1;
    private float timeSinceLastHit = 0.0f;
    private bool isStunned;

    public bool Invulnerable { get; set; }
    public float CurrentHealth { get; private set; }

    public bool IsStunned { get => isStunned; set => isStunned = value; }

    void Start() => ResetHealth();

    public void ResetHealth()
    {
        CurrentHealth = maxHealth;
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
        if (info.damager.GetType() == typeof(Projectile))
            isStunned = true;
        //Ignore damage if invulnerable or already dead
        if (CurrentHealth <= 0 || Invulnerable)
            return;

        SetInvulnerable();
        CurrentHealth -= info.amount;

        if (CurrentHealth <= 0) {
            //INVOKE DEATH EVENT
        }
        else
        {
            //INVOKE TAKE DAMAGE EVENT
        }
    }
}
