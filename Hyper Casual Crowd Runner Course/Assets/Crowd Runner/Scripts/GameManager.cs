using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public enum GameState { Menu, Game,LevelComplete,Gameover}
    private GameState gameState;
    public static Action<GameState> onGameStateChanged;
    private void Awake()
    {
        if (instance != null)
            Destroy(gameObject);
        else
            instance = this;
    }
        
    // Start is called before the first frame update
    void Start()
    {
        //PlayerPrefs.DeleteAll();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetGameState(GameState gameState)
    {
        this.gameState = gameState;
        onGameStateChanged?.Invoke(gameState);
        Debug.Log("Game State changed:-" + gameState);
    }
    public bool IsGameState()
    {
       return gameState == GameState.Game;
    }
}
