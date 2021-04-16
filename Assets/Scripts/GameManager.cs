using UnityEngine;

public class GameManager : MonoBehaviour
{
    //Maybe come up with a fully static solution?
    public static GameManager instance = null;
    public CharacterController3D Player { get; set; }
    public OrbitCamera Camera { get; set; }

    void Awake()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(this);

        DontDestroyOnLoad(this);
        Initialize();
    }

    private void Initialize()
    {
        if (Player == null)
            Player = FindObjectOfType<CharacterController3D>();
        if (Camera == null)
            Camera = FindObjectOfType<OrbitCamera>();
    }
}