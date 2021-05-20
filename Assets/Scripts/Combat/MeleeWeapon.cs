//Author: Pol Lozano Llorens
using UnityEngine;

public class MeleeWeapon : MonoBehaviour
{
    [SerializeField] private int damageAmount;
    [SerializeField] private AudioData fleshHit;
    [SerializeField] private AudioData defaultHit;
    [SerializeField] private AudioSource audioSource;

    public Collider Collider { get; private set; }
    public AudioSource AudioSource { get => audioSource; set => audioSource = value; }

    private void Awake()
    {
        Collider = GetComponent<Collider>();
        Collider.enabled = false;
    }

    private void OnCollisionEnter(Collision collision) => CheckHit(collision);

    private bool CheckHit(Collision other)
    {
        HitBox hitBox = other.collider.GetComponent<HitBox>();

        if (hitBox == null)
            return false;

        //Check if owner of health system
        HitInfo info = new HitInfo()
        {
            hitComponent = hitBox.hitComponent,
            damager = this,
            amount = damageAmount,
            hitPosition = other.GetContact(0).point
        };

        hitBox.ApplyHit(info);
        if (hitBox.hitComponent is HealthComponent)
        {
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(fleshHit, audioSource));
        } else
        {
            EventHandler<SoundEvent>.FireEvent(new SoundEvent(defaultHit, audioSource));
        }

        return true;
    }
}
