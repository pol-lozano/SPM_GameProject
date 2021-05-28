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
        HitFX(defaultHit, other, hitDefaultFX);

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
            HitFX(fleshHit, other, hitFleshFX);
        }
        return true;
    }

    private void HitFX(AudioData audio, Collision collision, VisualEffect fx)
    {
        ContactPoint contact = collision.GetContact(0);
        fx.transform.position = contact.point + (contact.normal * 0.35f);
        fx.transform.rotation = Quaternion.FromToRotation(Vector3.up, contact.normal);
        fx.Play();
        EventHandler<SoundEvent>.FireEvent(new SoundEvent(audio, audioSource));
    }

}
