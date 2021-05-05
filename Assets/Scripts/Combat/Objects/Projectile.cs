//Author: Rickard Lindgren
//Secondary Author: Pol Lozano Llorens
using UnityEngine;
using UnityEngine.VFX;

public class Projectile : MonoBehaviour
{
    //[SerializeField] private LayerMask collisionLayer;
    [SerializeField] private float force;
    [SerializeField] private float lifetime;
    [SerializeField] private Collider coll;
    [SerializeField] private int damageAmount;
    [SerializeField] private MeshRenderer mesh;
    [SerializeField] private VisualEffect particles;


    private Rigidbody rb;

    private bool hit;
    private float timeToKillAfterHit = 1;
    private float timer;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        mesh.enabled = true;
        timer = timeToKillAfterHit;
        coll.enabled = true;
        rb.constraints = RigidbodyConstraints.FreezeRotationX;
        rb.constraints = RigidbodyConstraints.FreezeRotationY;
        Invoke(nameof(Disable), lifetime);    
    }

    public void SetForce(Vector3 dir)
    {
        rb.AddForce(dir * force);
    }

    public void SetActive(bool b)
    {
        gameObject.SetActive(b);
    }
    
    private void Disable()
    {
        gameObject.SetActive(false);     
    }

    private void OnDisable()
    {
        rb.velocity = Vector3.zero;
        hit = false;
    }

    private void OnCollisionEnter(Collision collision) => CheckHit(collision);
    
    private bool CheckHit(Collision other)
    {
        HitBox h = other.collider.GetComponent<HitBox>();

        if (h == null)
            return false;

        HealthComponent hc = other.gameObject.GetComponent<HealthComponent>();

        if (hc != null && hc.IsOnLayer(gameObject.layer))
            mesh.enabled = false;

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
