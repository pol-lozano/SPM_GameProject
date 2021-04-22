using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class DebugController : MonoBehaviour
{

    [SerializeField] private InputHandler input;
    [SerializeField] private PlayerDebugger playerdebugger;
    [SerializeField] private List<DebugCommandBase> commandList;

    public static DebugCommand GOD_MODE;
    public static DebugCommand HELP;
    
    private bool showConsole;
    private bool enter = false;
    private bool help;
    private string command;


    private void Awake()
    {
        /*Create all the commands with name, description and function to be called*/
        GOD_MODE = new DebugCommand("god_mode", "The player can fly and turns off all physics", "god_mode", () => playerdebugger.GodMode());
        HELP = new DebugCommand("HELP", "Shows all the commands available", "HELP", () => { help = true; });

        /*Set the commands in the List*/
        commandList = new List<DebugCommandBase>
        {
            GOD_MODE,
            HELP
        };
    }


    /*Draws all the gui for the debugger console*/
    Vector2 scroll;
    private void OnGUI()
    {
        if (!showConsole) return;
        float y = 0;
        if (help)
        {
            GUI.Box(new Rect(0, y, Screen.width, 100), "");
            Rect viewport = new Rect(0, 0, Screen.width - 30, 20 * commandList.Count);
            scroll = GUI.BeginScrollView(new Rect(0, y + 5, Screen.width, 90), scroll, viewport);
            for(int i = 0; i<commandList.Count;i++)
            {
                string label = commandList[i].commandFormat + " - " + commandList[i].commandDescription;
                Rect labelrect = new Rect(5, 20 * i, viewport.width - 100, 20);
                GUI.Label(labelrect, label);
            }
            GUI.EndScrollView();
            y += 100;
        }

        
        GUI.Box(new Rect(0, y, Screen.width, 30),"");
        command = GUI.TextField(new Rect(10, y + 5, Screen.width - 20, 20), command);
    }

    private void Update()
    {
        if(enter && showConsole)
        {
            HandleInput();
            command = "";
            enter = false;
        }
    }

    private void HandleInput()
    {
        for(int i = 0; i < commandList.Count; i++)
        {
            DebugCommandBase commandBase = commandList[i];
            if (command.Contains(commandBase.commandID))
            {
                DebugCommand c = commandList[i] as DebugCommand;
                if (c != null)
                {
                    c.Invoke();
                }
            }
        }
    }










    private void OnEnable() {input.debugEvent += StartDebugging; input.enterEvent += OnEnter; }
    private void OnDisable() {input.debugEvent -= StartDebugging; input.enterEvent -= OnEnter; }

    private void StartDebugging() { showConsole = !showConsole; }
    private void OnEnter() { enter = true; }


}
