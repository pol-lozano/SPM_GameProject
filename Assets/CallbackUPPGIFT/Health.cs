using UnityEngine;
using UnityEngine.InputSystem;

public class Health : MonoBehaviour
{
    [SerializeField] private InputHandler input;

    private bool clickInput = false;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0.3f, 0, 0));

        Vector3 mouse = Mouse.current.position.ReadValue();
        Ray ray = Camera.main.ScreenPointToRay(mouse);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit) && clickInput)
        {
            
            clickInput = false;
            StartDying();
        }
        clickInput = false;
    }


    void StartDying()
    {
        UnitDying udi = new UnitDying();
        udi.unit = gameObject;
        udi.anim = gameObject.GetComponent<Animator>();
        udi.EventDescription = "Unit "+gameObject.name+" is dying";
        EventSystem.Current.FireEvent(udi);
        Invoke("Die", 1);
    }

    void Die()
    {
        UnitDeath udi = new UnitDeath();
        udi.unit = gameObject;
        //udi.particles = GetComponent<ParticleHolder>().GetParticleDeath();
        udi.audioClip = "death";
        EventSystem.Current.FireEvent(udi);
    }





    private void OnEnable() { input.attackEvent += OnAttack; }
    private void OnDisable() { input.attackEvent -= OnAttack; }
    private void OnAttack() => clickInput = true;
}
