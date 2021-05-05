//Author: Rickard Lindgren

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class DebugCommandBase
{
    private string _commandID;
    private string _commandDescription;
    private string _commandFormat;

    public string commandID { get { return _commandID; } }
    public string commandDescription { get { return _commandDescription; } }
    public string commandFormat { get { return _commandFormat; } }

    public DebugCommandBase(string id, string desc, string form)
    {
        _commandID = id;
        _commandDescription = desc;
        _commandFormat = form;
    }
}

public class DebugCommand : DebugCommandBase
{

    Action command;

    public DebugCommand(string id, string desc, string form, Action com) : base(id, desc, form)
    {
        command = com;
    }

    public void Invoke()
    {
        command.Invoke();
    }
}
