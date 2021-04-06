public abstract class PlayerState : State
{
    private CharacterController3D player;
    public CharacterController3D Player => player = player != null ? player : (CharacterController3D)owner;
    //TODO: Have everything that is really important to the player as a property here
}
