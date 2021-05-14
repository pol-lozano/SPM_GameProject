//Author: Rickard Lindgren
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Decorator
{
    protected BlackBoard blackBoard;
    protected BehaviourTree tree;
    public abstract bool Condition();

}
