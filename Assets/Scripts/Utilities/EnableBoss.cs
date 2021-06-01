using UnityEngine;

public class EnableBoss : MonoBehaviour
{
    [SerializeField] private GameObject toActivate;
    public void OnTriggerEnter(Collider other)
    {
        toActivate.SetActive(true);
        gameObject.SetActive(false);
    }
}
