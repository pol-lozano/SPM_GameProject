//Author: Pol Lozano Llorens
using UnityEngine;

public class MeleeWeapon : MonoBehaviour
{
    [SerializeField] private int damageAmount;
    [SerializeField] private AudioClip hitAudio;
    [SerializeField] private AudioClip attackAudio;

    public Collider Collider { get; private set; }

    private void Awake()
    {
        Collider = GetComponent<Collider>();
        Collider.enabled = false;
    }

    private void OnCollisionEnter(Collision collision) => CheckHit(collision);

    private bool CheckHit(Collision other)
    {
        HitBox h = other.collider.GetComponent<HitBox>();

        if (h == null)
            return false;

        //Check if owner of health system
        HitInfo info = new HitInfo()
        {
            damager = this,
            amount = damageAmount,
            hitPosition = other.GetContact(0).point
        };

        h.ApplyHit(info);

        return true;
    }
}
