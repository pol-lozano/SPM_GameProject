using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Audio/CharacterAudioData")]

public class CharacterAudioData : ScriptableObject
{
    public AudioData hit;
    public AudioData death;
    public AudioData footsteps;
}
