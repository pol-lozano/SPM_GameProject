using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager instance = null;
    [SerializeField] private GameObject player;



    void Start()
    {

    }


    void Update()
    {
    }


    void ReloadGame()
    {
        /*
         play Fade Out effects:
             - fadeOut animation
             - play sounds
             - particles?
         */


        //Reload the scene with enemies and all


        //Resets the player to latest checkpoint
        //player.transform.position = CheckPoint.currentCheckPoint.position;


        //Reset player health and stamina 
        //player.GetComponent<AttributeSystem>().ResetAttributes();


        /*
         play Fade In effects:
             - fadeIn animation
             - play sounds
             - particles?
         */
    }
}