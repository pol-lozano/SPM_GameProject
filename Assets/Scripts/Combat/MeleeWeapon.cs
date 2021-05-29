//Author: Pol Lozano Llorens
using UnityEngine;
using UnityEngine.VFX;

public class MeleeWeapon : MonoBehaviour
{
    [SerializeField] private int damageAmount;
    [SerializeField] private AudioData fleshHit;
    [SerializeField] private AudioData defaultHit;
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private VisualEffect hitDefaultFX;
    [SerializeField] private VisualEffect hitFleshFX;

    private bool recentlyHit;
    private float fxTimer = 1;
    private float timer;
    public Collider Collider { get; private set; }
    public AudioSource AudioSource { get => audioSource; set => audioSource = value; }

    private void Awake()
    {
        timer = fxTimer;
        Collider = GetComponent<Collider>();
        Collider.enabled = false;
    }

    private void Update()
    {
        if(recentlyHit == true)
        {
            timer -= Time.deltaTime;
            if(timer <= 0)
            {
                timer = fxTimer;
                recentlyHit = false;
            }
        }
    }
    private void OnCollisionEnter(Collision collision) => CheckHit(collision);

    
    private bool CheckHit(Collision other)
    {
        HitBox hitBox = other.collider.GetComponent<HitBox>();
        if(recentlyHit == false)
        {
            HitFX(defaultHit, other, hitDefaultFX);
        }
        

        if (hitBox == null)
        {
            recentlyHit = true;
            return false;
        }
            

        //Check if owner of health system
        HitInfo info = new HitInfo()
        {
            hitComponent = hitBox.hitComponent,
            damager = this,
            amount = damageAmount,
            hitPosition = other.GetContact(0).point
        };

        hitBox.ApplyHit(info);
        
        if (hitBox.hitComponent is HealthComponent && recentlyHit == false )
        {
            HitFX(fleshHit, other, hitFleshFX);
        }
        recentlyHit = true;
        return true;
    }

    private void HitFX(AudioData audio, Collision collision, VisualEffect fx)
    {
        if(fx != null)
        {
            ContactPoint contact = collision.GetContact(0);
            fx.transform.position = contact.point + (contact.normal * 0.35f);
            fx.transform.rotation = Quaternion.FromToRotation(Vector3.up, contact.normal);
            fx.Play();
        }
        
        if(audio != null)
        {
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(audio, audioSource));
        }
        
    }

}
