using UnityEngine;

public abstract class PlayerState : State
{
    private CharacterController3D player;
    public CharacterController3D Player => player = player != null ? player : (CharacterController3D)owner;
    //TODO: Have everything that is really important to the player as a property here
    protected Vector3 input;
    private float turnSpeed = 15f;

    public override void HandleUpdate()
    {
        input = Player.rawInput;
        Player.Animator.SetFloat("InputX", input.x, 1f, Time.deltaTime * 10f);
        Player.Animator.SetFloat("InputY", input.y, 1f, Time.deltaTime * 10f);
    }
    public override void HandleFixedUpdate()
    {
        //Rotate towards camera rotation
        float cameraYaw = Player.mainCamera.transform.rotation.eulerAngles.y;
        Player.playerMesh.rotation = Quaternion.Slerp(Player.playerMesh.rotation, Quaternion.Euler(0, cameraYaw, 0), turnSpeed * Time.fixedDeltaTime);
    }
}
